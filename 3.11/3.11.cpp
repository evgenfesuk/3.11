#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Input first number: ";
	int f1, sh1, p1;
	cin >> f1 >> sh1 >> p1;

	cout << "What kind of operation do you need? (+, -, *, /): ";
	char answer;
	cin >> answer;

	switch (answer)
	{
	case '+':
	{
		cout << "Input second number: ";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '-':
	{
		cout << "Input second number: ";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '*':
	{
		cout << "Input factor: ";
		int factor;
		cin >> factor;
		int newF, newSh, newP;
		newF = f1 * factor;
		newSh = sh1 * factor;
		newP = p1 * factor;
		if (newP >= 12)
		{
			newSh++;
			newP -= 12;
		}
		if (newSh >= 20)
		{
			newF++;
			newSh -= 20;
		}
		cout << newF << " pounds " << newSh << " shillings " << newP << " pence." << endl;
		break;
	}
	case '/':
	{
		cout << "Input divider: ";
		int divider;
		cin >> divider;
		break;
	}

	default:
		cout << "Wrong choise" << endl;
		break;
	}

	system("pause");
    return 0;
}

