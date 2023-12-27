#include "pch.h"

#include "Examples.h"

using namespace System;

int main()
{
    setlocale(LC_ALL, "Russian");

	int canExit = 0;
	do
	{
		cout << "\t\t0 - Определить, является ли данное число палиндромом\n";
		cout << "\t\t1 - Вычислить сумму кубов всех четных чисел, лежащих в диапазоне от Y до X\n";
		cout << "\t\t2 - Вычислить сумму с точностью e = 10^(-5) => [SUMM(cos(kx)/(k^2)) k=1]\n";
		cout << "\t\t3 - Вычислить сумму с точностью e = 10^(-5) => [2/n*(1 + x/2 + x^2/(2*3) + ...x^n/(n*(n+1))))]\n";
		cout << "\t\t4 - Вычислить сумму максимального и минимального элементов массива М[100]\n";

		int index = GetInputIntValue(true);

		switch (index)
		{
		case 0:
			Palindrome();
			break;
		case 1:
			CalculateSummExample();
			break;
		case 2:
			CalculateSummWithEpsilotAccuracy();
			break;
		case 3:
			CalculateSummWithEpsilotAccurancyExample2();
			break;
		case 4:
			CalculateSummMaxMinelementsOfMassive();
			break;
		default:
			cout << "\t\tНет такой задачи!\n";
			break;
		}

		cout << "\n\n\n\t\tПродолжить? 0 - Да, 1 - Нет" << endl << endl;
		cin >> canExit;
		if (canExit != 0)
			break;

	} while (true);

    return 0;
}
