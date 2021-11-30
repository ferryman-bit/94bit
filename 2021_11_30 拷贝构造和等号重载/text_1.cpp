#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Test
{
public:
	//Ĭ�Ϲ��캯��
	Test(int d = 0)
	{
		cout << "Cerate Test Object : " << this << endl;
		m_data = d;
	}

	//�������췽��
	Test(const Test &t)
	{
		cout << "Copy Create Test Object : " << this << endl;
		m_data = t.m_data;
	}

	//��ֵ��� �Ⱥŵ�����
	//Test& operator=(const Test &t)
	Test& operator=(const Test &t)
	{
		cout << "Assign." << this << " : " << &t << endl;
		if (this != &t) //����Ƿ��Լ����Լ���ֵ
		{
			m_data = t.m_data;
		}
		return *this;//*this ����ǰ����
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

Test fun(const Test &obj)  // ����Test*:���������Ѿ��ͷŵĶ������������ֵ��
{
	int value = obj.GetData();
	return Test(value);
}
void main()
{
	Test t1(100);
	Test t2 = 200;

	Test t3 = t1; //�����ʼ������
	Test t4;
	t4 = t3; //��ֵ  //�����ϣ�t4 .operator=t3
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

//�������캯�������ʣ������ʼ������
/*
Test(const Test &t)

//1.�������ã����벻ͨ����ʹ�ô�ֵ����������ݹ����
//2.
//��δ��ʾ���壬ϵͳ����Ĭ�ϵĿ������캯����
*/

//��ֵ��� �Ⱥŵ�����
/*
Test& operator=(const Test &t)

//1.���Բ�Ҫconst���﷨��ȷ��Ϊ����Ҫ�󣺷�ֹ�ڲ������õĶ����޸ģ�
//2.���Բ�Ҫ&��Ҫ&����߳����Ч�ʣ� ��ʱ�������������÷��أ�
//3.�����޷���ֵ�������ȸ�ֵʱ�����:t3.operator=(t2.operator=(t1))��
//4.����Ҫ����Test t��
*/