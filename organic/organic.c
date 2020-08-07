#define UNICODE

#ifndef _WINDOWS_
#include <windows.h>
#endif

#ifndef ORGANICH
#include "organic.h"
#endif

/* alert displays alert message with ok button */
void alert(wchar_t* label, wchar_t* message) {
	MessageBox(0, message, label, MB_ICONWARNING | MB_OK);
}

/* askyesno displays yes/no dialog and returns 1 on yes */
Bool askyesno(wchar_t* label, wchar_t* message) {
	return MessageBox(0, message, label, MB_ICONWARNING | MB_YESNO) == IDYES;
}

/* winstyle sets window's style */unsigned long winstyle(Window* w, unsigned long style) {	return SetWindowLong(w->hwnd, GWL_STYLE, style);}/* winexstyle sets window's extended style */unsigned long winexstyle(Window* w, unsigned long style) {	return SetWindowLong(w->hwnd, GWL_EXSTYLE, style);}