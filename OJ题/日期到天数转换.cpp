#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
/*
//ƽ��ÿһ���µ�����
int data1[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//����ÿһ���µ�����
int data2[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool check(int x){
	//�����ж����ǲ�������
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
		//����ʹ������data2
		for (int i = 0; i<b - 1; i++){
			sum += data2[i];
		}
		sum += c;
	}
	else {
		//ƽ��ʹ������data1
		for (int i = 0; i<b - 1; i++){
			sum += data1[i];
		}
		sum += c;
	}
	cout << sum << endl;
	return 0;
}
*/