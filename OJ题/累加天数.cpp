#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
#include<iostream>
#include<cstdio>
using namespace std;
//����Ԥ����
int daytab[2][13] = {
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};
//�ж�ƽ�껹������
bool IsLeapYear(int year){
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
//ƽ����������
int NumberOfYear(int year){
	if (IsLeapYear(year)){
		return 366;
	}
	else{
		return 365;
	}
}
//������
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
		number += day;//���˽�����������������ת��Ϊ���֣��������ٻ�������reverse��
		month = 0;
		while (number>NumberOfYear(year)){
			number -= NumberOfYear(year);
			year += 1;
		}//����ݵĴ���
		while (number>daytab[IsLeapYear(year)][month]){
			number -= daytab[IsLeapYear(year)][month];
			month += 1;
		}//���·ݵĴ���
		day = number;//�������ڵĴ���
		printf("%04d-%02d-%02d\n", year, month, day);
	}
	return 0;

}