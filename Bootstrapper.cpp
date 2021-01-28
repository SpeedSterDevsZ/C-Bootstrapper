/*

  _____                        ____              _       _
 |  __ \                      |  _ \            | |     | |
 | |__) |__  _ __ ___   ___   | |_) | ___   ___ | |_ ___| |_ _ __ __ _ _ __  _ __   ___ _ __
 |  ___/ _ \| '_ ` _ \ / _ \  |  _ < / _ \ / _ \| __/ __| __| '__/ _` | '_ \| '_ \ / _ \ '__|
 | |  | (_) | | | | | | (_) | | |_) | (_) | (_) | |_\__ \ |_| | | (_| | |_) | |_) |  __/ |
 |_|   \___/|_| |_| |_|\___/  |____/ \___/ \___/ \__|___/\__|_|  \__,_| .__/| .__/ \___|_|
                                                                      | |   | |
                                                                      |_|   |_|

 This was mainly developed for Pomo's Bootstrapper in C++
 You must not release this Bootstrapper (since pomo uses it as well)

 Why are you even here? Me (speedsterkawaii) took a long time to make this you skid.
 
 Make sure this is a Console App Visual Studio Otherwise it wont work, ikr.
*/
#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>
#include <fstream>
#include <intrin.h>
#include <Psapi.h>
#include <Tlhelp32.h>
#include <tchar.h>
#include <CommCtrl.h>
#include <urlmon.h>
#include <Lmcons.h>
#pragma comment(lib, "urlmon.lib")
#include <Wininet.h>
using namespace std;

int main()
{
    std::cout << "[Pomo]: Waiting for Y or N Dialog..\n";
	if (MessageBoxA(NULL, "Would you like to Update Pomo?", "Pomo Bootstrapper", MB_YESNO) == IDYES)
	{
		std::cout << "[Bootstrapper]: Updating Pomo Softwares.\n";
		// Download URL Code
		std::cout << "[Bootstrapper]: Updated, Check downloads or desktop.\n";
		std::cout << "[Bootstrapper]: Didn't Download? Disable Antivirus and Re-try.\n";
		Sleep(5000);
	}
	else
	{
		TCHAR name[UNLEN + 1];
		DWORD size = UNLEN + 1;
		MessageBoxA(NULL, "You Cancelled the Bootstrapper.", "Pomo Bootstrapper", MB_OK);
		if (GetUserName((TCHAR*)name, &size))
			wcout << L"[Bootstrapper]: Goodbye, " << name << L".\n";
		Sleep(1000);
		::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	}
}
