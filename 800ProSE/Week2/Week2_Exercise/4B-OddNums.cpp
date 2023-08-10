#include <iostream>
#include "myclass.h"

using namespace std;

/// <summary>
/// Implement a program that prints all odd numbers from 1 to 50, but skips the number 13 using continue statement.
/// </summary>
/// <param name="start">1</param>
/// <param name="end">50</param>
/// <param name="skip">13</param>
void MyClass::OddNums(int start, int end, int skip)
{
	for (int idx = start; idx <= end; idx++)
	{
		if (idx == skip) continue;
		if (idx % 2 != 0)
			cout << idx << " ";
	}
	cout << endl;
}