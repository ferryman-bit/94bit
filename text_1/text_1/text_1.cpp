#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream> //�����ռ�   ��׼
using namespace std;
#include<math.h>

//�����ռ�
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

//ȱʡ����(��̥)����ȱʡ��ȫȱʡ
//ȱʡֵ�����ǳ�����ȫ�ֱ���
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

//�����ں��������Ͷ�����ͬʱ����
/*
void fun(int a, int b = 1, int c = 2);//����

void main()
{
	fun(10);
}

void fun(int a, int b, int c)//����
{
	int result = a + b + c;
	cout << "result = " << result << endl;
}
*/

//��ȱʡ������������������θ��������ܼ������
/*
void fun(int a,int b=1,int c=2)
{
	int result = a + b + c;
	cout << "result = " << result << endl;
}

void main()
{
	fun();  //û�д���ʱ��ʹ�ò�����Ĭ��ֵ
	//fun(10);//����ʱ��ʹ��ָ����ʵ�� 
}
*/

//����������
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
	fun();//������

}
*/

/*
int main()
{
	cout << "Hello world!!!" << endl;
	return 0;
}
*/

//����
/*
int main()
{
	int result;
	//scanf("%d",&result);
	cin >> result;
	cout << "result = " << result << endl;

}*/

/*  ���
int main()
{
	char ch = 'A';
	int i = 100;
	float f = 12.34f;
	double d = 23.45;
	printf("ch=%c,i=%d,f=%f,d=%lf\n",ch,i,f,d);
	// <<:����� ���������
	cout << "ch = " << ch << ",i=" <<i<< ",f=" << f << ",d=" << d << endl;
	return 0;
}*/