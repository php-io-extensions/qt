<?php

declare(strict_types=1);

/*
 * Generate a stub enum and its compile-time checks from a Qt header enum.
 *
 *   php scripts/gen-enum.php <header> <C++ enum> <C++ scope> <PHP enum> [strip-prefix] [--since=<major>.<minor>:<Name>,…]
 *
 *   php scripts/gen-enum.php qcoreevent.h Type QEvent 'QEvent\Type'
 *   php scripts/gen-enum.php qnamespace.h WidgetAttribute Qt 'Qt\WidgetAttribute' WA_
 *
 * Writes the enum body to stdout as stub cases and src/checks/<Scope>_<Enum>.inc with one
 * static_assert per case, so every build proves the values against the Qt it compiles with.
 * Enumerators that repeat an earlier value are dropped: a backed PHP enum holds each value once.
 * Preprocessor blocks follow a default build: #ifdef blocks are skipped, #ifndef and #if kept.
 * --since puts the named enumerators' checks behind a QT_VERSION guard, for values newer than
 * the extension's Qt floor; repeat it per version.
 */

// --since=<major>.<minor>:<Name>[,<Name>…] wraps those enumerators' checks in a QT_VERSION guard:
// the extension's floor predates them, so an older Qt compiles without them and a newer one still proves them.
$since = [];
$args = [];
foreach (array_slice($argv, 1) as $arg) {
    if (preg_match('/^--since=(\d+)\.(\d+):(.+)$/', $arg, $m)) {
        foreach (explode(',', $m[3]) as $name) {
            $since[$name] = [(int) $m[1], (int) $m[2]];
        }
        continue;
    }
    $args[] = $arg;
}
[$header, $enum, $scope, $php_enum] = $args + [null, null, null, null];
$strip = $args[4] ?? '';

if ($php_enum === null) {
    fwrite(STDERR, "usage: php scripts/gen-enum.php <header> <C++ enum> <C++ scope> <PHP enum> [strip-prefix] [--since=<major>.<minor>:<Name>,…]\n");
    exit(1);
}

$source = file_get_contents($header);
if (! preg_match('/enum\s+' . preg_quote($enum, '/') . '\s*(?::\s*\w+\s*)?\{(.*?)\};/s', $source, $m)) {
    fwrite(STDERR, "enum {$enum} not found in {$header}\n");
    exit(1);
}

$body = preg_replace(['#/\*.*?\*/#s', '#//[^\n]*#'], '', $m[1]);
// A deprecation message may hold a comma (Key_mu's does): drop the macro before the body is split on commas.
$body = preg_replace('/\s*Q_DECL_ENUMERATOR_DEPRECATED\w*(?:\s*\((?:"[^"]*"|[^)"])*\))?/', '', $body);

/*
 * Keep what a default Qt build compiles: #ifndef QT_NO_<feature> and #if blocks (deprecation
 * gates) are on by default, #ifdef <feature> blocks are opt-in and off; #else flips the block.
 */
$kept = [];
$stack = [];
foreach (explode("\n", $body) as $line) {
    if (preg_match('/^\s*#\s*(ifdef|ifndef|if|else|elif|endif)\b/', $line, $d)) {
        match ($d[1]) {
            'ifdef' => $stack[] = false,
            'ifndef', 'if' => $stack[] = true,
            'else', 'elif' => $stack[] = ! array_pop($stack),
            'endif' => array_pop($stack),
        };
        continue;
    }
    if (! in_array(false, $stack, true)) {
        $kept[] = $line;
    }
}
$body = implode("\n", $kept);
$values = [];
$next = 0;

