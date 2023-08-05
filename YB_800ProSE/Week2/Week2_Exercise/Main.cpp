#include <iostream>
#include <stdlib.h>
#include "startUP.h"

using namespace std;

void GuessGame(MyClass obj);
void GetFactors(MyClass obj);
void GetOddNums(MyClass obj);
void SumAll(MyClass obj);
void GetFactors(MyClass obj);
void NegativeInput(MyClass obj);
void NaturalNums(MyClass obj);
void GetType(MyClass obj);
void Calculator(MyClass obj);
void MaxValue(MyClass obj);
void SimpleMenu(MyClass obj);
void CheckAge(MyClass obj);
void EvenOdd(MyClass obj);
bool PromptTryAgain();
void PromptAnyKey();

int main()
{
	MyClass exerciseObject = MyClass();

	char selection;

	while (true)
	{
		system("cls");
		cout << "-----Please input the quiz code to select-----" << endl;
		cout << "|     1) quiz 1A - EvenOdd                   |" << endl;
		cout << "|     2) quiz 1B - CheckAge                  |" << endl;
		cout << "|     3) quiz 1C - SimpleMenu                |" << endl;
		cout << "|     4) quiz 2A - MaxValue                  |" << endl;
		cout << "|     5) quiz 2B - Calculator                |" << endl;
		cout << "|     6) quiz 2C - GetType                   |" << endl;
		cout << "|     7) quiz 3A - NaturalNums               |" << endl;
		cout << "|     8) quiz 3B - GetFactors                |" << endl;
		cout << "|     9) quiz 3C - NegativeInput             |" << endl;
		cout << "|     a) quiz 4A - SumAll                    |" << endl;
		cout << "|     b) quiz 4B - GetOddNums                |" << endl;
		cout << "|     c) quiz 4C - GuessGame                 |" << endl;
		cout << "|                                            |" << endl;
		cout << "|     x) - EXIT THE PROGRAM                  |" << endl;
		cout << "----------------------------------------------" << endl;
		cin >> selection;

		if (selection == '1') EvenOdd(exerciseObject);
		if (selection == '2') CheckAge(exerciseObject);
		if (selection == '3') SimpleMenu(exerciseObject);
		if (selection == '4') MaxValue(exerciseObject);
		if (selection == '5') Calculator(exerciseObject);
		if (selection == '6') GetType(exerciseObject);
		if (selection == '7') NaturalNums(exerciseObject);
		if (selection == '8') GetFactors(exerciseObject);
		if (selection == '9') NegativeInput(exerciseObject);
		if (selection == 'a') SumAll(exerciseObject);
		if (selection == 'b') GetOddNums(exerciseObject);
		if (selection == 'c') GuessGame(exerciseObject);
		if (selection == 'x') break;
	}

	return 0;
}

/// <summary>
/// Reuseable function to prompt user whether to retry.
/// </summary>
bool PromptTryAgain()
{
	char input;
	cout << "Would you like to try again? (y/n)\n";
	cin >> input;
	return input == 'y' || input == 'Y';
}

/// <summary>
/// Reuseable function to prompt user the end of program and return to the main menu.
/// </summary>
void PromptAnyKey()
{
	char input;
	cout << "Press any key to return main menu.\n";
	cin >> input;
}

void GuessGame(MyClass obj)
{
	do {
		system("cls");
		cout << "QUIZ 4C\n";
		cout << "Create a simple guessing game where the program generates a random number between 1 and\n";
		cout << "100, and the user has to guess the number.Use a break statement to exit the loop when the\n";
		cout << "user guesses the correct number.\n" << endl;
		obj.Guessing(10);
	} while (PromptTryAgain());
}

void GetOddNums(MyClass obj)
{
	system("cls");
	cout << "QUIZ 4B\n";
	cout << "Implement a program that prints all odd numbers from 1 to 50,\n";
	cout << "but skips the number 13 using continue statement.\n" << endl;
	obj.OddNums(1, 50, 13);
	PromptAnyKey();
}

