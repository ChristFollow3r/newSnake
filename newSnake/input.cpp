#include "header.h"
#include <windows.h>
#include <winuser.h>

bool Up() {
    return GetAsyncKeyState('W') & 0x8000;
}

bool Left() {
    return GetAsyncKeyState('A') & 0x8000;
}

bool Down() {
    return GetAsyncKeyState('S') & 0x8000;
}

bool Right() {
    return GetAsyncKeyState('D') & 0x8000;
}