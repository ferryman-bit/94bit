#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream> //命名空间   标准
using namespace std;
#include<math.h>

//命名空间
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
void main()
{
	fun();
}
*/

//缺省参数(备胎)；半缺省，全缺省
//缺省值必须是常量或全局变量
/*
int x = 10;
void fun(int a,int b=x,int c=2)
{
	int result = a + b + c;
	cout << "result = " << result << endl;
}

void main()
{
	fun(10);
}
*/

//不能在函数声明和定义中同时出现
/*
void fun(int a, int b = 1, int c = 2);//声明

void main()
{
	fun(10);
}

void fun(int a, int b, int c)//定义
{
	int result = a + b + c;
	cout << "result = " << result << endl;
}
*/

//半缺省函数必须从右往左依次给出，不能间隔给出
/*
void fun(int a,int b=1,int c=2)
{
	int result = a + b + c;
	cout << "result = " << result << endl;
}

void main()
{
	fun();  //没有传参时，使用参数的默认值
	//fun(10);//传参时，使用指定的实参 
}
*/

//函数的重载
/*
void fun(int b)
{
	printf("This is fun().\n");
}

int fun()
{
	printf("This is fun(int, int).\n");
}

void  main()
{
	fun();//二义性

}
*/

/*
int main()
{
	cout << "Hello world!!!" << endl;
	return 0;
}
*/

//输入
/*
int main()
{
	int result;
	//scanf("%d",&result);
	cin >> result;
	cout << "result = " << result << endl;

}*/

/*  输出
int main()
{
	char ch = 'A';
	int i = 100;
	float f = 12.34f;
	double d = 23.45;
	printf("ch=%c,i=%d,f=%f,d=%lf\n",ch,i,f,d);
	// <<:插入符 输入运算符
	cout << "ch = " << ch << ",i=" <<i<< ",f=" << f << ",d=" << d << endl;
	return 0;
}*/