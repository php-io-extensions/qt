# php-io-extensions/qt

Qt 6 bound 1:1 into PHP as the Zephir extension `qt`. One static method per Qt member, int handles, no opinions. Composition belongs in `jovian/qt` (a PHP function per ext call, enums), venusian (composition), and Surface (abstraction), never here.

Primary target: Linux X11/Wayland (Pi 5, Debian 13, Qt 6.8.2). macOS (brew Qt 6.9) compiles as a check only.

Pipeline: `scripts/harvest-ast.sh` (Pi, once per Qt version) → `php scripts/gen-src.php` → `php scripts/gen-zep.php` → `php scripts/check-parity.php` → `php scripts/tests/run-all.php` → `bash scripts/prepare-ext.sh` → `bash install-macos.sh` (check) → `bash build-linux.sh` (Pi) → `php scripts/verify-reflection.php` → `php examples/smoke.php`.

Rules: `AGENTS.md`. Knowledge: `.okf/`.
