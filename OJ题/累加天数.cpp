#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
#include<iostream>
#include<cstdio>
using namespace std;
//数据预处理
int daytab[2][13] = {
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};
//判断平年还是闰年
bool IsLeapYear(int year){
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
//平年闰年天数
int NumberOfYear(int year){
	if (IsLeapYear(year)){
		return 366;
	}
	else{
		return 365;
	}
}
//主函数
int main(){

	int year, month, day;
	int number;
	int caseNumber;
	cin >> caseNumber;
	while (caseNumber--){
		cin >> year >> month >> day >> number;
		for (int i = 0; i<month; i++){
			number += daytab[IsLeapYear(year)][i];
		}
		number += day;//至此将加上若干天后的日期转换为数字，接下来再换回日期reverse！
		month = 0;
		while (number>NumberOfYear(year)){
			number -= NumberOfYear(year);
			year += 1;
		}//对年份的处理
		while (number>daytab[IsLeapYear(year)][month]){
			number -= daytab[IsLeapYear(year)][month];
			month += 1;
		}//对月份的处理
		day = number;//最后对日期的处理
		printf("%04d-%02d-%02d\n", year, month, day);
	}
	return 0;

}