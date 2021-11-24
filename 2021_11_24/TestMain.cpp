#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"Test.h"
using namespace std;

class Test
{
public:
	//构造函数
	Test()
	{
		m_data = 0;
		cout << "Create Test Object:" << this << endl;
	}
	Test(int data)
	{
		m_data = data;
	}
	Test(int data1, int data2)
	{
		m_data = data1 + data2;
	}
	//Test t1 = t
	Test(const Test &t)
	{
		cout << "Copy Create Test Object." << endl;
		m_data = t.m_data;
	}
	Test& operator=(const Test &t)
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}
	~Test()
	{
		cout << "Free Test Object" << this << endl;
	}
private:
	int m_data; //C++11
};

void main()
{
	Test t(10);
	Test t1 = t;
	Test t2;
	t2 = t1;
}

/*
class Test
{
public:
//void SetData(Test *const this, int data)
void SetData(int m_data) //隐藏this
{
//this = nullptr;
this->m_data = m_data;
}
int GetData()
{
return m_data;
}
private:
int m_data;
};

void main()
{
Test t;
t.SetData(100);  //SetData(&t, 100);
}

/*
//24  //32
//1 基本数据的类型对齐值
//2 自定义类型的对齐值
//3 程序指定的对齐值
//4 程序有效对齐值

typedef struct Test
{
char a : 1;
int  b : 1;
}Test;
void main()
{
cout<<sizeof(Test)<<endl;
Test t;
}


/*
#pragma pack(4)
typedef struct Test
{
short a;   //2
struct
{
short b; //2
char c; //1 + 1
short e;   //2
};
int d; //4 +2
}Test;

void main()
{
cout<<sizeof(Test)<<endl;
Test t;
}

/*
#pragma pack(2)
typedef struct Test
{
short a;   //2
struct
{
int b;    //4
double c; //8
char e;   //1+1
};
int d; //4
}Test;

void main()
{
cout<<sizeof(Test)<<endl;
Test t;
}

/*
//1
class Test
{};

void main()
{
Test t;
}

/*
//1 识别类
//2 识别数据成员
//3 改写成员方法

class Test
{
public:
//void SetData(Test *const this, int data)
void SetData(int m_data) //隐藏this
{
//this = nullptr;
this->m_data = m_data;
}
int GetData()
{
return m_data;
}
private:
int m_data;
};

void main()
{
Test t1;
t1.SetData(10);
}

/*
void main()
{
Test t1, t2;
t1.SetData(10); //SetData(&t1, 10)
t2.SetData(20);

int data1 = t1.GetData();
int data2 = t2.GetData();
}

/*
struct CGoods
{
char name[20];
float price;
int count;
};

void InitGoods(CGoods *_this, char *n, float p, int c)
{
strcpy(_this->name, n);
_this->price = p;
_this->count = c;
}

void main()
{
CGoods c1, c2; //结构体变量
InitGoods(&c1, "C++.pdf", 56, 20);
InitGoods(&c2, "C++.pdf", 56, 20);
}

/*
class Test
{
public:
//this
void SetData(int data)
{
m_data = data;
}
int GetData()
{
return m_data;
}
private:
int m_data;
};

void main()
{
Test t1, t2;
t1.SetData(10);
t2.SetData(20);

int data1 = t1.GetData();
int data2 = t2.GetData();
}

/*
class Test
{
public:
void fun()
{}
void show()
{}
public:
int m_data;    //4 + 4
double m_value;//8
};

void main()
{
cout<<sizeof(Test)<<endl;
}

/*
void main()
{
Test t, t1, t2;
t.m_data = 100;
}

/*
class MyTest
{
public:
void fun();
int a;
};

void MyTest::fun()
{
cout<<"This is MyTest::fun()"<<endl;
}


class YouTest
{
public:
void fun();
int a;
};

void YouTest::fun()
{
cout<<"This is YouTest::fun()"<<endl;
}

void main()
{

}

/*
class Test
{
public:
void SetData(int data)
{
m_data = data;
}
int GetData()
{
return m_data;
}
private:
int m_data;
};

void main()
{
Test t;
t.SetData(10);
cout<<t.GetData()<<endl;
}

/*
//public  protected private
class Test
{
public:
void SetData(int data)
{
m_data = data;
}
int GetData()
{
return m_data;
}
private:
int m_data;
};

void main()
{
Test t;
t.SetData(1);
}

/*
void main()
{
CGoods c1;
CGoods c2;
c1.InitGoods("C++.pdf", 56.5, 20);
c2.InitGoods("Java.pdf", 40, 10);

cout<<"c1 count = "<<c1.GetCount()<<endl;
cout<<"c2 count = "<<c2.GetCount()<<endl;
}
*/