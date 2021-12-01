#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;

class String
{
public:
	String(const char*str = "")
	{
	    m_data = (char *)malloc(strlen(str) + 1);//+1:ø’º‰‘§¡Ù
		strcpy(m_data, str);
	}
	/*String(const String &s)//«≥øΩ±¥
	{
		m_data = s.m_data;
	}*/
	String(const String &s)//…ÓøΩ±¥
	{
		m_data = (char *)malloc(strlen(s.m_data) + 1);
		strcpy(m_data, s.m_data);
	}
	String& operator=(const String &s)
	{
		if (this != &s)
		{
			free(m_data);
			m_data = (char *)malloc(strlen(s.m_data) + 1);
			strcpy(m_data, s.m_data);
		}
		return *this;
	}
	~String()
	{
		free(m_data);
		m_data = nullptr;
	}
private:
	char *m_data;
};

void main()
{
	String s("abcxyz");

	String s1 = s;
	String s2;
	s2 = s1;
	
}

/*class  Test
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
	Test t=100;
	Test t1 = t;
	Test t2;
	t2 = t1;
}*/

/*class  Test
{
public:
	Test(int data = 0)
	{
		m_data = data;
	}
	Test(const Test &t)
	{
		m_data = t.m_data;
	}
	Test& operator=(const Test &t)
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}
	~Test()
	{}
public:
	void SetData(int data)
	{
		m_data = data;
	}

	//int GetData(const Test * const this)
	int GetData()const//≥£∑Ω∑®
	{
		return m_data;
	}
	//int GetData(Test * const this)
	int GetData()
	{
		return m_data;
	}
private:
	int m_data;
};
 
void main()
{
	Test t;
	t.GetData();
}*/

/*void main()
{
	const Test t;
	cout << "t = " << t.GetData() << endl;
	//t.SetData(100);
	cout << "t = " << t.GetData() << endl;
}*/

/*
void main()
{
	const int a = 0;
	const Test t;
	const int *p = &a;
	const int *const p1 = &a;
}
*/