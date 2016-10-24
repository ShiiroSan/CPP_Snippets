// CPP_Snippets.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h" // if you're not using Visual Studio comment this out.
#include <iostream>

#include "NoCategory.h"

/**
Nothing must be entered here. Use other files with header. Call needed function on main only. 

Each header must be detailed upon this comment block.
**/

using namespace std;

ostream& bold(ostream& os) {
	return os << '\033' << '[';
}


int main()
{
	cout << "regular " << bold << "boldface" << endl;
	cout << "Kek! :P" << endl;
	waitForUserInput(); //As cin, be sure to check parsed value. Don't understand what I mean? Try makeThisBug().
	crlf();

	makeThisBug();
    //return 0;
}

