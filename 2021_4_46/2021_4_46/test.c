#define _CRT_SECURE_NO_WARNINGS 1

//实现一个对整形数组的冒泡排序

//#include<stdio.h>
//
//void bubble_sort(int arr[],int sz)
//{
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 3, 1, 4, 5, 0 };
//	int sz = sizeof(arr) / sizeof(int);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//
//#include<stdio.h>
//#include<memory.h>
////初始化
//void init(int arr[],int sz)
//{
//	memset(arr, 0, sz*sizeof(int));
//}
////打印
//void print(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void assginment(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(int);
//	init(arr,sz);
//	print(arr,sz);
//	assginment(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//#include<stdio.h>
//void exchange(int A[], int B[], int sz)
//{
//	int temp = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		temp = A[i];
//		A[i] = B[i];
//		B[i] = temp;
//	}
//}
//void print(int A[], int B[], int sz)
//{
//	printf("A的数组为：");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	printf("B的数组为:");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int A[] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(A) / sizeof(int);
//	int B[] = { 6, 7, 8, 9, 10 };
//	print(A, B, sz);
//	exchange(A, B, sz);
//	print(A, B, sz);
//	return 0;
//}
//
//#include<stdio.h>
//
//
//void count_number(int a, int b)
//{
//	int count = 0;
//	int c = a^b;
//	for (int i = 0; i<32; i++)
//	{
//		if ((c >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	count_number(a, b);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("偶数位为：");
//	for (int i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n奇数位为：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include<stdio.h>
//
//int  main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	for (int i = 0; i<32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	if (a<0)
//	{
//		count++;
//	}
//	printf("%d\n", count);
//}

//不允许创建临时变量，交换两个整数的内容
//#include<stdio.h>
//void exchange(int* num1, int* num2)
//{
//	*num1 = (*num1) ^ (*num2);
//	*num2 = (*num1) ^ (*num2);
//	*num1 = (*num1) ^ (*num2);
//}
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("依次输入num1,num2:");
//	scanf("%d%d", &num1, &num2);
//	exchange(&num1, &num2);
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
//#include <stdio.h>

//
//int _tmain(int argc, _TCHAR* argv[])
//{
//		int a = 0x11223344;
//		char *pc = (char*)&a;
//		*pc = 0;
//		printf("%x\n", a);
//		return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//#include<stdio.h>
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(int);
//	print(arr, sz);
//	return 0;
//}

/*
思路：该题比较简单，请参考代码
*/
//#include<string.h>
//#include<stdio.h>
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}
//
//
//int main()
//{
//	char str[] = "hello bit";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	Reverse(str);
//	printf("%s\n", str);
//	return 0;
//}


// 注意：如果是在线OJ时，必须要考虑循环输入，因为每个算法可能有多组测试用例进行验证，参考以下main函数写法，
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//void my_sum(int number)
//{
//	int sum = 0;
//	int i = 5;
//	int temp = number;
//	while (i--)
//	{
//		sum += number;
//		number = number * 10 + temp;
//	}
//	printf("sum=%d\n",sum);
//}
//int main()
//{
//	int number = 0;
//	scanf_s("%d", &number);
//	my_sum(number);
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include<stdio.h>
int main()
{
	
}