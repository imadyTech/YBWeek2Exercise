/*
1. Control Structures :
b.Create a program that prompts the user for their age and displays whether they are a child,
teenager, or adult using the if - else statement.
*/
#include <string>
#include "myclass.h"

using namespace std;


/// <summary>
/// prompts the user for their age and displays whether they are a child,
/// teenager, or adult using the if - else statement.
/// </summary>
std::string MyClass::CheckYourAge(int age)
{
	if (age < 13)
	{
		return "You are a child\n";
	}
	else if (age >= 13 && age <= 19)
	{
		return "You are a teenage.\n";
	}
	else {
		return "You are an adult. \n";
	}
}
