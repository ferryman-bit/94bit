#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
// 析构函数： 清理（释放）类的一些资源
/*
  1.类名前加上字符~
  2.无参数无返回值
  3.一个类只有一个析构函数（未显示定义，系统自动生成默认的析构函数）
  4.对象生命周期结束时，C++编译系统自动调用析构函数
*/
/*
  1.局部析构（先） 从下往上：先构造后析构，后构造先析构
  2.静态析构（中）  
  3.全局析构（后） 从下往上
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
		free(base);//释放堆上的空间
		base = NULL;//把指针置为空
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
