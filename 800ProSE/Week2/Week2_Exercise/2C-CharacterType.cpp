#include "myclass.h"
#include <string>
#include <iostream>

using namespace std;

/// <summary>
/// Write a program to determine the type of a given character(uppercase letter, lowercase letter,
/// digit, special character) using if - else statements.
/// </summary>
/// <param name="input"></param>
/// <returns></returns>
void MyClass::GetType(char input)
{
	if (std::islower(input))
		cout << "lowercase letter\n";
	else if (std::isupper(input))
		cout << "uppercase letter\n";
	else if (std::isdigit(input))
		cout << "digit\n";
	else
		cout << "special character\n";
}