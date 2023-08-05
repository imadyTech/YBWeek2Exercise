#include <iostream>
#include <cstdlib>
#include <ctime>
#include "myclass.h"

using namespace std;


/// <summary>
/// Create a simple guessing game where the program generates a random number between 1 and
/// 100, and the user has to guess the number.Use a break statement to exit the loop when the user
/// guesses the correct number
/// </summary>
void MyClass::Guessing(int max)
{
	std::srand(time(0));
	int randomNum = rand() % max;
	int guess = -1;
	cout << "please input your guess: \n";
	while (true)
	{
		cin >> guess;
		if (guess == randomNum) break;
		cout << "Noop!";
	}

	cout << "Correct!\n";
}