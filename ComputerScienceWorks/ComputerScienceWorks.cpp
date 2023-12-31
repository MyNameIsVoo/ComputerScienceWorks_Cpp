#include "pch.h"

#include "Examples.h"

using namespace System;

int main()
{
    setlocale(LC_ALL, "Russian");

	int canExit = 0;
	do
	{
		cout << "\t\t0 - ����������, �������� �� ������ ����� �����������\n";
		cout << "\t\t1 - ��������� ����� ����� ���� ������ �����, ������� � ��������� �� Y �� X\n";
		cout << "\t\t2 - ��������� ����� � ��������� e = 10^(-5) => [SUMM(cos(kx)/(k^2)) k=1]\n";
		cout << "\t\t3 - ��������� ����� � ��������� e = 10^(-5) => [2/n*(1 + x/2 + x^2/(2*3) + ...x^n/(n*(n+1))))]\n";
		cout << "\t\t4 - ��������� ����� ������������� � ������������ ��������� ������� �[100]\n";
		cout << "\t\t5 - �������� ������� ������ ������ �d� � ��������� ������ �f� � �������� ������\n";
		cout << "\t\t6 - ������������� ������ ���, ����� ������� ��� �����, � ����� � ��� ����� �������� ������\n";
		cout << "\t\t7 - �������� � ������ ������ ����� ������� ����� �� �������� �� ���������\n";
		cout << "\t\t8 - ���������, �������� �� ������ �������������� ����� � ����������������� ������� ���������\n";
		cout << "\t\t9 - � �������� �(N) � �(M�L) ����� ���������, ����� �������� �� �������\n";
		cout << "\t\t10 - ���������� ���������� ����������� ����������� �����, ����� ���� ������� ����� ��������� ����� N\n";
		cout << "\t\t11 - ���� ����������� ����� N. ��������� ��������� ��� ��������� ���� �������� � �������� �������� ����� �����\n";

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
		case 5:
			ChangeTwoCharsInString();
			break;
		case 6:
			SortStringCharToNumbs();
			break;
		case 7:
			ChangeFirstStringCharToUp();
			break;
		case 8:
			CheckStringSixteenSystem();
			break;
		case 9:
			SearchMaxInMassAndSwitchThem();
			break;
		case 10:
			DetermineNumberNaturalThreeDigitNumbers();
			break;
		case 11:
			ComparisonOfDigitsOfTheHighestandLowestDigits();
			break;
		default:
			cout << "\t\t��� ����� ������!\n";
			break;
		}

		cout << "\n\n\n\t\t����������? 0 - ��, 1 - ���" << endl << endl;
		cin >> canExit;
		if (canExit != 0)
			break;

	} while (true);

    return 0;
}
