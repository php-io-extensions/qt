<?php

/** @generate-class-entries */

namespace QEventLoop;

enum ProcessEventsFlag: int
{
    case ALL_EVENTS = 0;
    case EXCLUDE_USER_INPUT_EVENTS = 1;
    case EXCLUDE_SOCKET_NOTIFIERS = 2;
    case WAIT_FOR_MORE_EVENTS = 4;
    case X11_EXCLUDE_TIMERS = 8;
    case EVENT_LOOP_EXEC = 32;
    case DIALOG_EXEC = 64;
    case APPLICATION_EXEC = 128;
}
