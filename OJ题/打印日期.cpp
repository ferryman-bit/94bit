#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
/*
1. ���ж�������������껹��ƽ�꣬����2����29�죬ƽ�������28��
������ж�������
    �ܱ�4���������ܱ�100�������������ܱ�400����
2. ��λ����һ����
(1).����һ���������飬�����������飬
(2).���(n - ��ǰ�µ�����) >0
    n >= ��ǰ�µ�������������һ����
    ֱ�� n <= ��ǰ�µ�����
(3).��λ����֮�����ж�����һ�죬�ڵڶ����õ�n��ֵ����


void Date(int year, int month, int day)
{
	cout << year << '-';
	if (month < 10)
	{
		cout << '0' << month << '-';
	}
	else cout << month << '-';

	if (day < 10)
	{
		cout << '0' << day << endl;
	}
	else cout << day << endl;
}

int main()
{
	static char daytab[2][13] = {
		{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
		{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
	};
	int year, day_of_year, leap, i;
	while (cin >> year >> day_of_year)
	{
		leap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
		for (i = 0; i < 13; i++)
		{
			if (day_of_year > daytab[leap][i])
			{
				day_of_year -= daytab[leap][i];
			}
			else break;
		}
		if (i == 13) i -= 12;
		Date(year, i, day_of_year);
	}
	return 0;
}
*/