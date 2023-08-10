#define _WIN32_WINNT 0x0500
#include "windows.h"
#include "winuser.h"
#include "wincon.h"
#include <iostream>
using namespace std;

// referred from: https://stackoverflow.com/questions/9326364/how-to-get-direct-keyboard-input-in-c
int getkey() {
	cout << "Please click a key \n";
	while (true) {
		// This checks if the window is focused
		if (GetForegroundWindow() != GetConsoleWindow())
			continue;

		for (int i = 1; i < 255; ++i) {
			// The bitwise and selects the function behavior (look at doc)
			if (GetAsyncKeyState(i) & 0x07)
				cout << i << endl;
			return i;

		}

		Sleep(250);
	}
}

/// referred blog from: https://stackoverflow.com/questions/41600981/how-do-i-check-if-a-key-is-pressed-on-c
int getA()
{
	while (true)
	{
		if (GetKeyState('A') & 0x8000/*Check if high-order bit is set (1 << 15)*/)
		{
			// Do stuff
			cout << "A" << endl;
			Sleep(250);//This prevent continuous key events in short period
		}
		if (GetKeyState(VK_SHIFT) & 0x8000)
		{
			// Shift down
		}

		//The low - order bit indicates if key is toggled.
		SHORT keyState = GetKeyState(VK_CAPITAL/*(caps lock)*/);
		bool isToggled = keyState & 1;
		bool isDown = keyState & 0x8000;
	}
}

//useful resource: Virtual-Key Codes https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes