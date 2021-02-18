#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//计算1！+2！……+n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j  = 1; j  <= 10; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}




//辗转相除法  
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("最大公约数是:%d\n",b);
//
//	return 0;
//}



//   两个数的最大公约数  暴力求解
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int min = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		min = b;
//	else
//		min = a;
//
//	for (i = min; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			break;
//		}
//	}
//	printf("最大公约数是：%d\n", i);
//	return 0;
//}



// 任意三个数按照从大到小输出。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//调整
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}




















