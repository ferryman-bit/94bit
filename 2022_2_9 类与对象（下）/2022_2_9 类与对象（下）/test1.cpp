#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<iostream>
using namespace std;

//友元分为友元函数和友元类
/*
1.友元函数可直接访问类的私有成员，定义在类外部，不属于任何类
  但是要在类的内部声明，声明时要加friend关键字。
说明：
（1）友元函数可以访问类的私有和保护成员，但不是类的成员函数
（2）友元函数不能用const修饰
（3）友元函数可在类定义任何地方声明，不受类访问限定符限制
（4）一个函数可以是多个类的友元函数
（5）友元函数的调用与普通函数的调用和原理相同
*/

/*
class A
{
	friend void fun(A &a);
public:
	//friend void fun(A &a);//可在类定义任何地方声明
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
	friend void fun(A &a); //可以是多个类的友元函数
};

void fun(A &a)//不能用const修饰
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
static成员：
（1）声明为static的类成员为 类的静态成员；
（2）静态成员变量一定要在类外进行初始化；  
（3）静态成员变量，静态成员函数->用static修饰。
*/

//C++11支持非静态成员变量在声明时赋初值，不是初始化，而是给缺省值。
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
	int m_a = 0;//，默认值 C++11支持
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

int Test::m_a = 0;//定义的静态成员归所有对象共享

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
	static void fun()//静态成员函数没有this指针
	{
		m_a = 0;
		//m_b = 0;
		show();
	}
	void show()//普通方法要求有this指针
	{
		m_b = 0;
		m_a = 0;
		fun();
	}
private:
	static int m_a;
	int m_b;
};

int Test::m_a = 0;//类外初始化

void main()
{
	Test t;
}*/




// explicit 关键字
// 对于单个参数的构造函数，具有类型转换作用 
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

	// 用一个整形变量给日期类型对象赋值
	// 实际编译器背后会用2019构造一个无名对象，最后用无名对象给d1对象进行赋值
	d1 = 2019;
}*///上述代码可读性较差，用explicit修饰构造函数，会禁止单参构造函数的隐式转换。

//初始化列表
/*1.初始化只能一次；

class Date
{
public:
	Date(int year, inr month, int day)
		: _year(year)
		, _month(month)//已冒号开始，逗号分隔
		, _day(day)    //括号里放初始值或表达式
	{}
private:
	int _year;
	int _month;
	int _day;
};*/

/*2.类中包含以下成员，必须在初始化列表位置进行初始化:
   （1）引用成员变量
   （2）const成员变量
   （3）自定义类型成员（默认无构造函数）

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
	A _aobj; //没有默认构造函数
	int& _ref; //引用
	const int _n; //const
};*/

/*3.尽量使用初始化列表初始化，不管是否使用初始化列表，
    对于自定义类型成员变量，一定会先使用初始化列表初始化。

class Time
{
public:
	Time(int hour = 0) //先使用初始化列表初始化
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

/*4.变量在类中的“声明次序”就是在初始化列表中的初始化顺序，
  与其在初始化列表中的次序无关。

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
	Test() :b(2), a(1), c(3) //与初始化顺序无关
	{
		cout << "Test::Test()" << endl;
	}
private:
	A a;
	B b;//只跟类中的声明顺序有关
	C c;
};

void main()
{
	Test t;
}*/



//构造函数体赋值
/*class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year; 
		_month = month;//赋初值
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};*/