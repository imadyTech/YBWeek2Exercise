#include <iostream>
#include <string>
#include <map>
using namespace std;

const std::map<string, string> promptDictionary =
{
	{"1A","1. Arrays and Pointers:\nDeclare an integer array named scores with a size of 5.\n"},
	{"1B","Create a character array named name to store a person's name."},
	{"1C","Declare a float array named temperatures with 10 elements."},
	{"1D","Create an array of strings named daysOfWeek representing the days of the week."},
	{"1E","Declare a two - dimensional array named matrix with 3 rows and 4 columns."},
	{"2A","2. Declaring and Accessing Arrays :\nInitialize the scores array with some sample test scores."},
	{"2B","Input the name into the name array using cin."},
	{"2C","Set values in the temperatures array using a loop."},
	{"2D","Initialize the daysOfWeek array with the names of the days."},
	{"2E","Assign values to the elements of the matrix using nested loops."},
	{"3A","3. Array Manipulation and Traversal:\na.Calculate the average of the scores array."},
	{"3B","Convert all characters in the name to uppercase."},
	{"3C","Find the highest temperature in the temperatures array."},
	{"3D","Print the days of the week in reverse order."},
	{"3E","Transpose the matrix(swap rows and columns)."},
	{"4A","4. Introduction to Pointers and Their Role:\na.Declare a pointer variable to an integer named ptr."},
	{"4B","Assign the address of an integer variable to the pointer ptr."},
	{"4C","Use the pointer to modify the value of the integer variable."},
	{"4D","Create a pointer to an array and access its elements."},
	{"4E","Write a function that takes a pointer to an integer and doubles its value."},
};

void GetQuizPrompt(string quizId)
{
	auto prompt = promptDictionary.find(quizId);
	if (prompt != promptDictionary.end())
	{
		cout << "--------------------------------------------"<<"Practice " << quizId <<"------------------------------------------------" << endl;
		std::cout << prompt->second << endl;
		//cout << "----------------------\n" << endl;
	}
	else
		cout << "Practice prompt is not found!" << endl;
}
void EndOfPractice()
{
		cout << "#############################################################################################\n" << endl;

}