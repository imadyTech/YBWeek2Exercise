#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "CPP_Practice_ArraysAndPointers.h"
#include "CPP_Practice_Prompts.h"

using namespace std;


//void GetQuizPrompt(string);

void practice()
{
	//1. Arrays and Pointers:
	//a.Declare an integer array named scores with a size of 5.
	int scores[5]{};


	//b.Create a character array named name to store a person's name.
	char name[10]{};

	//c.Declare a float array named temperatures with 10 elements.
	float temperatures[10];

	//d.Create an array of strings named daysOfWeek representing the days of the week.
	string daysOfWeek[7];

	//e.Declare a two - dimensional array named matrix with 3 rows and 4 columns.
	double matrix[3][4];


	//2. Declaring and Accessing Arrays :
	//a.Initialize the scores array with some sample test scores.
	scores[0], scores[1], scores[2], scores[3], scores[4] = 1, 2, 4, 5, 6;
	//scores = { 1, 2, 3, 4, 5 };			//this does'nt work
	//vector<int> scores;					//it is possible to use vector instead of array
	// There is also an example of better code from the https://stackoverflow.com/questions/5732798/c-array-assignment-of-multiple-values
	//template <typename T, typename U>
	//void set_array(T * array, U x) {
	//	*array = x;
	//}
	//template <typename T, typename U, typename... V>
	//void set_array(T * array, U x, V... y) {
	//	*array = x;
	//	set_array(array + 1, y...);
	//}

	//b.Input the name into the name array using cin.
	GetQuizPrompt("2B");
	cout << "Input the name:" << endl;
	std::cin >> name;
	cout << "The name is: " << name << "." << endl;

	//c.Set values in the temperatures array using a loop.
	GetQuizPrompt("2C");
	int count = 0;
	for (int n = 0; n < sizeof(temperatures) / sizeof(temperatures[0]); n++) {
		//  calculate the sum
		temperatures[n] = static_cast<float>(count * 2);
		++count;
	}
	//C++ 11 and ahead syntax:
	for (const int& n : temperatures) {
		cout << temperatures[n] << " ";
	}
	cout << endl;

	//d.Initialize the daysOfWeek array with the names of the days.
	daysOfWeek[0] = "Monday";
	daysOfWeek[1] = "Tuesday";
	daysOfWeek[2] = "Wednesday";
	daysOfWeek[3] = "Thursday";
	daysOfWeek[4] = "Friday";
	daysOfWeek[5] = "Saturday";
	daysOfWeek[6] = "Sunday";

	//e.Assign values to the elements of the matrix using nested loops.
	GetQuizPrompt("2E");
	srand(static_cast<unsigned int>(time(nullptr)));
	for (auto& row : matrix)
	{
		for (auto& item : row)
		{
			double n = static_cast<double>(std::rand());
			item = n;
			cout << n << " ";
		}
		cout << endl;
	}
	cout << endl;

	//3. Array Manipulation and Traversal:
	//a.Calculate the average of the scores array.
	GetQuizPrompt("3A");
	double average = 0;
	int count_scores = 0;
	for (auto& item : scores)
	{
		average += item;
		count_scores++;
	}
	cout << "The average of scores is: " << average / count_scores << endl;

	//b.Convert all characters in the name to uppercase.
	GetQuizPrompt("3B");
	//for (int i = 0; i <= ((string)name).length(); i++)		//also workable
	//{
	//	name[i] = toupper(name[i]);
	//}
	cout << " It is also workable to manipulate a char array with pointer:" << endl;
	char* namePtr = name;
	while (*namePtr) {
		*namePtr = toupper(*namePtr);
		namePtr++;
	}
	cout << name << endl;

	//c.Find the highest temperature in the temperatures array.
	GetQuizPrompt("3C");
	float max = -1;
	//for (float& temp : temperatures) {			//This also workable
	//	if (max < temp)
	//		max = temp;
	//}
	float* tempPtr = temperatures;
	int size = sizeof(temperatures) / sizeof(temperatures[0]);
	int i = 0;
	while (i < size) {
		if (max < *tempPtr)
			max = *tempPtr;
		tempPtr++;
		i++;
	}
	cout << "The highest temperature is: " << max << endl;

	//d.Print the days of the week in reverse order.
	GetQuizPrompt("3D");
	for (auto index = rbegin(daysOfWeek); index != rend(daysOfWeek); ++index) {
		string& str = *index;
		int ind = distance(std::rend(daysOfWeek), index) - 1; // Convert iterator to index
		cout << "Day " << ind << ": " << str << endl;
	}
	//e.Transpose the matrix(swap rows and columns).
	const int nRows = sizeof(matrix) / sizeof(matrix[0]);
	const int nCols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	double transpose[nCols][nRows] = {};
	//Dispaly the original matrix
	for (auto& row : matrix) {
		for (auto& item : row) {
			cout << item << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nCols; j++) {
			SwapNumber(&matrix[i][j], &transpose[j][i]);
		}
	}
	//Dispaly the transposed matrix
	for (auto& row : transpose) {
		for (auto& item : row) {
			cout << item << " ";
		}
		cout << endl;
	}
	cout << endl;

	//4. Introduction to Pointers and Their Role :
	//a.Declare a pointer variable to an integer named ptr.
	int x = 10;
	int* ptr;

	//b.Assign the address of an integer variable to the pointer ptr.
	ptr = &x;

	//c.Use the pointer to modify the value of the integer variable.
	*ptr = 200;
	cout << x << endl;
	//d.Create a pointer to an array and access its elements.
	int y[5] = { 3,2,5,6,7 };
	int arrPtr = *y;
	//e.Write a function that takes a pointer to an integer and doubles its value.
	int intValue = 42;
	double doubleValue = 3.14;
	TakingPointers(&intValue, &doubleValue);
};

void SwapNumber(double* A, double* B)
{
	*A = *A - *B;
	*B = *B + *A;
	*A = *B - *A;
}

//But C++ doesn't allow you to define an array parameter with unspecified size in the function signature. 
//So can't use this function to display.
void DispalyMatrix(double** arr, const int numRows, const int numCols) {
	for (int i = 0; i < numRows; ++i) {
		for (int j = 0; j < numCols; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void SwapNumberTest()
{
	double a = 10, b = 20;
	SwapNumber(&a, &b);
	cout << a << " " << b;
}

void TakingPointers(int* intPtr, double* dblPtr)
{

}
