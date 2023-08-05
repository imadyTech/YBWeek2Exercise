#include <string>
#include <iostream>
#include "myclass.h"

using namespace std;

/// <summary>
/// Implement a menu - driven program that performs basic arithmetic operations(addition,
///	subtraction, multiplication, division) based on user input.Use a switch statement for the menu
/// selection.
/// </summary>
/// <returns></returns>
std::string MyClass::SimpleMenu()
{
	cout << "Please select:\n";
	cout << "1 -- addition\n";
	cout << "2 -- subtraction\n";
	cout << "3 -- multiplication\n";
	cout << "4 -- division\n";
	while (true)
	{
		int sel = -1;
		cin >> sel;

		if (!cin.fail())
		{
			switch (sel)
			{
			case 1: return "You selected +";
			case 2: return "You selected -";
			case 3: return "You selected *";
			case 4: return "You selected /";
			default: return "Your selection cannot be recognized.";
			}
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Wrong input, please select again!\n";
		}
	};


};