#include "myclass.h"

//Conditional Statements(if, if - else, switch) :
//a.Write a program that takes three integer inputs and finds the largest of the three using if - else statements.

/// <summary>
/// finds the largest of the three
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <param name="z"></param>
/// <returns></returns>
int MyClass::MaxValue(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return z = max;
}
