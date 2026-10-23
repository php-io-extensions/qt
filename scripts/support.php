<?php

declare(strict_types=1);

/*
 * The support list: every public member function of the classes QtCore, QtGui and QtWidgets
 * declare, marked bound when a stub declares the PHP method its naming rule gives.
 *
 *   php84 scripts/support.php           writes SUPPORT.md and the README badge
 *   php84 scripts/support.php --check   exits 1 when either differs (the date is not compared)
 *
 * The headers are read through clang++'s AST dump of every public class header of the three modules, compiled with
 * QT_ANNOTATE_ACCESS_SPECIFIER so signals carry AnnotateAttr "qt_signal". A member is a public,
 * declared (not implicit, not deleted) member function or constructor name; overloads count once.
 * Not members: signals (bound by connecting their signature), operators, destructors, the Q_OBJECT
 * machinery, deprecated members, class templates, private classes, and the classes the extension
 * marshals as PHP values.
 */

const SUPPORT_LABEL = 'Qt API';
const SUPPORT_MODULES = ['QtCore', 'QtGui', 'QtWidgets'];
const SUPPORT_META = ['metaObject', 'qt_metacast', 'qt_metacall', 'qt_static_metacall', 'tr', 'trUtf8', 'd_func', 'q_func'];
const SUPPORT_VALUES = [
    'QString', 'QStringView', 'QAnyStringView', 'QLatin1String', 'QLatin1StringView', 'QByteArray', 'QByteArrayView', 'QUtf8StringView',
    'QList', 'QVector', 'QStringList', 'QSet', 'QHash', 'QMap', 'QSpan', 'QVariantList', 'QVariantMap', 'QVariantHash', 'QModelIndexList',
];

/** @return array<string, list<string>> class (C++ qualified) => sorted keys Class::name */
function support_counted(string $astFile): array
{
    $counted = [];
    foreach (support_walk($astFile)['members'] as $class => $names) {
        foreach ($names as $name => $live) {
            if ($live) {
                $counted[$class][] = "{$class}::{$name}";
            }
        }
    }
    foreach ($counted as &$keys) {
        sort($keys, SORT_STRING);
    }
    unset($keys);
    ksort($counted, SORT_STRING);

    return $counted;
}

/** @return array<string, list<string>> class => its public bases, in declaration order */
function support_parents(string $astFile): array
{
    $parents = support_walk($astFile)['parents'];
    ksort($parents, SORT_STRING);

    return $parents;
}

/**
 * One pass over a text AST dump. A location without a path is in the file last printed with one.
 * @return array{members: array<string, array<string, bool>>, parents: array<string, list<string>>}
 */
