#pragma once
//Required by default: 
#include "stdafx.h" // if you're not using Visual Studio comment this out.
#include <iostream>

/**
This is made to handle windows req and/or linux req. Due to multiOS support done on CleanScren() func.
This can work even if you don't do a multiOS software. 
**/

#ifdef _WIN32
#include <windows.h>
#define sleep(nbr) Sleep(nbr*1000) //directly sleep in seconds. Yeah you're fucked if you wanna use decimal but it's not my prob :D
#elif __linux__
#include <unistd.h>
#endif

//User needed func:

using namespace std;

void waitForUserInput();
void crlf();

void makeThisBug();