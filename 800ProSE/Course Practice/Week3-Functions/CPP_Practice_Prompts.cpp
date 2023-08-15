#include <iostream>
#include <string>
#include <map>
using namespace std;

const std::map<string, string> promptDictionary =
{
	{"1A","Definition and Declaration of Functions : Define a function called greet\n that prints 'Hello, World!' to the console."},
	{"1B","Create a function named calculateSum that takes two integers as parameters\n and returns their sum."},
	{"1C","Write a function printArray that takes an array of integers and its size as\n parameters and prints all the elements."},
	{"1D","Define a function findMax that takes two doubles as parameters and returns\n the larger value."},
	{"1E","Create a function isEven that takes an integer as a parameter and returns\n true if it's even, otherwise false."},
	{"2A","Write a function incrementByValue that takes an integer parameter and \nincrements it by 1. Call the function and observe the changes."},
	{"2B","Create a function multiplyByTwo that takes a reference to an integer as\n a parameter and multiplies it by 2. Print the result."},
	{"2C","Define a function swapValues that takes two integers by reference and swaps\n their values. Print the values before and after swapping."},
	{"2D","Write a function modifyArray that takes an array of doubles and its size as\n parameters. Multiply each element by 1.5 and print the modified array."},
	{"2E","Create a function appendText that takes a reference to a string and appends\n ' (Modified)' to it.Print the modified string."},
	{"3A","Define a function calculateArea that takes the radius of a circle as a parameter\n and returns the area of the circle."},
	{"3B","Write a function divideNumbers that takes two doubles as parameters and returns\n the result of their division."},
	{"3C","Create a function printRectangle that takes two integers(width and height) as parameters\n and prints a rectangle of asterisks.The function should be of type void."},
	{"3D","Define a function findRoots that takes three parameters(a, b, c) representing a quadratic\nequation. Return the roots of the equation (use the quadratic formula).If\nthere are no real roots, return an error message."},
	{"3E","Write a function displayMessage that takes a string as a parameter and displays it on the\nscreen.The function should have a return type of void."},
};

void GetQuizPrompt(string quizId)
{
	auto prompt = promptDictionary.find(quizId);
	if (prompt != promptDictionary.end())
	{
		cout << "Practice " << quizId <<"\n" << endl;
		std::cout << prompt->second << endl;
		cout << "--------------------------------------------------------------------------------------------\n" << endl;
	}
	else
		cout << "Practice prompt is not found!" << endl;
}
