#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�������������ð������

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

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//
//#include<stdio.h>
//#include<memory.h>
////��ʼ��
//void init(int arr[],int sz)
//{
//	memset(arr, 0, sz*sizeof(int));
//}
////��ӡ
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

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

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
//	printf("A������Ϊ��");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	printf("B������Ϊ:");
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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("ż��λΪ��");
//	for (int i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n����λΪ��");
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

//����������ʱ������������������������
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
//	printf("��������num1,num2:");
//	scanf("%d%d", &num1, &num2);
//	exchange(&num1, &num2);
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

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
˼·������Ƚϼ򵥣���ο�����
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
//	//������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��
//	Reverse(str);
//	printf("%s\n", str);
//	return 0;
//}


// ע�⣺���������OJʱ������Ҫ����ѭ�����룬��Ϊÿ���㷨�����ж����������������֤���ο�����main����д����
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

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include<stdio.h>
int main()
{
	
}