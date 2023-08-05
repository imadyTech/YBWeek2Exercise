#include <iostream>
#include "myclass.h"
using namespace std;
//Write a C++ program to print the first 10 natural numbers using a while loop.
void MyClass::NaturalNum()
{
	int i = -1;
	while (++i < 10)
	{
		cout << i;
		cout << endl;
	}
}