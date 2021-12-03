#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
class Date
{
public:
	//��ȡĳ��ĳ�µ�����
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
	//ȫȱʡ�Ĺ��캯��
	Date(int year = 1900, int month = 1, int day = 1);

	//�������캯��
	//d2(d1)
	Date(const Date& d);

	//��ֵ���������
	//d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator = (const Date& d);

	//��������
	~Date();

	//����+=����
	Date& operator+=(int day);

	//����+����
	Date operator+(int day); 

	//����-����
	Date operator-(int day);
	
	//����-=����
	Date& operator-=(int day);

	//ǰ��++
	Date& operator++();

	//����++
	Date& operator++(int);

	//ǰ��--
	Date& operator--();

	//ǰ��--
	Date& operator--(int);

	// >���������
	bool operator > (const Date& d);

	// ==���������
	bool operator == (const Date& d);

	// >=���������
	inline bool operator >= (const Date& d);

	// <���������
	bool operator < (const Date& d);

	// <=���������
	bool operator <= (const Date& d);

	// !=���������
	bool operator != (const Date& d);

	//����-���� ��������
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
	Test(int data = 0)//���캯��
	{
		m_data = data;
	}
	Test(const Test &t)//�������캯��
	{
		m_data = t.m_data;
	}
	Test& operator=(const Test &t)//��ֵ
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}
	~Test()//��������
	{}
public:
	Test* operator&()  //��ͨ����ȡ��ַ��
	{
		return this;
	}
	const Test* operator&()const  //������ȡ��ַ��
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
	friend void fun(const Test &t);//��Ԫ�������������ֱ�ӷ���˽������
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
	friend Complex operator+(int value, const Complex &x);//����Ϊ��Ԫ����
public:
	Complex operator+(const Complex &c) //����һ����ת������ӣ�
	{
		return Complex(m_real + c.m_real, m_imag + c.m_imag);
	}
	Complex operator+(int value)  //ֱ�����
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
	Complex y = c1 + 10;//10��Ϊһ������  c1.operator+
}*/