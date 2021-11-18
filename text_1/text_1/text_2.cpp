#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream> 
using namespace std;
#include<math.h>
//:: 作用域解析符
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

//引用
/*
void main()
{
	int a = 10;
	int &b = a;

	char ch = 'A';
	char &c = ch;//变量的引用

	int *pa = &a;
	int* &qa = pa;//指针的引用

	int ar[5] = { 1, 2, 3, 4, 5 };
	int (&br)[5] = ar;//数组的引用
}*/

/*void main()
{
	int a = 10;
	int &b = a;

	int c = 1;//常量
	const int *pc = &c;//指针指向c的空间 //语义要求：加const是一个含义，不加是另一个含义；
	//int *pc const pc=&c;
	//const int * const pc =&c;

	*pc = 10;//通过pc指针操作c空间
	pc = &a;//a的地址赋给pc空间
	c=100;
}
*/

void main()
{
	const int a = 10;
	//int *pa = &a;    //*pa是变量，不可以接受常量a
	const int *pa = &a; //语法要求：不加const编译不通过，
}