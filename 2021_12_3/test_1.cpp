#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
class Date
{
public:
	//获取某年某月的天数
	int GetMonthDay(int year, int month)
	{
		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = days[month];
		if (month == 2
			&& ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			day += 1;
		}
		return day;
	}
	//全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1);

	//拷贝构造函数
	//d2(d1)
	Date(const Date& d);

	//赋值运算符重载
	//d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator = (const Date& d);

	//析构函数
	~Date();

	//日期+=天数
	Date& operator+=(int day);

	//日期+天数
	Date operator+(int day); 

	//日期-天数
	Date operator-(int day);
	
	//日期-=天数
	Date& operator-=(int day);

	//前置++
	Date& operator++();

	//后置++
	Date& operator++(int);

	//前置--
	Date& operator--();

	//前置--
	Date& operator--(int);

	// >运算符重载
	bool operator > (const Date& d);

	// ==运算符重载
	bool operator == (const Date& d);

	// >=运算符重载
	inline bool operator >= (const Date& d);

	// <运算符重载
	bool operator < (const Date& d);

	// <=运算符重载
	bool operator <= (const Date& d);

	// !=运算符重载
	bool operator != (const Date& d);

	//日期-日期 返回天数
	int operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};

void main()
{
	Date;
}

/*class Test
{
public:
	Test(int data = 0)//构造函数
	{
		m_data = data;
	}
	Test(const Test &t)//拷贝构造函数
	{
		m_data = t.m_data;
	}
	Test& operator=(const Test &t)//赋值
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}
	~Test()//析构函数
	{}
public:
	Test* operator&()  //普通对象取地址符
	{
		return this;
	}
	const Test* operator&()const  //常对象取地址符
	{
		return this;
	}
private:
	int m_data;
};

void main()
{
	Test t1(10);
	Test t2 = t1;
	Test t3;
	t3 = t2;
	
	Test *pt = &t1;
	const Test *pt1 = &t2;
}

/*void main()
{
	char ch = 'a';
	int i = 10;
	double d = 12.34;

	printf("%c  %d %f\n", ch, i, d);

	cout << ch << " : " << i << " : " << d << endl;
}*/

/*class Test
{
	friend void fun(const Test &t);//友元函数：对象可以直接访问私有数据
public:
	Test(int data = 0)
	{
		m_data = data;
	}
public:
	int GetData()
	{
		return m_data;
	}
private:
	int m_data;
};

void fun(const Test &t)
{
	int data = t.m_data;
}

void main()
{
	Test t(10);
	fun(t);
}*/

/*
class Complex
{
public:
	Complex(int real=0, int imag=0) :m_real(real), m_imag(imag)
	{}    
	~Complex()
	{}
public:
	friend Complex operator+(int value, const Complex &x);//声明为友元函数
public:
	Complex operator+(const Complex &c) //经过一定的转换再相加；
	{
		return Complex(m_real + c.m_real, m_imag + c.m_imag);
	}
	Complex operator+(int value)  //直接相加
	{
		return Complex(m_real + value, m_imag);
	}
	Complex operator-(const Complex &c);
	Complex operator*(const Complex &c);
	Complex operator/(const Complex &c);
private:
	int m_real;
	int m_imag;
};

Complex operator+(int value, const Complex &x)
{
	return Complex(value + x.m_real, x.m_imag);
}

void main()
{
	Complex c1(1, 2);
	Complex c2(3, 4);
	Complex x = c1 + c2;
	Complex y = c1 + 10;//10作为一个对象  c1.operator+
}*/