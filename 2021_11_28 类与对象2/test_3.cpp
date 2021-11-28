#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
#include<vld.h>
using namespace std;

class Test
{
public:
	//Ĭ�Ϲ��캯��
	Test(int d = 0)
	{
		cout << "Cerate Test Object : "<<this<<endl;
		m_data = d;
	}

	//�������췽��
	Test(const Test &t)
	{
		cout << "Copy Create Test Object : " <<this<<endl;
		m_data = t.m_data;
	}

	//��ֵ��� �Ⱥŵ�����
	//Test& opertor=(const Test &t)
	Test operator=(const Test &t)
	{
	    cout << "Assign." << this << " : " << &t << endl;
		if (this != &t)//����Լ��Ƿ���Լ���ֵ
		{
			m_data = t.m_data;
		}
		return *this;
	}

	//��������
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

void main()
{
	Test t1 = (100);
	Test t2 = fun(t1);
}