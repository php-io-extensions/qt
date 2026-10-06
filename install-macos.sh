#!/bin/bash

# Builds ext-qt in a disposable copy and installs it into each PHP given.
#
#   ./install-macos.sh                      # Homebrew php@8.4 (NTS) and php@8.4-zts
#   ./install-macos.sh /path/to/bin/php ... # specific PHP binaries
#
# For each PHP: phpize/configure/make against that PHP's php-config, copy the
# .so into its extension_dir, re-sign it ad hoc so amfid accepts it on first
# load, and enable it with 30-qt.ini in its conf.d scan dir.

set -Eeuo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SOURCES=(config.m4 php_qt.h src stubs)
INI_NAME="30-qt.ini"

die() { printf '✖ %s\n' "$*" >&2; exit 1; }
step() { printf '▶ %s\n' "$*"; }

[[ "$(uname -s)" == "Darwin" ]] || die "This installer targets macOS; on Debian or Raspberry Pi OS use install-debian-trixie.sh."
pkg-config --exists 'Qt6Widgets >= 6.5' || die "Qt 6.5+ not found by pkg-config — install: brew install qt"
pkg-config --exists 'Qt6Multimedia >= 6.5 Qt6MultimediaWidgets >= 6.5' || die "Qt Multimedia not found — install: brew install qt (Homebrew's qt carries both modules)"
pkg-config --exists 'Qt6OpenGL >= 6.5 Qt6OpenGLWidgets >= 6.5' || die "Qt OpenGL widgets not found — install: brew install qt (Homebrew's qt carries both modules)"
# QMediaPlayer builds without a backend and then plays nothing: require the plugin (darwin/AVFoundation, shipped in qt).
QT_PLUGIN_DIR="$(qtpaths6 --query QT_INSTALL_PLUGINS 2>/dev/null || true)"
[[ -n "$QT_PLUGIN_DIR" ]] || die "qtpaths6 not found — install: brew install qt"
compgen -G "${QT_PLUGIN_DIR}/multimedia/*" >/dev/null || die "No Qt Multimedia backend plugin in ${QT_PLUGIN_DIR}/multimedia — reinstall: brew reinstall qt"

# A Command Line Tools upgrade can leave a stale usr/include/c++/v1 ahead of the SDK's
# libc++ on the default include path; build against the SDK's headers when that happens.
if ! printf '#include <type_traits>\nint main() {}\n' | c++ -x c++ -std=c++17 -fsyntax-only - 2>/dev/null; then
    SDK_LIBCXX="$(xcrun --show-sdk-path)/usr/include/c++/v1"
    [[ -f "${SDK_LIBCXX}/type_traits" ]] || die "No C++ standard library headers found; reinstall the Command Line Tools."
    export CXXFLAGS="${CXXFLAGS:-} -nostdinc++ -isystem ${SDK_LIBCXX}"
    step "Using the SDK's libc++ headers (${SDK_LIBCXX}): the default C++ include path has none"
fi

if [[ $# -gt 0 ]]; then
    PHP_BINS=("$@")
else
    PHP_BINS=(/opt/homebrew/opt/php@8.4/bin/php /opt/homebrew/opt/php@8.4-zts/bin/php)
fi

BUILD_DIR=""
cleanup() { if [[ -n "$BUILD_DIR" ]]; then rm -rf "$BUILD_DIR"; fi; }
trap cleanup EXIT

for PHP_BIN in "${PHP_BINS[@]}"; do
    BIN_DIR="$(dirname "$PHP_BIN")"
    PHPIZE="${BIN_DIR}/phpize"
    PHP_CONFIG="${BIN_DIR}/php-config"
    for tool in "$PHP_BIN" "$PHPIZE" "$PHP_CONFIG"; do
        [[ -x "$tool" ]] || die "$tool not found or not executable"
    done

    step "Building for $("$PHP_BIN" -r 'echo PHP_VERSION, PHP_ZTS ? " ZTS" : " NTS";') (${PHP_BIN})"
    BUILD_DIR="$(mktemp -d "${TMPDIR:-/tmp}/qt-build.XXXXXX")"
    for f in "${SOURCES[@]}"; do
        cp -R "${SCRIPT_DIR}/${f}" "${BUILD_DIR}/"
    done
    if ! (cd "$BUILD_DIR" \
        && "$PHPIZE" \
        && ./configure --enable-qt --with-php-config="$PHP_CONFIG" \
        && make -j"$(sysctl -n hw.ncpu)") >"${BUILD_DIR}/build.log" 2>&1; then
        tail -40 "${BUILD_DIR}/build.log" >&2
        die "Build failed for ${PHP_BIN}"
    fi

    EXT_DIR="$("$PHP_BIN" -r 'echo ini_get("extension_dir");')"
    SCAN_DIR="$("$PHP_BIN" -r 'echo PHP_CONFIG_FILE_SCAN_DIR;')"
    [[ -d "$EXT_DIR" ]] || die "extension_dir ${EXT_DIR} does not exist"
    [[ -n "$SCAN_DIR" && -d "$SCAN_DIR" ]] || die "conf.d scan dir '${SCAN_DIR}' does not exist"

    install -m 0755 "${BUILD_DIR}/modules/qt.so" "${EXT_DIR}/qt.so"
    codesign --force --sign - "${EXT_DIR}/qt.so" >/dev/null 2>&1
    printf 'extension=qt\n' > "${SCAN_DIR}/${INI_NAME}"

    "$PHP_BIN" -r 'exit(extension_loaded("qt") ? 0 : 1);' || die "qt did not load in ${PHP_BIN}"
    step "Installed ${EXT_DIR}/qt.so, enabled by ${SCAN_DIR}/${INI_NAME}"

    rm -rf "$BUILD_DIR"
    BUILD_DIR=""
done
