#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，
 //int main()
 //{
 //   int s;
 //   double sum, t, d;
 //   sum = 1.0;
 //   d = 2.0;
 //   s = 1;
	//  while (d <= 100)
	//	   {
	//      s = (-1)*s;
 //         t = s*(1 / d);
 //         sum = sum + t;
 //       d = d + 1;
	//     }
	//    printf("%f\n", sum);
	//    return 0;
	// }







//int main()
//{
//	int i;
//	double sum = 0.0;
//	for (i = 1; i <= 2; i++)
//	{
//
//		sum += pow(-1, i + 1) * 1 / i;
//	}
//	printf("sum =%lf\n", sum);
//	return 0;
//}





////多个字符从两端移动，向中间汇聚。
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//sleep  睡眠函数 1000毫秒=1秒
//		system("cls");// cls 清空屏幕
//		left++;
//	    right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//




// 模拟用户登录情景，并且最多只能登录三次。
//int main()
//{
//	int i = 0;

//假设正确的密码为：123456
//
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//比较关系
//		//strcmp -  函数是用来比较字符串的大小关系的
//		//库函数-  所需要的头文件是:  string.h
//		if (strcmp(password,"123456")==0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}




















// 二分查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	int n = 7;
//
//	int left = 0;
//	int right = 9;
//
//	//根据左右下标计算出中间元素的下标(二分法)
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else
//		{ 
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//
//
//	return 0;
//}



//依次查找
//在一个有序数组中查找具体的某个数字N

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 17;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了:%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//计算1！+2！……+n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j  = 1; j  <= 4; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}


//计算n的阶乘

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	//while (i <= n)
//	//{
//	//   ret = ret * i;
//	//	i++;
//	//}
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}