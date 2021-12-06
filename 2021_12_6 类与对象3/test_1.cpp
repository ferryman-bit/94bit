#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
//������
class Date
{
	friend ostream& operator<<(ostream &out, const Date &d);
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}
	Date(const Date &d)
	{
		m_year = d.m_year;
		m_month = d.m_month;
		m_day = d.m_day;
	}
	~Date()
	{}
public:
	Date operator+(int n)//����+n��
	{

	}
public:
	bool operator>(const Date& d)
	{
		if ((m_year > d.m_month)//���Խ��ֵԽ��
			|| (m_year == d.m_year && m_month > d.m_month)
			|| (m_year == d.m_year && m_month == d.m_month && m_day > d.m_day))
			return true;
		return false;
	}
	bool operator<=(const Date& d)
	{
		return !(*this > d);
	}
	bool operator<(const Date& d)
	{
		if ((m_year < d.m_month)//���ԽС��ֵԽС
			|| (m_year == d.m_year && m_month < d.m_month)
			|| (m_year == d.m_year && m_month == d.m_month && m_day < d.m_day))
			return true;
		return false;
	}
	bool operator >=(const Date& d)
	{
		return !(*this < d);
	}
	bool operator ==(const Date& d)
	{
		return (m_year == d.m_year && m_month == d.m_month && m_day == d.m_day);
	}
	bool operator !=(const Date& d)
	{
		return !(*this == d);
	}
private:
	int m_year;
	int m_month;
	int m_day;
};

ostream& operator<<(ostream &out, const Date &d)
{
	out << d.m_year << "��" << d.m_month << "��" << d.m_day << "��";
	return out;
}

/////////////////////////////////////////////////////////////////////
void main()
{
	Date dt1(2021, 10, 19);
	cout << "dt1 = " << dt1 << endl; 
	Date dt2 = dt1;
	cout << "dt2 = " << dt2 << endl;
	Date dt3;
	dt3 = dt2;
	cout << "dt3 = " << dt3 << endl;
}

/*class Test
{
public:
	Test(int data = 0)
	{
		m_data = data;
	}
private:
	int m_data;
};

void main()
{
	Test t;
}*/