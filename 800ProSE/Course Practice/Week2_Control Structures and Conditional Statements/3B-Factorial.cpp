#include "myclass.h"
#include <iostream>

using namespace std;


void MyClass::Factorial(int num)
{
	for (int indx = 2; indx < num; indx++)
	{
		if (num % indx == 0)
			cout << "Fact:" << indx << endl;
	}
}