function support_walk(string $astFile): array
{
    static $cache = [];
    if (isset($cache[$astFile])) {
        return $cache[$astFile];
    }
    $members = [];   // class => name => live (false once any declaration of it was not countable)
    $parents = [];
    $names = [];     // record id => qualified name, for out-of-line definitions of nested classes
    $frames = [];    // depth => ['name' => ?string, 'skip' => bool, 'access' => string]
    $member = null;  // the member the deeper lines belong to
    $file = '';
    $modules = '#/(' . implode('|', SUPPORT_MODULES) . ')\.framework/#';
    $close = static function () use (&$member, &$members): void {
        if ($member !== null) {
            // A name is a member when one of its declarations is: overloads count once.
            $live = ! $member['signal'] && ! $member['deprecated'];
            $members[$member['class']][$member['name']] = ($members[$member['class']][$member['name']] ?? false) || $live;
        }
        $member = null;
    };
    $handle = fopen($astFile, 'r');
    if ($handle === false) {
        throw new RuntimeException("Cannot read {$astFile}.");
    }
    while (($line = fgets($handle)) !== false) {
        $line = rtrim($line, "\n");
        if (preg_match('#<(/[^:<>]+):\d+:\d+#', $line, $m) === 1) {
            $file = $m[1];
        }
        if (preg_match('/^([| `]*)[|`]-(\w+)(.*)$/', $line, $m) !== 1) {
            continue;
        }
        $depth = intdiv(strlen($m[1]), 2);
        $kind = $m[2];
        $rest = $m[3];
        if ($member !== null && $depth <= $member['depth']) {
            $close();
        }
        if ($member !== null) {
            if ($kind === 'DeprecatedAttr') {
                $member['deprecated'] = true;
            } elseif ($kind === 'AnnotateAttr' && str_contains($rest, '"qt_signal"')) {
                $member['signal'] = true;
            }
            continue;
        }
        foreach (array_keys($frames) as $d) {
            if ($d >= $depth) {
                unset($frames[$d]);
            }
        }
        $enclosing = $depth === 0 ? null : ($frames[$depth - 1] ?? null);

        if (in_array($kind, ['NamespaceDecl', 'ClassTemplateDecl', 'ClassTemplateSpecializationDecl', 'ClassTemplatePartialSpecializationDecl', 'LinkageSpecDecl'], true)) {
            // Members of namespaces, templates and specialisations are not counted. extern "C" blocks are transparent.
            $frames[$depth] = ['name' => null, 'skip' => $kind !== 'LinkageSpecDecl', 'access' => 'public', 'transparent' => $kind === 'LinkageSpecDecl'];
            continue;
        }
        if ($kind === 'CXXRecordDecl') {
            if (preg_match('/^ 0x([0-9a-f]+)/', $rest, $id) !== 1 || preg_match('/ (class|struct|union) (\w+)( definition)?$/', $rest, $r) !== 1) {
                continue;
            }
            $outer = null;
            if (preg_match('/ prev 0x([0-9a-f]+)/', $rest, $p) === 1 && isset($names[$p[1]])) {
                $qualified = $names[$p[1]];
            } elseif (preg_match('/ parent 0x([0-9a-f]+)/', $rest, $p) === 1 && isset($names[$p[1]])) {
                $qualified = "{$names[$p[1]]}::{$r[2]}";
            } else {
                $outer = $enclosing !== null && ! ($enclosing['transparent'] ?? false) ? $enclosing : null;
                $qualified = $outer === null ? $r[2] : ($outer['name'] === null ? null : "{$outer['name']}::{$r[2]}");
            }
            $implicit = str_contains($rest, ' implicit ');
            if ($qualified !== null && ! $implicit) {
                $names[$id[1]] = $qualified;
            }
            $skip = $qualified === null || $implicit || ($outer !== null && $outer['skip']) || ! isset($r[3])
                || ! preg_match($modules, $file) || in_array(explode('::', $qualified)[0], SUPPORT_VALUES, true)
                || str_contains($qualified, 'Private') || ! str_starts_with($qualified, 'Q');
            $frames[$depth] = ['name' => $qualified, 'skip' => $skip, 'access' => $r[1] === 'class' ? 'private' : 'public'];
            continue;
        }
        if ($enclosing === null || $enclosing['skip'] || $enclosing['name'] === null) {
            continue;
        }
        if ($kind === 'AccessSpecDecl') {
            $frames[$depth - 1]['access'] = substr($rest, strrpos($rest, ' ') + 1);
            continue;
        }
        if (in_array($kind, ['public', 'protected', 'private'], true) && preg_match("/^ '([\\w:]+)/", $rest, $b) === 1) {
            if ($kind === 'public') {
                $parents[$enclosing['name']][] = $b[1];
            }
            continue;
        }
        if (! in_array($kind, ['CXXMethodDecl', 'CXXConstructorDecl'], true) || $enclosing['access'] !== 'public'
            || str_contains($rest, ' implicit ') || preg_match('/ delete$/', $rest) === 1) {
            continue;
        }
        if (preg_match("/> (?:(?:col|line):\\d+(?::\\d+)?|\\/[^ ]+:\\d+:\\d+) (?:used |referenced |invalid |constexpr |consteval )*(operator\\S*|~?\\w+) '/", $rest, $n) !== 1) {
            continue;
        }
        $name = $n[1];
        if (str_starts_with($name, 'operator') || str_starts_with($name, '~') || in_array($name, SUPPORT_META, true)) {
            continue;
        }
        $member = ['class' => $enclosing['name'], 'name' => $name, 'depth' => $depth, 'signal' => false, 'deprecated' => false];
    }
    $close();
    fclose($handle);
    foreach ($members as $class => $list) {
        $members[$class] = array_filter($list);
        if ($members[$class] === []) {
            unset($members[$class]);
        }
    }

    return $cache[$astFile] = ['members' => $members, 'parents' => $parents];
}

