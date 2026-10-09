<?php

/** @generate-class-entries */

namespace QInputDevice;

enum DeviceType: int
{
    case UNKNOWN = 0;
    case MOUSE = 1;
    case TOUCH_SCREEN = 2;
    case TOUCH_PAD = 4;
    case PUCK = 8;
    case STYLUS = 16;
    case AIRBRUSH = 32;
    case KEYBOARD = 4096;
    case ALL_DEVICES = 2147483647;
}
