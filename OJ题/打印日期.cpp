#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
/*
1. 先判断输入的年是闰年还是平年，闰年2月是29天，平年二月是28天
闰年的判定方法：
    能被4整除，不能被100整除；或者是能被400整除
2. 定位是哪一个月
(1).定义一个天数数组，遍历天数数组，
(2).如果(n - 当前月的天数) >0
    n >= 当前月的天数，跳到下一个月
    直到 n <= 当前月的天数
(3).定位到月之后，再判断是哪一天，在第二步得到n的值即可


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