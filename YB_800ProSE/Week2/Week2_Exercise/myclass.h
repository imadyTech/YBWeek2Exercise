#pragma once
#include <string>

class MyClass
{

public:
	MyClass() {};
	int MyFunc();
	//1A
	bool EvenOrOdd(int num);
	//1B
	std::string CheckYourAge(int age);
	//1C
	std::string SimpleMenu();

	//2A
	int MaxValue(int x, int y, int z);
	//2B
	double Calculator(int x, char opera, int y);
	int GetOperator(char o);
	//2C
	void GetType(char input);

	//3A
	void NaturalNum();
	//3C
	void NegativeInput();
	//3B
	void Factorial(int num);

	//4A
	void SumAll();
	//4B
	void OddNums(int start, int end, int skip);
	//4C
	void Guessing(int max);
};


