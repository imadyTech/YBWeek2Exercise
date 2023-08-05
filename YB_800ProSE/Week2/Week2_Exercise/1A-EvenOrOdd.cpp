#include <iostream>
#include "myclass.h"

using namespace std;
/*
1. Control Structures :
a.Write a C++ program to check whether a given number is even or odd using the if statement.
*/

/// <summary>
/// Control Structures : Write a C++ program to check whether a given number is even or odd using the if statement.
/// </summary>
bool MyClass::EvenOrOdd(int num)
{
	return num % 2 == 0;
}
