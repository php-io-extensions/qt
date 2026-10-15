#ifndef PHPQT_QTEXT_H
#define PHPQT_QTEXT_H

#include "runtime.h"

#include <QtGui/QTextCursor>
#include <QtWidgets/QTextEdit>

/* Copies PHP owns, for the QPlainTextEdit methods in QControls.cpp. */
void phpqt_return_text_cursor(zval *rv, const QTextCursor &cursor);
void phpqt_return_extra_selection(zval *rv, const QTextEdit::ExtraSelection &selection);

#endif
