#include "stdafx.h" // if you're not using Visual Studio comment this out.

#include "Get_ComputerInfo.h"

/**
The defined function below must be used in each function files to allow debug of this one. 
**/

#define DEBUG
#ifdef DEBUG
#define DEBUG_MSG(str) do { std::cout << str << std::endl; } while( false )
#else
#define DEBUG_MSG(str) do { } while ( false )
#endif //DEBUG

using namespace std;

void getComputerInfo() /*Must be changed. Void is prohibited due to possible leak issue...*/
{
	// Give an eye to msdn to get various function giving computer info. 
}