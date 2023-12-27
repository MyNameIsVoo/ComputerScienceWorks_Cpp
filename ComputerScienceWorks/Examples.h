#pragma once

#include "pch.h"

int GetInputIntValue(bool positiveValues);

void Palindrome()
{
	cout << "\n\t\t�������� �� ������ ����� �����������\n";

	int value = GetInputIntValue(true);

	clock_t Time = clock();

	int b = value, c = 0;
	do
	{
		c = c * 10 + b % 10;
		b /= 10;
	}
	while (b != 0);

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;

	cout << "����� " << (c == value ? "" : "�� ") << "���������: " << value;
}

void CalculateSummExample()
{
	cout << "\n\t\t����� ����� ���� ������ �����, ������� � ��������� �� Y �� X, ��� Y � X � �������� � ���������� ����������� �����\n";

	cout << "\n\t\t������� X";
	int X = GetInputIntValue(true);
	cout << "\n\t\t������� Y";
	int Y = GetInputIntValue(true);
	cout << "\n\t\tX = " << X << "\tY = " << Y << "\n";

	clock_t Time = clock();

	int summ = 0;
	for ((X = (X % 2 == 0) ? X : X + 1); X <= Y; X++)
		summ += X * X * X;

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;

	cout << "\n\t\t����� = " << summ << endl;
}

void CalculateSummWithEpsilotAccuracy()
{
	cout << "\t\t����� � ��������� e = 10^(-5) => [SUMM(cos(kx)/(k^2)) k=1]\n";

	cout << "\n\t\t������� x";
	int x = GetInputIntValue(false);

	clock_t Time = clock();

	float summ = 0, f = cos(x);
	for (int k = 2; fabs(f) > 1E-5; k++)
	{
		f = (cos(k * x)) / (k * k);
		summ += f;
	}

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;

	cout << "\n\t\t����� = " << summ << endl;
}

void CalculateSummWithEpsilotAccurancyExample2()
{
	cout << "\t\t����� � ��������� e = 10^(-5) => [2/n*(1 + x/2 + x^2/(2*3) + ...x^n/(n*(n+1))))]\n";

	cout << "\n\t\t������� x";
	int x = GetInputIntValue(true);

	clock_t Time = clock();

	int n = 0;
	float summ = 0, f = 0, s;
	for (n = 1, s = 1, f = (2 / M_PI) * (x / 2); fabs(f) > 1E-5; n++)
	{
		summ += f;
		f *= (2 / M_PI) * (((n - 1) * x) / (n + 1));
	}

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;

	cout << "\n\t\t����� = " << summ << endl;
}

//
// Helpers
//

int GetInputIntValue(bool positiveValues)
{
	int value = -1;
	cout << "\n\t\t������� ����� �����: ";
	cin >> value;

	while (cin.fail() || (positiveValues && value < 0))
	{
		cout << "\t\t�� ����� ������������ �����\n\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> value;
	}

	return value;
}