foreach (array_filter(array_map('trim', explode(',', $body))) as $entry) {
    if (! preg_match('/^(\w+)(?:\s+Q_DECL_ENUMERATOR_DEPRECATED\w*(?:\([^)]*\))?)?\s*(?:=\s*(.+))?$/s', $entry, $e)) {
        fwrite(STDERR, "cannot parse enumerator: {$entry}\n");
        exit(1);
    }

    $name = $e[1];
    $value = isset($e[2]) ? evaluate(trim($e[2]), $values) : $next;
    $values[$name] = $value;
    $next = $value + 1;
}

/** Numbers, hex, earlier enumerators, and + - | << between them. */
function evaluate(string $expr, array $known): int
{
    $expr = trim($expr, " \t\n()");
    foreach (['|', '+', '-'] as $op) {
        $parts = preg_split('/\s*' . preg_quote($op, '/') . '\s*/', $expr);
        if (count($parts) > 1 && $parts[0] !== '') {
            $result = evaluate(array_shift($parts), $known);
            foreach ($parts as $part) {
                $v = evaluate($part, $known);
                $result = match ($op) { '|' => $result | $v, '+' => $result + $v, '-' => $result - $v };
            }
            return $result;
        }
    }
    if (preg_match('/^(.+?)\s*<<\s*(.+)$/', $expr, $s)) {
        return evaluate($s[1], $known) << evaluate($s[2], $known);
    }
    if (preg_match('/^0x[0-9a-f]+u?$/i', $expr)) {
        return intval(rtrim($expr, 'uU'), 16);
    }
    if (preg_match('/^-?\d+u?$/i', $expr)) {
        return (int) rtrim($expr, 'uU');
    }
    if (isset($known[$expr])) {
        return $known[$expr];
    }
    fwrite(STDERR, "cannot evaluate: {$expr}\n");
    exit(1);
}

/*
 * A PHP case name cannot start with a digit: such a name keeps its prefix (Key_0 → KEY_0).
 * With $keep_lone_case a one-letter word keeps its case, for names that differ only in it
 * (Key_Dead_a → DEAD_a, Key_Dead_A → DEAD_A).
 */
function screaming(string $name, string $strip, bool $keep_lone_case = false): string
{
    if ($strip !== '' && str_starts_with($name, $strip) && ! ctype_digit(substr($name, strlen($strip), 1))) {
        $name = substr($name, strlen($strip));
    }
    $snake = preg_replace(['/([a-z\d])([A-Z])/', '/([A-Z]+)([A-Z][a-z])/'], '$1_$2', $name);
    if (! $keep_lone_case) {
        return strtoupper($snake);
    }

    return implode('_', array_map(fn (string $word): string => preg_match('/^[a-z]$/', $word) ? $word : strtoupper($word), explode('_', $snake)));
}

$seen = [];
$unique = [];
foreach ($values as $name => $value) {
    if (! isset($seen[$value])) {
        $seen[$value] = true;
        $unique[$name] = $value;
    }
}
$spellings = array_count_values(array_map(fn (string $name): string => screaming($name, $strip), array_keys($unique)));

$cases = [];
// The header's name only: where a copy of it sat says nothing; the runbook records the Qt it came from.
$checks = ['/* Generated by scripts/gen-enum.php from '.basename($header).': do not edit. */'];

foreach ($unique as $name => $value) {
    $cases[] = sprintf('    case %s = %d;', screaming($name, $strip, $spellings[screaming($name, $strip)] > 1), $value);
    $check = sprintf('static_assert(static_cast<long long>(%s::%s) == %dLL, "%s::%s");', $scope, $name, $value, $scope, $name);
    $checks[] = isset($since[$name])
        ? sprintf("#if QT_VERSION >= QT_VERSION_CHECK(%d, %d, 0)\n%s\n#endif", $since[$name][0], $since[$name][1], $check)
        : $check;
}

$dir = dirname(__DIR__) . '/src/checks';
@mkdir($dir, 0755, true);
file_put_contents(sprintf('%s/%s_%s.inc', $dir, $scope, $enum), implode("\n", $checks) . "\n");

echo implode("\n", $cases), "\n";
