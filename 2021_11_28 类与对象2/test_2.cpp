#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
// ���������� �����ͷţ����һЩ��Դ
/*
  1.����ǰ�����ַ�~
  2.�޲����޷���ֵ
  3.һ����ֻ��һ������������δ��ʾ���壬ϵͳ�Զ�����Ĭ�ϵ�����������
  4.�����������ڽ���ʱ��C++����ϵͳ�Զ�������������
*/
/*
  1.�ֲ��������ȣ� �������ϣ��ȹ��������������������
  2.��̬�������У�  
  3.ȫ���������� ��������
*/
/*
class SeqList
{
public:
	SeqList(int capa)
	{
		capacity = capa;
		base = (int*)malloc(sizeof(int)*capa);
		size = 0;
	}
	~SeqList()
	{
		free(base);//�ͷŶ��ϵĿռ�
		base = NULL;//��ָ����Ϊ��
		capacity = size = 0;
	}
private:
	int *base;
	size_t capacity;
	size_t size;

};

void main()
{
	SeqList list(10);
}*/
/*
class A
{
public:
	A()
	{
		cout << "A::A" << endl;
	}
	~A()
	{
		cout << "A::~A" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "B::B" << endl;
	}
	~B()
	{
		cout << "B::~B" << endl;
	}
};

class C
{
public:
	C()
	{
		cout << "C::C" << endl;
	}
	~C()
	{
		cout << "C::~C" << endl;
	}
};

class D
{
public:
	D()
	{
		cout << "D::D" << endl;
	}
	~D()
	{
		cout << "D::~D" << endl;
	}
};

static C c;
B b;

void main()
{
	A a;
	D d;
}*/
