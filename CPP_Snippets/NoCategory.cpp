#include "stdafx.h"

#include "NoCategory.h"

void waitForUserInput() { cout << "Press {ENTER} to continue." << endl; getchar(); }

void crlf() { cout << endl; }

void ClearScreen()
{
#ifdef _WIN32
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X *csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR) ' ',
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
#elif __linux__
	if (!cur_term)
	{
		int result;
		setupterm(NULL, STDOUT_FILENO, &result);
		if (result <= 0) return;
	}

	putp(tigetstr("clear"));
#endif
}

void makeThisBug()
{
	int iValueToFill;
	cout << "Further explanation before running the bug." << endl;
	cout << "The issue that happened is when you create a variable with defined type you save spaces for the software in the memory." << endl;
	cout << "Here, our variable made for this creepy test is an unsigned int. Which mean you can allow from 0 to " << UINT8_MAX << "." << endl;
	cout << "So! Until here it should be known :P but what happen when you enter a char on an uint?" << endl;
	cout << "Well, try it, enter a letter: ";
	cin >> iValueToFill;
	for(int i=0;i<200;i++){
	cout << "Here is the output: " << iValueToFill << endl;
	Sleep(2);
	}
	cout << "Voila! That's what happen when an user parse letter on an int." << endl
		<< "It's called bufferoverflow and could be used to run malicious code on your program." << endl
		<< "That's why you should use scin (or wscin in case of unicode reading ofc)." << endl;
	iValueToFill = 0;
}
