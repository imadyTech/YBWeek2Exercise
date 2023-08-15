// Week3-Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include "CPP_Practice_Functions.h"
//#include "CPP_Practice_Prompts.cpp"
//#include "CPP_Practice_Functions.cpp" // by including the cpp file, you don't need declare the prototype any more.

using namespace std;

void GetQuizPrompt(string);

void Greet();											//1A
int CalculateSum(int, int);								//1B
void PrintArray(int[], int);							//1C
double FindMax(double, double);							//1D
std::string IsEven(int);								//1E
void IncrementByValue(int);								//2A
void MultiplyByTwo(int&);								//2B
void SwapValues(int&, int&);							//2C
void ModifyArray(double[], int);						//2D
void AppendText(string);								//2E
double CalculateArea(double);							//3A
double DivideNumbers(double, double);					//3B
void PrintRectangle(int width, int height);				//3C
struct QuadraticRoots;									
QuadraticRoots FindRoots(int a, int b, int c);			//3D
void DisplayMessage(string);						//3E

int main()
{
	//1A
	//GetQuizPrompt("1A");
	//Greet();

	//1B
	//GetQuizPrompt("1B");
	//std::cout << CalculateSum(4, 5);

	//1C
	//GetQuizPrompt("1C");
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//PrintArray(arr, 10);

	//1D
	//GetQuizPrompt("1D");
	//cout << "The max is:" << FindMax(234, 555) << endl;
	//cout << "The max is:" << FindMax(11999, DBL_MAX) << endl;

	//1E
	//GetQuizPrompt("1E");
	//int a = 234;
	//cout << "The number " << a << " is even? " << IsEven(a) << endl;
	//a = 337;
	//cout << "The number " << a << " is even? " << IsEven(a) << endl;

	//2A
	//GetQuizPrompt("2A");
	//int number = 10;
	//cout << "The original value of number variable is:              " << number << endl;
	//IncrementByValue(number);
	//cout << "After invoking the IncrementByValue(int num) function: " << number << endl;

	//2B
	//GetQuizPrompt("2B");
	//int number = 20;
	//int& ref = number;
	//cout << "The original value of number variable is:           " << number << endl;
	//MultiplyByTwo( ref);
	//cout << "After invoking the MultiplyByTwo(int num) function: " << number << endl;

	//2C
	//GetQuizPrompt("2C");
	//This is weird that only referenced value is swapped but original variables are partly changed.
	//int number1 = 20, number2 = 30;
	//int& ref1 = number1, ref2 = number2;
	//cout << "The original value of number1/number2 is:                  " << number1 << "/" << number2 << endl;
	//cout << "The original value of ref1   /ref2    is:                  " << ref1 << "/" << ref2 << endl;
	//SwapValues( ref1, ref2);
	//cout << "After invoking the SwapValues( ) number1/number2:          " << number1 << "/" << number2 << endl;
	//cout << "After invoking the SwapValues( ) ref1   /ref2   :          " << ref1 << "/" << ref2 << endl;

	//2D
	//This is proof that the array parameter by default is passed by reference.
	//GetQuizPrompt("2D");
	//double arr[] = { 2.3, 1.5, 3.0, 9 };
	//int i;
	//for (i = 0; i < 3; ++i)
	//{
	//	std::cout << arr[i] << ", ";
	//}
	//std::cout << arr[i] << endl;
	//ModifyArray(arr, 4);
	//for (i = 0; i < 3; ++i)
	//{
	//	std::cout << arr[i] << ", ";
	//}
	//std::cout << arr[i] << endl;

	//2E
	//GetQuizPrompt("2E");
	//This is proof that the string parameter by default is passed by value.
	//string message = "This is a message.";
	//cout << "The original message:                        " << message << endl;
	//AppendText(message);
	//cout << "The string after invoking the function:      " << message << endl;

	//3A
	//GetQuizPrompt("3A");
	//double radius = 2.5;
	//cout << "The area of a circle with radius " << radius << " is " << CalculateArea(radius) << endl;

	//3B
	//GetQuizPrompt("3B");
	//cout << DivideNumbers(102, 14) << endl;

	//3C
	//GetQuizPrompt("3C");
	//PrintRectangle(120, 29);

	//3D
	//GetQuizPrompt("3D");
	//cout << "FindRoots(2, 9, 1)  : "<< FindRoots(2, 9, 1).msg << endl;
	//cout << "FindRoots(1, -4, 4) : "<< FindRoots(1, -4, 4).msg << endl;
	//cout << "FindRoots(2, 4, 7)  : "<< FindRoots(2, 4, 7).msg << endl;

	//3E
	GetQuizPrompt("3E");
	DisplayMessage("This is a notification.");
}

