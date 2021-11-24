#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"Test.h"
/*
/////////////////////////////////////////////////////////
void CGoods::InitGoods(char *n, float p, int c)
{
strcpy(name, n);
price = p;
count = c;
}
void CGoods::SetName(char n[])
{
strcpy(name, n);
}
void CGoods::GetName(char n[])
{
strcpy(n, name);
}
float CGoods::GetPrice()
{
return price;
}
int CGoods::GetCount()
{
return count;
}
float CGoods::GetTotal()
{
return price * count;
}



/*
//类
class CGoods
{
public:
//方法成员
void InitGoods(char *n, float p, int c)
{
strcpy(name, n);
price = p;
count = c;
}
void SetName(char n[])
{
strcpy(name, n);
}
void GetName(char n[])
{
strcpy(n, name);
}
float GetPrice()
{
return price;
}
int GetCount()
{
return count;
}
float GetTotal()
{
return price * count;
}
private:
//数据成员
char  name[20]; //
float price;
int   count;
};

void main()
{
CGoods c1;
CGoods c2;
c1.InitGoods("C++.pdf", 56.5, 20);
c2.InitGoods("Java.pdf", 40, 10);

cout<<"c1 count = "<<c1.GetCount()<<endl;
cout<<"c2 count = "<<c2.GetCount()<<endl;
}


/*
//类
struct CGoods
{
char name[20];
float price;
int count;
};

void InitGoods(CGoods *pc, char *n, float p, int c)
{
strcpy(pc->name, n);
pc->price = p;
pc->count = c;
}

void main()
{
CGoods c1; //结构体变量
InitGoods(&c1, "C++.pdf", 56, 20);
InitGoods(&c2, "C++.pdf", 56, 20);
}

/*
typedef struct Test
{
char a;
double b;
int c;
void fun()
{}
}Test;

void main()
{
//printf("%d\n", sizeof(Test));
struct Test t;
}
*/