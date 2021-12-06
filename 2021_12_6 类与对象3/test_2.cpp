#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Test
{
public:
	Test()
	{}
private:
	int m_data;
};

void main()
{
	Test t1;
	Test t2 = t1;  //不允许拷贝 ？
	Test t3;
	t3 = t2;       //不允许赋值 ?
}


/*
class A
{
protected:
friend void fun(A &a);
public:

A()
{
cout<<"A::A()"<<endl;
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
friend void fun(A &a);
friend class A;
};

void fun(A &a)
{
cout<<"m_a : "<<a.m_a<<endl;
}

void main()
{
A a;
fun(a);
}

/*
class B
{
public:
B(int  b)
{
cout<<"B::B()"<<endl;
}
};

class A
{
public:
A()
{
cout<<"A::A()"<<endl;
}
private:
int m_a = 0; //默认值 C++11支持
int *ptr = nullptr;
B b = 0;
const int c = 0;
};

void main()
{
A a;
}


/*
class A
{
public:
A()
{
cout<<"A::A()"<<endl;
}
};

class B
{
public:
B()
{
cout<<"B::B()"<<endl;
}
};

class C
{
public:
C()
{
cout<<"C::C()"<<endl;
}
};

class D
{
public:
D()
{
cout<<"D::D()"<<endl;
}
};

class Test
{
public:
Test()
{
cout<<"Test::Test()"<<endl;
}
private:
A a;
static B b;
C c;
};

D d;
B Test::b;

void main()
{
Test t;
}

/*
class A
{
public:
A()
{
m_count++;
}
~A()
{
m_count--;
}
public:
static int GetCount()
{
return m_count;
}
private:
static int m_count;
};

int A::m_count = 0;

void main()
{
cout<<"count = "<<A::GetCount()<<endl;
A a;
a.GetCount();
}

/*
void main()
{
A a;
{
A a1;
A a2;
cout<<a.GetCount()<<endl;
}
A a3;
cout<<a.GetCount()<<endl;
}

/*
class Test
{
public:
Test()
{}
public:

private:
static int m_a;
};

int Test::m_a = 0;

void main()
{
Test t1;
Test t2;
Test t3;
}

/*
class Test
{
public:
Test() :m_b(0)
{}
public:
static void fun() //没有this指针
{
m_a = 0;
//m_b = 0;
show();
}

void show()
{
m_b = 0;
m_a = 0;
fun();
}
private:
static int m_a;
int m_b;
};

int Test::m_a = 0;

void main()
{
Test t;
}

/*
class A
{
public:
explicit A(int a):_a1(a), _a2(_a1)
{}
void Print()
{
cout << _a1 << " " << _a2 << endl;
}
private:
int _a2;
int _a1;
};

int main()
{
A aa(1);
aa.Print();
return 0;
}

/*
class A
{
public:
A(int a)
{
cout<<"A::A()"<<endl;
}
};

class B
{
public:
B(int b)
{
cout<<"B::B()"<<endl;
}
};

class C
{
public:
C(int c)
{
cout<<"C::C()"<<endl;
}
};

class Test
{
public:
Test():b(2),a(1),c(3)
{
cout<<"Test::Test()"<<endl;
}
private:
A a;
B b;
C c;
};

void main()
{
Test t;
}

/*
class Test
{
public:
Test(int b) : m_a(0), m_b(b), m_c(0), m_aa(0)
{
//
}

private:
int m_a;
int &m_b;
const int m_c;
A m_aa;
};

void main()
{
int a = 10;
Test t(a);
}

/*
class Test
{
public:
//构造对象
//初始化对象
//类型转换
//显示
explicit Test(int data = 0):m_data(data)
{
//m_data = 0; //赋初值
}
Test(const Test &t)
{
m_data = t.m_data;
}
Test& operator=(const Test &t)
{
if(this != &t)
{
m_data = t.m_data;
}
return *this;
}
~Test()
{}
public:
Test* operator&()
{
return this;
}
const Test* operator&()const
{
return this;
}
public:
operator int()  //类型的强制转化
{
return m_data;
}
private:
int m_data;
};

void main()
{
Test t;
t = (Test)100;

int value = (int)t;
}


/*
//日期类
class Date
{
friend ostream& operator<<(ostream &out, const Date &d);
public:
Date(int year=1900, int month=1, int day=1)
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
//Date& operator=(const Date &d);
~Date()
{}
public:
bool IsLeap(int year)
{
if((year%4==0&&year%100!=0) || (year%400==0))
return true;
return false;
}
int GetDayByYearMonth(int year, int month)
{
int days[13] = {29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
if(month == 2)
{
if(IsLeap(year))
month = 0;
}
return days[month];
}
public:
Date operator+(int n) //日期+n天
{
int year = m_year;
int month = m_month;
int day = m_day;
int days = GetDayByYearMonth(year, month);

while(day+n > days)
{
month++;
if(month > 12)
{
year++;
month = 1;
}
n -= days;
days = GetDayByYearMonth(year, month);
}
day += n;
return Date(year, month, day);
}
Date& operator+=(int n)
{
Date tmp = *this + n;
*this = tmp;
return *this;
}
Date& operator++()
{
*this += 1;
return *this;
}
Date operator++(int)
{
Date tmp = *this;
++*this;
return tmp;
}
public:
Date operator-(int n); //日期-n天
Date& operator-=(int n);
Date& operator--();
Date& operator--(int);
Date operator-(const Date &d);
public:
int GetWeek(int year, int month, int day); //星期几
public:
bool operator>(const Date& d)
{
if((m_year > d.m_year)
|| (m_year==d.m_year && m_month>d.m_month)
|| (m_year==d.m_year && m_month==d.m_month && m_day>d.m_day))
return true;
return false;
}
bool operator <= (const Date& d)
{
return !(*this > d);
}
bool operator<(const Date& d)
{
if((m_year < d.m_year)
|| (m_year==d.m_year && m_month<d.m_month)
|| (m_year==d.m_year && m_month==d.m_month && m_day<d.m_day))
return true;
return false;
}
bool operator >= (const Date& d)
{
return !(*this < d);
}
bool operator==(const Date& d)
{
return (m_year==d.m_year && m_month==d.m_month && m_day==d.m_day);
}
bool operator!=(const Date& d)
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
out<<d.m_year<<"年"<<d.m_month<<"月"<<d.m_day<<"日";
return out;
}

////////////////////////////////////////////////////////////

void  main()
{
Date dt1(2021,10,19);
cout<<"dt1 = "<<dt1<<endl;

//Date dt = dt1 + 13;
//cout<<"dt = "<<dt<<endl;

//dt1 += 100;
Date dt2 = dt1++;
cout<<"dt1 = "<<dt1<<endl;
cout<<"dt2 = "<<dt2<<endl;
}

/*
Date& operator+=(int n)
{
int days = GetDayByYearMonth(m_year, m_month);

while(m_day+n > days)
{
m_month++;
if(m_month > 12)
{
m_year++;
m_month = 1;
}
n -= days;
days = GetDayByYearMonth(m_year, m_month);
}
m_day += n;
return *this;
}

int GetDayByYearMonth(int year, int month)
{
if(month==1 || month==3 || month==5 || month==7
|| month==8 || month==10 || month==12)
return 31;
else if(month == 2)
{
if(IsLeap(year))
return 29;
return 28;
}
return 30;
}

void  main()
{
Date dt1(2021,10,19);
cout<<"dt1 = "<<dt1<<endl;
Date dt2 = dt1;
cout<<"dt2 = "<<dt2<<endl;
Date dt3;
dt3 = dt2;
cout<<"dt3 = "<<dt3<<endl;

}


/*
class Test
{
public:
Test(int data = 0):m_data(data)
{}
Test(const Test &t)
{
m_data = t.m_data;
}
Test& operator=(const Test &t)
{
if(this != &t)
{
m_data = t.m_data;
}
return *this;
}
~Test()
{}
public:
Test* operator&()
{
return this;
}
const Test* operator&()const
{
return this;
}
private:
int m_data;
};

void main()
{
Test t;
t = 100;

int value = (int)t;
}

/*
void main()
{
const Test t;
Test t1 = t;
Test t2;
t2 = t1;

const Test *pt = &t;
}
*/