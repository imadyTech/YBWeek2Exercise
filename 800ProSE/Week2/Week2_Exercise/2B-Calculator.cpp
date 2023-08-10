#include "myclass.h"
using namespace std;


double MyClass::Calculator(int x, char opera, int y)
{
	double a, b;
	a = static_cast<double> (x);
	b = static_cast<double> (y);
	switch (GetOperator(opera))
	{
	case 1: return a+b;
	case 2: return a-b;
	case 3: return a*b;
	case 4: return a/b;
	default:
		return -0.999;
	}
}

int MyClass::GetOperator(char o)
{
	if (o=='+') return 1;
	if (o=='-') return 2;
	if (o=='*') return 3;
	if (o=='/') return 4;
	return 999;
}