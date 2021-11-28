#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;
//���캯������ʼ�����󣬶����ǿ��ռ䴴�����

//��ͨ��SetDate���еķ����������������ݣ��������鷳��
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

//���캯�����ԣ�
//  1.��������������ͬ
//  2.�޷���ֵ
//  3.����ʵ����ʱ������ �Զ����� ��Ӧ�Ĺ��캯��
//  4.���캯���������ص�

/*
class Date
{
public:
	//1.�޲ι��캯��
	Date ()
	{}

	//2.�������Ĺ��캯��
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
	Date d1; //�����޲ι��캯��
	Date d2(2021, 5, 1); // ���ô��εĹ��캯��

	//***ע��ͨ���޲ι��캯����������ʱ��������治�����ţ�������˺�������
	
	// Date d3();  //������d3�������ú����޲Σ�����һ���������͵Ķ���
}*/

//�������û����ʽ���幹�캯������C++���������Զ�����һ���޲ε�Ĭ�Ϲ��캯����
//һ���û���ʽ���壬����������������
/*
class Date
{
public:
	/*
	//�û���ʽ�����˹��캯������������������
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
	//û�ж��幹�캯��������Ҳ�ܴ����ɹ�������ñ������Զ����ɵ�Ĭ�Ϲ��캯��
	Date d;
}*/

//�޲ι��캯����ȫȱʡ���캯����������Ĭ�����ɵĹ��캯������Ϊ��Ĭ�ϳ�Ա������
//Ĭ�Ϲ��캯��ֻ����һ����

//Ĭ�Ϲ��캯��
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

//C++�����ͷ�Ϊ�����ã����������ͺ��Զ������͡�
//�������ͣ��﷨�Ѿ�����õ����ͣ���int,char...
//�Զ������ͣ�ʹ��class/struct/union�Լ����������
//������Ĭ�����ɵĹ��캯������Զ������ͳ�Ա_t��������Ĭ�ϳ�Ա����
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
	//����(����)����
	int _year;
	int _month;
	int _day;

	//�Զ�������
	Time _t;
};

int main()
{
	Date d;
	return 0;
}*/

//��Ա�������������
//year=year  ��������
//1._year=year     2.m_year=year     3.this->year=year
