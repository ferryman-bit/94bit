#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream> 
using namespace std;
#include<math.h>
//:: �����������
/*
namespace MySpace
{
	void fun()
	{
		cout << "This is My fun()" << endl;
	}
};

namespace YouSpace
{
	void fun()
	{
		cout << "This is You fun()" << endl;
	}
};

using namespace	YouSpace;//MySpace
//using namespace YouSpace::fun; 
void main()
{
	fun();
}*/

//����
/*
void main()
{
	int a = 10;
	int &b = a;

	char ch = 'A';
	char &c = ch;//����������

	int *pa = &a;
	int* &qa = pa;//ָ�������

	int ar[5] = { 1, 2, 3, 4, 5 };
	int (&br)[5] = ar;//���������
}*/

/*void main()
{
	int a = 10;
	int &b = a;

	int c = 1;//����
	const int *pc = &c;//ָ��ָ��c�Ŀռ� //����Ҫ�󣺼�const��һ�����壬��������һ�����壻
	//int *pc const pc=&c;
	//const int * const pc =&c;

	*pc = 10;//ͨ��pcָ�����c�ռ�
	pc = &a;//a�ĵ�ַ����pc�ռ�
	c=100;
}
*/

void main()
{
	const int a = 10;
	//int *pa = &a;    //*pa�Ǳ����������Խ��ܳ���a
	const int *pa = &a; //�﷨Ҫ�󣺲���const���벻ͨ����
}