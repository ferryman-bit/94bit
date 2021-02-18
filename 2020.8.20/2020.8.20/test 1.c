#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//1到 100 的所有整数中出现多少次数字9
//
// int main()
// {
//    int i;
//    int sum = 0;
//    for (i = 0; i < 100; i++)
//   {         
//	if (i % 10 == 9)
//		 {
//	      sum++;
//	     }
//	if (i / 10 == 9)
//	      {
//		   sum++;
//		   }
//	}
//   printf("%d\n", sum);
//   return 0;
// }

 

//100 - 200 之间的素数

//int main()
//{
//	int k = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)     
//	{
//		int j = 0;
//		for (j = 2; j<i; j++)     
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			k++;
//			printf("%d\n ", i);
//		}
//	}
//
//	return 0;
//}



//求1000-2000之间所有的闰年。

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}



//求两个数的最大公约数

//int  main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请任意输入两个数：");
//	scanf("%d%d", &a, &b);
//	while ((a - b) != 0)
//	{
//		if (a>b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	printf("最大公约数为：%d\n", b);
//
//	return 0;
//}