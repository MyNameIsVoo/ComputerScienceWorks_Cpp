#pragma once

#include "pch.h"

#include <string>
#include <iostream>

int GetInputIntValue(bool positiveValues);
void GenerateRandomMassive(int* mass, int N);
int* FindMaxInMassive(int* mass, int N);
void OutputMasive(int* mass, int l, int d);

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

void CalculateSummMaxMinelementsOfMassive()
{
	cout << "\n\t\t����� ������������� � ������������ ��������� ������� �[N]\n";

	cout << "\n\t\t������� N";
	int N = GetInputIntValue(true);

	clock_t Time = clock();

	int *mas = new int[N], i, max_a, min_a;

	for (i = 0; i < N; i++)
	{
		mas[i] = -50 + rand() % 101;
		cout << mas[i] << "\t";
		if (i == 0)
			max_a = min_a = mas[i];
		if (max_a < mas[i])
			max_a = mas[i];
		if (min_a > mas[i])
			min_a = mas[i];
	}

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;

	cout << "\n\t\tMax = " << max_a << "\n\t\Min = " << min_a << endl;
	cout << "\n\t\y = " << (long)max_a + min_a << endl;
}

void ChangeTwoCharsInString()
{
	cout << "\n\t\t�������� ������� ������ ������ �d� � ��������� ������ �f� � �������� ������\n";

	clock_t Time = clock();

	char str[] = "addff";
	cout << "\n\t\t���� ������: " << str << "\n";

	char *pd, *pf, vsp;
	pd = strchr(str, 'd');
	pf = strchr(str, '\0');

	while (*pf != 'f')
		pf--;
	
	vsp = *pd;
	*pd = *pf;
	*pf = vsp;

	cout << "\n\t\t���������: " << str << "\n";

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;
}

void SortStringCharToNumbs()
{
	cout << "\n\t\t������������� ������ ���, ����� ������� ��� �����, � ����� � ��� ����� �������� ������\n";

	clock_t Time = clock();

	char str[] = "a12ZpYf3f6";
	cout << "\n\t\t���� ������: " << str << "\n";

	int m;
	for (int i = (str[0] > '9') ? 1 : 0; i < (signed)strlen(str); i++)
	{
		if (str[i] > '9')
		{
			m = i;
			do
			{
				char vsp = str[m - 1];
				str[m - 1] = str[m];
				str[m--] = vsp;
			} while (str[m - 1] >= '0' && str[m - 1] <= '9');
		}
	}

	cout << "\n\t\t���������: " << str << "\n";

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;
}

void ChangeFirstStringCharToUp()
{
	cout << "\n\t\t�������� � ������ ������ ����� ������� ����� �� �������� �� ���������\n";

	cout << "\n\t\t������� ����������� �� �����: ";
	string inputString;
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), ' '); // ���� �� ������ �����, �� getline �������� �� ����� (�.�. �� ��������� ��)
	getline(std::cin, inputString);

	clock_t Time = clock();

	char* str =  const_cast<char*>(inputString.c_str());
	cout << "\n\t\t���� ������: " << str << "\n";

	char *p, *s;
	p = strchr(str, '.');
	if (p != NULL) 
		*p = '\0';
	else 
	{ 
		cout << "\n\t\t� ������ ��� �����!\n";
		return;
	}

	strcat(str, " ");
	s = str;
	while (*s)
	{
		p = strchr(s, ' ');
		*p = '\0';
		*s -= 32;
		*p = ' ';
		s = p + 1;
	}

	cout << "\n\t\t���������: " << str << "\n";

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;
}

void CheckStringSixteenSystem()
{
	cout << "\t\t���������, �������� �� ������ �������������� ����� � ����������������� ������� ���������\n";

	cout << "\n\t\t������� �����: ";
	char str[80];
	cin >> str;

	clock_t Time = clock();

	bool isTrue = false;
	for (int i = 0; i < strlen(str); i++)
	{
		if ((str[i] < 'A' || str[i]> 'F') && (str[i] < 'a' || str[i]> 'f') && (str[i] < '0' || str[i]> '9')) // #include <ctype.h> if (isxdigit(str[i])==0)
		{
			isTrue = true;
			break;
		}
	}

	cout << "\n\t\t���������: " << (isTrue ? "��" : "���") << "\n";

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;
}

void SearchMaxInMassAndSwitchThem()
{
	const int N = 57;
	const int M = 7;
	const int L = 5;

	cout << "\t\t� �������� �(" << N << ") � �(" << M << "�" << L << ") ����� ���������, ����� �������� �� �������\n";

	int A[N], B[M][L], *q, *w;
	srand(time(0));

	cout << "\t\t������ �(" << N << ")\n\n";
	GenerateRandomMassive(&A[0], N);
	OutputMasive(&A[0], 1, N);
	cout << "\t\t������ �(" << M << "�" << L << ")\n";
	GenerateRandomMassive(&B[0][0], M * L);
	OutputMasive(&B[0][0], M, L);

	clock_t Time = clock();

	q = FindMaxInMassive(&A[0], N);
	cout << "\t\tMax A[N]: " << *q << "\n";
	w = FindMaxInMassive(&B[0][0], M * L);
	cout << "\t\tMax B[MxL]: " << *w << "\n";

	int vsp;
	vsp = *q;
	*q = *w;
	*w = vsp;

	cout << "\t\t������ �(" << N << ")\n\n";
	OutputMasive(&A[0], 1, N);

	cout << "\t\t������ �(" << M << "�" << L << ")\n";
	OutputMasive(&B[0][0], M, L);

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;
}

void DetermineNumberNaturalThreeDigitNumbers()
{
	cout << "\t\t���������� ���������� ����������� ����������� �����, ����� ���� ������� ����� ��������� ����� N\n";

	cout << "\n\t\t������� ����� N: ";
	int N = GetInputIntValue(true);

	clock_t Time = clock();

	for (int x = 100; x <= 999; x++)
	{
		if (N == x % 10 + x / 10 % 10 + x / 100) 
			cout << "\n\t\tx: " << x;
	}

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	cout << "\n\n\t\t����� ����������: " << EndTime << endl;
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

void OutputMasive(int* mass, int l, int d)
{
	int i, j;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < d; j++)
			cout << *(mass + i * d + j) << "\t";
		cout << "\n";
	}

}

void GenerateRandomMassive(int* mass, int N)
{
	int start = -100;
	int end = 200;

	for (int i = 0; i < N; i++)
		*(mass + i) = rand() % (end - start + 1) + start;
}

int* FindMaxInMassive(int* mass, int N)
{
	int i, j;
	int* p;
	p = mass;
	for (i = 0; i < N; i++)
	{
		if (*(mass + i) > *p)
			p = (mass + i);
	}
	return p;
}
