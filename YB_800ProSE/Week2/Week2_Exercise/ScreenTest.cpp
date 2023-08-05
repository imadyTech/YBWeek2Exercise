#include <iostream>
#include <conio.h>

using namespace std;

namespace YB
{

	int main_()
	{
		string content = "";
		int i = 0;
		while (i < 400)
		{
			content = content + "Hello World";
			i++;
		}
		cout << content;
		cin >> content;
		cout << string(22, '\n');
		return 0;
	}
}