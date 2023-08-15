#include "myclass.h"
#include <iostream>

using namespace std;

//Write a program to find the sum of all positive integers entered by the user until they enter a
//negative number.Use a break statement to terminate the loop.
void MyClass::SumAll()
{
	int input = 0;
	int sum = 0;
	do
	{
		cout << "Please input a single integer:\n";
		cin >> input;
		if (input > 0)
			sum += input;
	} while (input >= 0);

	cout << "The sum is:" << sum << endl;

}