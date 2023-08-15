#include <iostream>
#include <string>
#include <array>
#include "CPP_Practice_Functions.h"
using namespace std;



//1. Definition and Declaration of Functions :
//a.Define a function called greet that prints "Hello, World!" to the console.
void Greet()
{
	std::cout << "Hello, World!" << std::endl;
}

//b.Create a function named calculateSum that takes two integers as parameters and returns
//their sum.
int CalculateSum(int first, int second)
{
	return first + second;
}

//c.Write a function printArray that takes an array of integers and its size as parameters and
//prints all the elements.
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i];
	}
}

//d.Define a function findMax that takes two doubles as parameters and returns the larger
//value.
double FindMax(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}

//e.Create a function isEven that takes an integer as a parameter and returns true if it's even,
//otherwise false.
std::string IsEven(int num)
{
	return  (num % 2 == 0) ? "true" : "false";
}

//2. Passing Arguments(By Value, By Reference) :
//	a.Write a function incrementByValue that takes an integer parameter and increments it by 1.
//	Call the function and observe the changes.
void IncrementByValue(int num)
{
	num++;
}

//	b.Create a function multiplyByTwo that takes a reference to an integer as a parameter and
//	multiplies it by 2. Print the result.
void MultiplyByTwo(int& num)
{
	num *= 2;
}

//	c.Define a function swapValues that takes two integers by reference and swaps their values.
//	Print the values before and after swapping.
void SwapValues(int& ref1, int& ref2)
{
	ref2 = ref1 - ref2;
	ref1 = ref1 - ref2;
	ref2 = ref2 + ref1;
}

//	d.Write a function modifyArray that takes an array of doubles and its size as parameters.
//	Multiply each element by 1.5 and print the modified array.
void ModifyArray(double arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = arr[i] * 1.5;
	}
}

//	e.Create a function appendText that takes a reference to a string and appends " (Modified)"
//	to it.Print the modified string.
void AppendText(string message)
{
	message += " (Modified)";
	cout << "The message inside the function:             " << message << endl;
}

//	3. Return Types and Void Functions :
//a.Define a function calculateArea that takes the radius of a circle as a parameter and returns
//the area of the circle.
double CalculateArea(double radius)
{
	double result = radius * radius * 3.1415926;
	return  result;
}
//b.Write a function divideNumbers that takes two doubles as parameters and returns the
//result of their division.
double DivideNumbers(double x, double y)
{
	return x / y;
}

//c.Create a function printRectangle that takes two integers(width and height) as parameters
//and prints a rectangle of asterisks.The function should be of type void.
void PrintRectangle(int width, int height)
{
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

//d.Define a function findRoots that takes three parameters(a, b, c) representing a quadratic
//equation.Return the roots of the equation(use the quadratic formula).If there are no real
//roots, return an error message.
QuadraticRoots FindRoots(int a, int b, int c)
{
	QuadraticRoots result;
	if (b*b >= 4*a*c)
	{
		result.result1 = (+sqrt(b * b - 4 * a * c) - b) / (2 * a);
		result.result2 = (-sqrt(b * b - 4 * a * c) - b) / (2 * a);
		result.msg = result.result1 == result.result2 ? 
			"The equation has 1 root: " + std::to_string(result.result1) : 
			"The equation has 2 roots: " + std::to_string(result.result1) +" and " + std::to_string(result.result2);
	}
	else
	{
		result.msg = "Error! The equation has no root.";
	}
	return result;
}


//e.Write a function displayMessage that takes a string as a parameter and displays it on the
//screen.The function should have a return type of void.
void DisplayMessage(string msg)
{
	cout << "Message: "<<msg << endl;
}