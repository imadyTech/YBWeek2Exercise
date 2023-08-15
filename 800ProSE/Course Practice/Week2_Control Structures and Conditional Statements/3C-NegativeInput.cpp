//Create a program that takes an integer input from the user and calculates the factorial of that
//number using a for loop.

#include <iostream>
#include "myclass.h"

using namespace std;

void MyClass::NegativeInput()
{
	int num;
	do {
		cout << "Please give an integer input:" << endl;
		cin >> num;
	} while (num > 0);

	cout << "Finally you have the negative number!" << endl;
}