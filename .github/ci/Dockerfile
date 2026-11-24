# The Linux CI image: PHP (one of 8.4 / 8.5, NTS / ZTS) with Qt 6 and the build tools phpize
# needs, preinstalled, so a CI cell downloads nothing from a distribution mirror.
#
#   docker buildx build --platform linux/amd64,linux/arm64 --build-arg PHP_TAG=8.4-zts-trixie \
#     -t <namespace>/php-qt:8.4-zts --push .github/ci
ARG PHP_TAG=8.4-cli-trixie
FROM php:${PHP_TAG}

# The Qt modules config.m4 checks for: Widgets, Gui, Core, Multimedia, MultimediaWidgets,
# OpenGL, OpenGLWidgets, WebEngineCore, WebEngineWidgets.
RUN apt-get update \
 && apt-get install -y --no-install-recommends \
      $PHPIZE_DEPS git \
      qt6-base-dev qt6-base-dev-tools \
      qt6-multimedia-dev libqt6multimediawidgets6 \
      qt6-webengine-dev \
 && rm -rf /var/lib/apt/lists/*
