#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;

/*class List
{
public:
	//内部类
	class iterator
	{
	public:
		void show()const
		{
			cout << "List::iterator::show()." << endl;
		}
	private:
		int m_c = 0;
	};
private:
	int m_a = 0;
	int m_b = 0;
};

void main()
{
	List::iterator it;
	it.show();
}*/

/*class Test
{
public:
	//从语法上来说：
	ostream& operator <<(ostream &out)
	{
		out << m_data;
		return out;
	}
public:
	Test(int data = 0) : m_data(data)
	{}
	~Test()
	{}
public:
	int GetData()const
	{
		return m_data;
	}
private:
	int m_data;
};


void main()
{
	Test t(10);
	//cout << "t = " << t < endl;
	cout << "t = ";
	
	t << cout << endl;//t.operator<<(cout)

	//cout<<t<<endl;
}*/


/*class Test
{
	friend void fun(const Test &t);
	friend ostream& operator <<(ostream &out, const Test &t);
	friend istream& operator >>(istream &in, Test &t);
public:
	Test(int data = 0) : m_data(data)
	{}
	~Test()
	{}
private:
	int m_data;
};

void fun(const Test &t)
{
	cout << "data = " << t.m_data << endl;
}

ostream& operator <<(ostream &out, const Test &t)
{
	out << t.m_data;
	return out;
}

istream& operator >>(istream &in, Test &t)
{
	in >> t.m_data;
	return in;
}

void main()
{
	Test t;
	cin >> t;//输入流 提取运算符
	cout << "t = " << t << endl;//输出流 插入
}*/