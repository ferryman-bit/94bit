#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
/*
#include<iostream>
using namespace std;
int daytab[2][13] = {
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};
bool isLeapYear(int year){
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
		return true;
	return false;
}
char a[9], b[9];
int main(){
	//nΪ��һ�����������0000 00 00�Ĳ�ֵ��n1ΪΪ�ڶ����Ĳ�ֵ
	int year, month, day, year1, month1, day1, n, n1;
	while (cin >> a >> b){
		n = n1 = 0;
		sscanf(a, "%4d%2d%2d", &year, &month, &day);//��ʽ������
		sscanf(b, "%4d%2d%2d", &year1, &month1, &day1);
		for (int i = 0; i <= year; i++){//��¼���ֵ
			if (isLeapYear(i)){
				n += 366;
			}
			else n += 365;
		}for (int i = 1; i<month; i++){//��¼�²�ֵ
			n += daytab[isLeapYear(year)][i];
		}n += day;//��¼�ղ�ֵ
		for (int i = 0; i <= year1; i++){
			if (isLeapYear(i)){
				n1 += 366;
			}
			else n1 += 365;
		}for (int i = 1; i<month1; i++){
			n1 += daytab[isLeapYear(year1)][i];
		}n1 += day1;
		cout << abs(n - n1) + 1 << endl;//��ֵ���ȡ����ֵ+1����
	}
	return 0;
}
*/