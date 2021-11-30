#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Test
{
public:
	//默认构造函数
	Test(int d = 0)
	{
		cout << "Cerate Test Object : " << this << endl;
		m_data = d;
	}

	//拷贝构造方法
	Test(const Test &t)
	{
		cout << "Copy Create Test Object : " << this << endl;
		m_data = t.m_data;
	}

	//赋值语句 等号的重载
	//Test& operator=(const Test &t)
	Test& operator=(const Test &t)
	{
		cout << "Assign." << this << " : " << &t << endl;
		if (this != &t) //检查是否自己给自己赋值
		{
			m_data = t.m_data;
		}
		return *this;//*this 代表当前对象
	}
	//析构方法
	~Test()
	{
		cout << "Free Test Object : " << this << endl;
	}
public:
	int GetData()const
	{
		return m_data;
	}
private:
	int m_data;
};

Test fun(const Test &obj)  // 若用Test*:不能引用已经释放的对象给其他对象赋值；
{
	int value = obj.GetData();
	return Test(value);
}
void main()
{
	Test t1(100);
	Test t2 = 200;

	Test t3 = t1; //对象初始化对象
	Test t4;
	t4 = t3; //赋值  //本质上：t4 .operator=t3
}

/*
Test fun(Test &obj)
{
int value = obj.GetData();
Test tmp(value);
return tmp;
}

void main()
{
Test t1(100);
Test t2 = 200;
Test t3 = t2;
Test t4 = fun(t3);
}

/*
Test& fun(Test &obj)
{
int value = obj.GetData();
Test tmp(value);
return tmp;
}
void main()
{
Test t1(100);
Test t2 = 200;
Test t3 = t2;
Test t4;
t4 = fun(t3);
}

/*
Test fun(Test &obj)
{
int value = obj.GetData();
Test tmp(value);
return tmp;
}

void main()
{
Test t1(100);
Test t2 = 200;
Test t3 = t2;
Test t4;
t4 = fun(t3);
}
*/

//拷贝构造函数（本质：对象初始化对象）
/*
Test(const Test &t)

//1.不加引用，编译不通过；使用传值会引发无穷递归调用
//2.
//若未显示定义，系统生成默认的拷贝构造函数；
*/

//赋值语句 等号的重载
/*
Test& operator=(const Test &t)

//1.可以不要const，语法正确，为语义要求：防止内部被引用的对象被修改；
//2.可以不要&，要&：提高程序的效率； 临时变量不能用引用返回；
//3.可以无返回值，但连等赋值时会出错:t3.operator=(t2.operator=(t1))；
//4.必须要参数Test t；
*/