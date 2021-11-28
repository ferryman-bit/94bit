#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
//构造函数：初始化对象，而不是开空间创造对象；

//可通过SetDate公有的方法给对象设置内容，但过于麻烦；
/*
class Date
{
public:
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.SetDate(2021, 5, 1);
	d1.Display();

	Date d2;
	d2.SetDate(2021, 7, 1);
	d2.Display();
	return 0;
};*/

//构造函数特性：
//  1.函数名与类名相同
//  2.无返回值
//  3.对象实例化时编译器 自动调用 对应的构造函数
//  4.构造函数可以重载的

/*
class Date
{
public:
	//1.无参构造函数
	Date ()
	{}

	//2.带参数的构造函数
	Date (int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
};

void TestDate()
{
	Date d1; //调用无参构造函数
	Date d2(2021, 5, 1); // 调用带参的构造函数

	//***注：通过无参构造函数创建对象时，对象后面不跟括号，否则成了函数声明
	
	// Date d3();  //声明了d3函数，该函数无参，返回一个日期类型的对象
}*/

//如果类中没有显式定义构造函数，则C++编译器会自动生成一个无参的默认构造函数，
//一旦用户显式定义，编译器将不再生成
/*
class Date
{
public:
	/*
	//用户显式定义了构造函数，编译器则不再生成
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	*//*
private:
	int _year;
	int _month;
	int _day;
};

void Test()
{
	//没有定义构造函数，对象也能创建成功，则调用编译器自动生成的默认构造函数
	Date d;
}*/

//无参构造函数、全缺省构造函数、编译器默认生成的构造函数都认为是默认成员函数；
//默认构造函数只能有一个；

//默认构造函数
/*
class Date
{
public:
	Date()
	{
		_year = 1900;
		_month = 1;
		_day = 1;
	}
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};

void Test()
{
	Date d1;
}*/

//C++把类型分为：内置（基本）类型和自定义类型。
//内置类型：语法已经定义好的类型，如int,char...
//自定义类型：使用class/struct/union自己定义的类型
//编译器默认生成的构造函数会对自定义类型成员_t调用它的默认成员函数
/*
class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
private:
	//基本(内置)类型
	int _year;
	int _month;
	int _day;

	//自定义类型
	Time _t;
};

int main()
{
	Date d;
	return 0;
}*/

//成员变量的命名风格：
//year=year  （出错）
//1._year=year     2.m_year=year     3.this->year=year