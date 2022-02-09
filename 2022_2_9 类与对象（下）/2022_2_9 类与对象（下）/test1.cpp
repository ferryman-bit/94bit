#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<iostream>
using namespace std;

//��Ԫ��Ϊ��Ԫ��������Ԫ��
/*
1.��Ԫ������ֱ�ӷ������˽�г�Ա�����������ⲿ���������κ���
  ����Ҫ������ڲ�����������ʱҪ��friend�ؼ��֡�
˵����
��1����Ԫ�������Է������˽�кͱ�����Ա����������ĳ�Ա����
��2����Ԫ����������const����
��3����Ԫ���������ඨ���κεط�����������������޶�������
��4��һ�����������Ƕ�������Ԫ����
��5����Ԫ�����ĵ�������ͨ�����ĵ��ú�ԭ����ͬ
*/

/*
class A
{
	friend void fun(A &a);
public:
	//friend void fun(A &a);//�����ඨ���κεط�����
	A()
	{
		cout << "A::A()" << endl;
	}
	void show()
	{
		m_a = 100;
	}
private:
	int m_a = 0;
};

class B
{
	friend void fun(A &a); //�����Ƕ�������Ԫ����
};

void fun(A &a)//������const����
{
	cout<<"m_a : "<<a.m_a<<endl;
}
void main()
{
	A a;
	fun(a);
}
*/



/*
static��Ա��
��1������Ϊstatic�����ԱΪ ��ľ�̬��Ա��
��2����̬��Ա����һ��Ҫ��������г�ʼ����  
��3����̬��Ա��������̬��Ա����->��static���Ρ�
*/

//C++11֧�ַǾ�̬��Ա����������ʱ����ֵ�����ǳ�ʼ�������Ǹ�ȱʡֵ��
/*
class B
{
public:
	B(int a)
	{
		cout << "B::B()" << endl;
	}
};

class A
{
public:
	A() :m_a(100)
	{
		cout << "A::A()" << endl;
	}
private:
	int m_a = 0;//��Ĭ��ֵ C++11֧��
	int *ptr = nullptr;
	B b = 0;
	const int c = 0;
};

void main()
{
	A a;
}


/*class Test
{
public:
	Test() 
	{}
public:
	
private:
	static int m_a;
};

int Test::m_a = 0;//����ľ�̬��Ա�����ж�����

void main()
{
	Test t;
}*/


/*class Test
{
public:
	Test() :m_b(0)
	{}
public:
	static void fun()//��̬��Ա����û��thisָ��
	{
		m_a = 0;
		//m_b = 0;
		show();
	}
	void show()//��ͨ����Ҫ����thisָ��
	{
		m_b = 0;
		m_a = 0;
		fun();
	}
private:
	static int m_a;
	int m_b;
};

int Test::m_a = 0;//�����ʼ��

void main()
{
	Test t;
}*/




// explicit �ؼ���
// ���ڵ��������Ĺ��캯������������ת������ 
/*
class Date
{
public:
	 Date(int year)
		:_year(year)
	{}

	explicit Date(int year)
		:_year(year)
	{}

private:
	int _year;
	int _month;
	int _day;
};

void TestDate()
{
	Date d1(2018);

	// ��һ�����α������������Ͷ���ֵ
	// ʵ�ʱ������������2019����һ������������������������d1������и�ֵ
	d1 = 2019;
}*///��������ɶ��Խϲ��explicit���ι��캯�������ֹ���ι��캯������ʽת����

//��ʼ���б�
/*1.��ʼ��ֻ��һ�Σ�

class Date
{
public:
	Date(int year, inr month, int day)
		: _year(year)
		, _month(month)//��ð�ſ�ʼ�����ŷָ�
		, _day(day)    //������ų�ʼֵ����ʽ
	{}
private:
	int _year;
	int _month;
	int _day;
};*/

/*2.���а������³�Ա�������ڳ�ʼ���б�λ�ý��г�ʼ��:
   ��1�����ó�Ա����
   ��2��const��Ա����
   ��3���Զ������ͳ�Ա��Ĭ���޹��캯����

class A
{
public: 
	A(int a)
		:_a(a)
	{}
private:
	int _a;
};

class B
{
public:
	B(int a, int ref)
		:_aobj(a)
		, _ref(ref)
		, _n(10)
	{}
private:
	A _aobj; //û��Ĭ�Ϲ��캯��
	int& _ref; //����
	const int _n; //const
};*/

/*3.����ʹ�ó�ʼ���б��ʼ���������Ƿ�ʹ�ó�ʼ���б�
    �����Զ������ͳ�Ա������һ������ʹ�ó�ʼ���б��ʼ����

class Time
{
public:
	Time(int hour = 0) //��ʹ�ó�ʼ���б��ʼ��
		:_hour(hour)
	{
		cout << "Time()" << endl;
	}
private:
	int _hour;
};

class Date
{
public:
	Date(int day)
	{}

private:
	int _day;
	Time _t;
};

int main()
{
	Date d(1); 
}*/

/*4.���������еġ��������򡱾����ڳ�ʼ���б��еĳ�ʼ��˳��
  �����ڳ�ʼ���б��еĴ����޹ء�

class A
{
public:
	A(int a)
	{
		cout << "A::A()" << endl;
	}
};

class B
{
public:
	B(int b)
	{
		cout << "B::B()" << endl;
	}
};

class C
{
public:
	C(int c)
	{
		cout << "C::C()" << endl;
	}
};

class Test
{
public:
	Test() :b(2), a(1), c(3) //���ʼ��˳���޹�
	{
		cout << "Test::Test()" << endl;
	}
private:
	A a;
	B b;//ֻ�����е�����˳���й�
	C c;
};

void main()
{
	Test t;
}*/



//���캯���帳ֵ
/*class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year; 
		_month = month;//����ֵ
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};*/