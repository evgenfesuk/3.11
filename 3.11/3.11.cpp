// 3.11.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Введите первое число: ";
	int f1, sh1, p1;
	cin >> f1 >> sh1 >> p1;

	cout << "Ââåäèòå æåëàåìóþ îïåðàöèþ (+, -, *, /): ";
	char answer;
	cin >> answer;

	switch (answer)
	{
	case '+':
	{
		cout << "Ââåäèòå âòîðîå ÷èñëî";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '-':
	{
		cout << "Ââåäèòå âòîðîå ÷èñëî";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '*':
	{
		cout << "Ââåäèòå ìíîæèòåëü";
		int factor;
		cin >> factor;
		break;
	}
	case '/':
	{
		cout << "Ââåäèòå äåëèòåëü";
		int divider;
		cin >> divider;
		break;
	}

	default:
		cout << "Íåâåðíûé ôîðìàò îïåðàöèè" << endl;
		break;
	}

	system("pause");
    return 0;
}

