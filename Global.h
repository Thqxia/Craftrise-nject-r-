#include <Windows.h>
#include <iostream>
#include <string>

namespace HookBypass {
	void SetGamepid(DWORD pid);
	BOOL Bypassrac_hook();
	BOOL Restorerac_hook();
}