/**
 * A member as its binding: QTabWidget::insertTab => ['QTabWidget', 'insertTab']; a constructor is
 * __construct; a nested class takes its PHP namespace form (QMetaObject::Connection => QMetaObject\Connection).
 * @return array{string, string}
 */
function support_php_name(string $class, string $key): array
{
    $name = substr($key, strlen($class) + 2);
    $segments = explode('::', $class);

    return [implode('\\', $segments), $name === end($segments) ? '__construct' : $name];
}

/**
 * The PHP classes and functions the stubs declare.
 * @return array<string, array<string, true>> PHP class ('' for functions) => method names
 */
function support_bound(string $stubDir): array
{
    $bound = [];
    foreach (glob(rtrim($stubDir, '/') . '/*.stub.php') ?: [] as $file) {
        foreach (support_declared(file_get_contents($file)) as $class => $methods) {
            foreach ($methods as $method) {
                $bound[$class][$method] = true;
            }
        }
    }

    return $bound;
}

/**
 * The classes (with their namespace) and public methods, and the free functions, of one stub.
 * @return array<string, list<string>>
 */
function support_declared(string $source): array
{
    $tokens = token_get_all($source);
    $out = [];
    $namespace = '';
    $braced = false;
    $depth = 0;
    $class = null;
    $classDepth = -1;
    $next = static function (int $i) use ($tokens): int {
        for ($i++; $i < count($tokens); $i++) {
            if (! is_array($tokens[$i]) || ! in_array($tokens[$i][0], [T_WHITESPACE, T_COMMENT, T_DOC_COMMENT], true)) {
                return $i;
            }
        }

        return $i;
    };
    for ($i = 0, $n = count($tokens); $i < $n; $i++) {
        $token = $tokens[$i];
        if ($token === '{' || (is_array($token) && in_array($token[0], [T_CURLY_OPEN, T_DOLLAR_OPEN_CURLY_BRACES], true))) {
            $depth++;
            continue;
        }
        if ($token === '}') {
            if ($depth === 0 && $braced) {
                $braced = false;
                $namespace = '';
                continue;
            }
            $depth--;
            if ($class !== null && $depth === $classDepth) {
                $class = null;
            }
            continue;
        }
        if (! is_array($token)) {
            continue;
        }
        if ($token[0] === T_NAMESPACE) {
            $j = $next($i);
            $namespace = $tokens[$j] === '{' ? '' : $tokens[$j][1];
            $k = $tokens[$j] === '{' ? $j : $next($j);
            if ($tokens[$k] === '{') {
                $braced = true;
                $i = $k;
            }
            continue;
        }
        if (in_array($token[0], [T_CLASS, T_INTERFACE, T_TRAIT, T_ENUM], true)) {
            $j = $next($i);
            if (is_array($tokens[$j]) && $tokens[$j][0] === T_STRING) {
                $class = ltrim("{$namespace}\\{$tokens[$j][1]}", '\\');
                $classDepth = $depth;
                $out[$class] ??= [];
                for ($i = $j; $tokens[$i] !== '{'; $i++) {
                }
                $depth++;
            }
            continue;
        }
        if ($token[0] === T_FUNCTION) {
            $j = $next($i);
            // A method name may be a keyword (`new`); a closure has `(` here.
            if (! is_array($tokens[$j]) || preg_match('/^\w+$/', $tokens[$j][1]) !== 1) {
                continue;
            }
            if ($class === null) {
                $out[''][] = ltrim("{$namespace}\\{$tokens[$j][1]}", '\\');
            } elseif ($depth === $classDepth + 1 && ! support_hidden($tokens, $i)) {
                $out[$class][] = $tokens[$j][1];
            }
        }
    }

    return array_map(static fn (array $methods): array => array_values(array_unique($methods)), $out);
}

/** A private or protected method: the modifiers before `function`. */
function support_hidden(array $tokens, int $i): bool
{
    for ($k = $i - 1; $k >= 0; $k--) {
        $t = $tokens[$k];
        if (is_array($t) && in_array($t[0], [T_WHITESPACE, T_COMMENT, T_DOC_COMMENT, T_STATIC, T_ABSTRACT, T_FINAL, T_PUBLIC], true)) {
            continue;
        }

        return is_array($t) && in_array($t[0], [T_PRIVATE, T_PROTECTED], true);
    }

    return false;
}

/**
 * @param array<string, list<string>> $counted
 * @param array<string, array<string, true>> $bound
 * @param array<string, list<string>> $parents class => public bases, for a method a stub declares on a subclass
 */
function support_render(array $counted, array $bound, string $library, string $date, array $parents = []): string
{
    // PHP class => lowercased PHP method => key: PHP method names are case-insensitive.
    $byMethod = [];
    $phpParents = [];
    foreach ($counted as $class => $keys) {
        foreach ($keys as $key) {
            [$phpClass, $method] = support_php_name($class, $key);
            $byMethod[$phpClass][strtolower($method)] = $key;
        }
    }
    foreach ($parents as $class => $bases) {
        $phpParents[str_replace('::', '\\', $class)] = array_map(static fn (string $base): string => str_replace('::', '\\', $base), $bases);
    }
    $boundKeys = [];
    $outside = [];
    foreach ($bound as $class => $methods) {
        foreach (array_keys($methods) as $method) {
            $found = null;
            // Breadth first through every public base, the class itself first; a constructor
            // belongs to its own class only.
            $queue = $class === '' ? [] : [$class];
            for ($seen = []; $queue !== [] && $found === null;) {
                $owner = array_shift($queue);
                if (isset($seen[$owner])) {
                    continue;
                }
                $seen[$owner] = true;
                if (isset($byMethod[$owner][strtolower($method)])) {
                    $found = $byMethod[$owner][strtolower($method)];
                } elseif (strtolower($method) !== '__construct') {
                    array_push($queue, ...($phpParents[$owner] ?? []));
                }
            }
            if ($found === null) {
                $outside[] = '- `' . ($class === '' ? $method : "{$class}::{$method}") . '`';
            } else {
                $boundKeys[$found] = true;
            }
        }
    }
    sort($outside, SORT_STRING);

    $sections = [];
    $hits = 0;
    $total = 0;
    foreach ($counted as $class => $keys) {
        $lines = [];
        $classHits = 0;
        foreach ($keys as $key) {
            $isBound = isset($boundKeys[$key]);
            $classHits += $isBound ? 1 : 0;
            $lines[] = '- [' . ($isBound ? 'x' : ' ') . "] `{$key}`";
        }
        $hits += $classHits;
        $total += count($keys);
        $sections[] = "## {$class} ({$classHits} / " . count($keys) . ")\n\n" . implode("\n", $lines) . "\n";
    }

    return '# ' . SUPPORT_LABEL . " support\n\n"
        . support_summary($library, $hits, $total, $date) . "\n\n"
        . "Generated by `php84 scripts/support.php` from the installed QtCore, QtGui and QtWidgets headers and `stubs/`. One line per member name: `[x]` bound (any overload), `[ ]` not bound.\n\n"
        . implode("\n", $sections)
        . "\n## Bound outside the measured library\n\n"
        . "Bindings of other modules (QtOpenGL, QtOpenGLWidgets, QtMultimedia, QtMultimediaWidgets), of deprecated members, of signals' C++ names, and the extension's own glue; none of them is counted.\n\n"
        . (count($outside) === 0 ? "None.\n" : implode("\n", $outside) . "\n");
}

function support_summary(string $library, int $hits, int $total, string $date): string
{
    return sprintf('%s — %d / %d members bound (%.1f%%) — %s', $library, $hits, $total, $total === 0 ? 0 : 100 * $hits / $total, $date);
}

function support_badge(string $label, int $bound, int $total): string
{
    $percent = sprintf('%.1f', $total === 0 ? 0 : 100 * $bound / $total);
    $message = rawurlencode("{$percent}% ({$bound}/{$total})");
    $message = str_replace('%20', '_', $message);

    return "[![{$label}](https://img.shields.io/badge/" . str_replace(' ', '_', $label) . "-{$message}-blue?style=flat-square)](SUPPORT.md)";
}

/** Two support lists alike but for the date of their summary line. */
function support_same(string $a, string $b): bool
{
    $undated = static fn (string $s): string => preg_replace('/ — \d{4}-\d{2}-\d{2}$/m', '', $s);

    return $undated($a) === $undated($b);
}

