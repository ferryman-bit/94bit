#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
/*
//平年每一个月的天数
int data1[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//闰年每一个月的天数
int data2[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool check(int x){
	//用来判断年是不是闰年
	if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0)){
		return true;
	}
	return false;
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int sum = 0;
	if (check(a)){
		//闰年使用数组data2
		for (int i = 0; i<b - 1; i++){
			sum += data2[i];
		}
		sum += c;
	}
	else {
		//平年使用数组data1
		for (int i = 0; i<b - 1; i++){
			sum += data1[i];
		}
		sum += c;
	}
	cout << sum << endl;
	return 0;
}
*/