void SumAll(MyClass obj)
{
	do {
		system("cls");
		cout << "QUIZ 4A\n";
		cout << "This program will find the sum of all positive integers entered by the you,\n";
		cout << "until you enter a negative number.\n" << endl;
		obj.SumAll();
	} while (PromptTryAgain());
}

void GetFactors(MyClass obj)
{
	int factNum;
	do
	{
		system("cls");
		cout << "QUIZ 3B\n";
		cout << "Create a program that takes an integer input from the user and calculates the factorial of\n";
		cout << "that number using a for loop.\n" << endl;

		cout << "Please input a single integer:\n";
		cin >> factNum;
		obj.Factorial(factNum);
	} while (PromptTryAgain());
}

void NegativeInput(MyClass obj)
{
	do
	{
		system("cls");
		cout << "QUIZ 3C\n";
		cout << "Write a program that uses a do - while loop to ask the user for a number until the user enters a\n";
		cout << "negative number.\n" << endl;

		obj.NegativeInput();
	} while (PromptTryAgain());

}

void NaturalNums(MyClass obj)
{
	system("cls");
	cout << "QUIZ 3A\n";
	cout << "Write a C++ program to print the first 10 natural numbers using a while loop.\n";
	obj.NaturalNum();
	PromptAnyKey();
}

void GetType(MyClass obj)
{
	char input;
	do
	{
		system("cls");
		cout << "QUIZ 2C\n";
		cout << "Write a program to determine the type of a given character(uppercase letter, lowercase letter,\n";
		cout << "digit, special character) using if - else statements.\n" << endl;

		cout << "Please input a char (single character):\n";
		cin >> input;
		obj.GetType(input);
	} while (PromptTryAgain());
}

void Calculator(MyClass obj)
{
	int a, b;
	char opr;
	do
	{
		system("cls");
		cout << "QUIZ 2B\n";
		cout << "Create a simple calculator program that allows the user to input two numbers and an arithmetic\n";
		cout << "operator (+, -, *, or /) to perform the operation using if - else statements.\n" << endl;

		cout << "Please input a simple operation (you may separate inputs by space, or don't at all):\n";
		cin >> a >> opr >> b;
		cout << "The result is:" << obj.Calculator(a, opr, b) << endl;
	} while (PromptTryAgain());
}

void MaxValue(MyClass obj)
{
	int x, y, z;
	system("cls");
	cout << "QUIZ 2A\n";
	cout << "Write a program that takes three integer inputs and finds the largest of the three using \n";
	cout << "if - else statements.\n" << endl;

	cout << "Please input 3 integer numbers (separate inputs by space):\n";
	cin >> x >> y >> z;
	cout << "The max value is:" << obj.MaxValue(x, y, z) << endl;
	PromptAnyKey();
}

void SimpleMenu(MyClass obj)
{
	do {
		system("cls");
		cout << "QUIZ 1C\n";
		cout << "Implement a menu - driven program that performs basic arithmetic operations(addition,\n";
		cout << "subtraction, multiplication, division) based on user input.Use a switch statement for\n";
		cout << "the menu selection.\n" << endl;

		string selection = obj.SimpleMenu();
		cout << selection << endl;
	} while (PromptTryAgain());
}

void CheckAge(MyClass obj)
{
	int age;
	do {
		system("cls");
		cout << "QUIZ 1B\n";
		cout << "Create a program that prompts the user for their age and displays whether they are a child,\n";
		cout << "teenager, or adult using the if - else statement.\n" << endl;

		cout << "Please enter your age: ";
		cin >> age;
		cout << obj.CheckYourAge(age);
	} while (PromptTryAgain());
}

void EvenOdd(MyClass obj)
{
	int numEvenOrOdd = 0;
	do {
		system("cls");
		cout << "QUIZ 1A\n";
		cout << "Write a C++ program to check whether a given number is even or odd using the if statement.\n" << endl;

		cout << "Enter your number (to check even or odd): ";
		cin >> numEvenOrOdd;
		if (obj.EvenOrOdd(numEvenOrOdd))
			cout << "Even\n";
		else
			cout << "Odd\n";

	} while (PromptTryAgain());

}