/** The README with the badge line set: replaced where it is, else after the CI badge. */
function support_readme(string $readme, string $badge): string
{
    $lines = explode("\n", $readme);
    foreach ($lines as $i => $line) {
        if (str_starts_with($line, '[![' . SUPPORT_LABEL . ']')) {
            $lines[$i] = $badge;

            return implode("\n", $lines);
        }
    }
    foreach ($lines as $i => $line) {
        if (str_starts_with($line, '[![CI]')) {
            array_splice($lines, $i + 1, 0, [$badge]);

            return implode("\n", $lines);
        }
    }
    throw new RuntimeException('The README has no CI badge line to put the API badge after.');
}

/** @return array{int, int} bound and total, read back from a support list's summary line */
function support_totals(string $md): array
{
    preg_match('/ (\d+) \/ (\d+) members bound/', $md, $m);

    return [(int) $m[1], (int) $m[2]];
}

function support_main(array $argv): int
{
    $root = dirname(__DIR__);
    $sdk = trim((string) shell_exec('xcrun --show-sdk-path'));
    $config = (string) @file_get_contents('/opt/homebrew/lib/QtCore.framework/Headers/qconfig.h');
    $version = preg_match('/#define QT_VERSION_STR "([^"]+)"/', $config, $m) === 1 ? $m[1] : '?';
    $source = tempnam(sys_get_temp_dir(), 'support') . '.cpp';
    $ast = "{$source}.ast";
    // Every public class header (the CamelCase forwarding files): the module umbrellas leave some
    // out (QtGui's has no qvulkaninstance.h), and the lowercase headers include internal ones.
    $includes = '';
    foreach (SUPPORT_MODULES as $module) {
        foreach (glob("/opt/homebrew/lib/{$module}.framework/Headers/Q*") ?: [] as $header) {
            $name = basename($header);
            if (! str_ends_with($name, '.h') && ! in_array($name, [$module, "{$module}Depends", "{$module}Version"], true)) {
                $includes .= "#include <{$module}/{$name}>\n";
            }
        }
    }
    file_put_contents($source, $includes);
    $command = '/usr/bin/clang++ -std=c++17 -fsyntax-only -nostdinc++ -isystem ' . escapeshellarg("{$sdk}/usr/include/c++/v1")
        // Homebrew's include dir: QVulkanInstance exists only when <vulkan/vulkan.h> is found.
        . ' -isysroot ' . escapeshellarg($sdk) . ' -F /opt/homebrew/lib -isystem /opt/homebrew/include '
        . escapeshellarg('-DQT_ANNOTATE_ACCESS_SPECIFIER(x)=__attribute__((annotate(#x)))')
        . ' -Xclang -ast-dump ' . escapeshellarg($source) . ' > ' . escapeshellarg($ast) . ' 2>/dev/null';
    exec($command, $_, $status);
    try {
        if ($status !== 0) {
            fwrite(STDERR, "clang++ could not read the Qt headers.\n");

            return 2;
        }
        $md = support_render(support_counted($ast), support_bound("{$root}/stubs"), "Qt {$version}: QtCore, QtGui, QtWidgets", date('Y-m-d'), support_parents($ast));
    } finally {
        @unlink($source);
        @unlink($ast);
        @unlink(substr($source, 0, -4));
    }
    [$hits, $total] = support_totals($md);
    $readme = support_readme(file_get_contents("{$root}/README.md"), support_badge(SUPPORT_LABEL, $hits, $total));

    if (in_array('--check', $argv, true)) {
        $current = is_file("{$root}/SUPPORT.md") ? file_get_contents("{$root}/SUPPORT.md") : '';
        $same = support_same($current, $md) && $readme === file_get_contents("{$root}/README.md");
        fwrite(STDOUT, $same ? "SUPPORT.md and the badge are current.\n" : "SUPPORT.md or the badge differs: run php84 scripts/support.php.\n");

        return $same ? 0 : 1;
    }
    file_put_contents("{$root}/SUPPORT.md", $md);
    file_put_contents("{$root}/README.md", $readme);
    fwrite(STDOUT, "{$hits} / {$total}\n");

    return 0;
}

if (PHP_SAPI === 'cli' && isset($argv[0]) && realpath($argv[0]) === __FILE__) {
    exit(support_main($argv));
}
