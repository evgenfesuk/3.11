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
		int newF, newSh, newP;
		newF = f1 + f2;
		newSh = sh1 + sh2;
		newP = p1 + p2;
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
	case '-':
	{
		cout << "Input second number: ";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		int newF, newSh, newP;
		if (f2 > f1)
		{
			cout << "Second number is bigger, than first";
			break;
		} else newF = f1 - f2;
		if (sh2 > sh1)
		{
			sh1 += 20;
			newF--;
		}
		newSh = sh1 - sh2;
		if (p2 > p1)
		{
			p1 += 12;
			newSh--;
		}
		newP = p1 - p2;
		cout << newF << " pounds " << newSh << " shillings " << newP << " pence." << endl;
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

