#include "stdafx.h" // if you're not using Visual Studio comment this out.

#include "AccountFunc.h"

#include <string>
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

void checkAccountInfo(string m_sUsername, string m_sPassword)
{

}