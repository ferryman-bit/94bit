#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
//日期类
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
	Date operator+(int n)//日期+n天
	{

	}
public:
	bool operator>(const Date& d)
	{
		if ((m_year > d.m_month)//年份越大，值越大
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
		if ((m_year < d.m_month)//年份越小，值越小
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
	out << d.m_year << "年" << d.m_month << "月" << d.m_day << "日";
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