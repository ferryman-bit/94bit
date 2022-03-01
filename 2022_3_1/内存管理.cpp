#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;



/*
class Test
{
public:
	Test()
	{
		cout << "Create Test Object." << endl;
		m_data = 0;
	}
	~Test()
	{
		cout << "Free Test Object." << endl;
	}
public:
	void InitTest(int data = 0)
	{
		cout << "Init Test." << endl;
		m_data = data;
	}
	void DestroyTest()
	{
		cout << "Destroy Test." << endl;
	}
private:
	int m_data;
};

void main()
{
	Test *pt = new Test[10]; 

	delete []pt;//申请数组，释放时要加方括号；
}

/*
void main()
{
	Test *pt = new Test;  //1.申请空间  2.调动构造函数
	delete pt;            //2.摧毁对象  2.释放空间
}
*/


/*
void main()
{
	int *p1 = (int *)malloc(sizeof(int));
	if (p1 == NULL)
		return;

	*p1 = 10;
	free(p1);

	int *p2 = new int;//new 初始化

	delete p2;
}*/


/*
void main()
{
	int *p1 = (int *)malloc(sizeof(int));
	if (p1 == NULL)
		return;

	int *p2 = new int[10];

	free(p1);
	delete []p2;
}*/


/*
void main()
{
	int *ptr = (int *)malloc(sizeof(int)* 10);
	if (ptr == NULL)
		return;
	//calloc;
	//realloc;

	free(ptr);
}*/