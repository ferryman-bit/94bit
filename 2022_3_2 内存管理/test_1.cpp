#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;

//String
//引用计数器类
/*
class String_rep
{
	friend class String;
	friend ostream& operator<<(ostream &out, const String &s);
public:
	String_rep(const char *str = "") :use_count(0)
	{
		m_data = new char[strlen(str) + 1];
		strcpy(m_data, str);
	}
	String_rep(const String_rep &rep) :use_count(0)
	{
		m_data = new char[strlen(rep.m_data) + 1];
		strcpy(m_data, rep.m_data);
	}
	String_rep& operator=(const String_rep &rep);
	~String_rep()
	{
		delete[]m_data;
		m_data = nullptr;
	}
public:
	void increment()
	{
		++use_count;
	}
	void decrement()
	{
		if (--use_count == 0)
		{
			delete this; //自杀
		}
	}
private:
	char *m_data;
	size_t use_count;
};
/////////////////////////////////////////////////////////////////
class String
{
	friend ostream& operator<<(ostream &out, const String &s);
public:
	String(const char *str = "") :m_rep(new String_rep(str))
	{
		m_rep->increment();
	}
	String(const String &s) : m_rep(s.m_rep)
	{
		m_rep->increment();
	}
	String& operator=(const String &s)
	{
		if (this != &s)
		{
			m_rep->decrement();
			m_rep = s.m_rep;
			m_rep->increment();
		}
		return *this;
	}
	~String()
	{
		m_rep->decrement();
	}
public:
	//写时拷贝
	void to_upper()
	{
		String_rep *new_rep = new String_rep(*m_rep);
		m_rep->decrement();
		m_rep = new_rep;

		char *pch = m_rep->m_data;
		while (*pch != '\0')
		{
			if (*pch >= 'a' && *pch <= 'z')
				*pch -= 32;
			pch++;
		}
		m_rep->increment();
	}
private:
	String_rep *m_rep;
};

ostream& operator<<(ostream &out, const String &s)
{
	out << s.m_rep->m_data;
	return out;
}

void main()
{
	String s1("abc");
	String s2 = s1;

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;

	s1.to_upper();

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
}
*/

class String_rep
{
public:
	String_rep(const char *str = "") :use_count(0)
	{
		m_data = new char[strlen(str) + 1];
		strcpy(m_data, str);
	}
	String_rep(const String_rep &rep);
	String_rep& operator=(const String_rep &rep);
	~String_rep()
	{
		delete[]m_data;;
		m_data = nullptr;
	}
public:
	void increment()
	{
		++use_count;
	}
	void decrement()
	{
		--use_count;
	}
private:
	char *m_data;
	size_t use_count;
};
/////////////////////////////////////////////////////////////////
class String
{
	friend ostream& operator<<(ostream &out, const String &s);
public:
	String(const char *str = "") :m_rep(new String_rep(str))
	{
		m_rep->increment();
	}
	String(const String &s);
	String& operator=(const String &s);
	~String()
	{}
private:
	String_rep *m_rep;
};

ostream& operator<<(ostream &out, const String &s)
{
	return out;
}

void main()
{
	String s("abc");
	String s1("XYZ");
}


/*
class String
{
	friend ostream& operator<<(ostream &out, const String &s);
public:
	String(const char *str = "")
	{
		m_data = new char[strlen(str) + 1];
		strcpy(m_data, str);
	}
	String(const String &s)
	{
		m_data = new char[strlen(s.m_data) + 1];
		strcpy(m_data, s.m_data);
	}
	String& operator=(const String &s)
	{
		if (this != &s)
		{
			delete []m_data;
			m_data = new char[strlen(s.m_data) + 1];
			strcpy(m_data, s.m_data);
		}
		return *this;
	}
	~String()
	{
		delete[]m_data;
		m_data = nullptr;
	}
private:
	char *m_data;
};

ostream& operator<<(ostream &out, const String &s)
{
	out << s.m_data;
	return out;
}

void main()
{
	String s("abc");
	String s1;
	s1 = s;
	cout << "s =" << s << endl;
	cout << "s1=" << s1 << endl;
}
*/

/*
class Test
{
public:
	Test()
	{
		cout << "Test::Test()" << endl;
	}
	~Test()
	{
		cout << "Test::~Test()" << endl;
	}
};

void main()
{
	//Test t; //静态申请
	Test *pt = (Test*)malloc(sizeof(Test));
	if (pt == NULL)
		return;
	free(pt);

	Test  *pt1 = new Test;//申请空间  调动构造函数
	delete pt1;           //析构函数  释放空间
}
*/

/*void main()
{
	int *p1 = (int *)malloc(sizeof(int));
	if (p1 == NULL)
		return;
	free(p1);

	int  *p2 = new int[10];
	delete []p2;
}
*/