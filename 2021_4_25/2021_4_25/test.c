#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_max(int num1,int num2)
//{
//	return num1 > num2 ? num1 : num2;
//}
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("����������ֵ��");
//	scanf("%d%d", &num1, &num2);
//	int max=my_max(num1,num2);
//	printf("max=%d\n", max);
//	return 0;
//}

//д������������������--�Ӵ�С
//#include<stdio.h>
////����
//void sort(int a[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//
//	}
//}
//
//int main()
//{
//	int a[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int sz = sizeof(a) / sizeof(int);
//	//����
//	sort(a,sz);
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", a[j]);
//	}
//	printf("\n");
//	return 0;
//}

//��ӡ1~100֮��3�ı���

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		num += 3;
//		if (num > 100)
//		{
//			break;
//		}
//		printf("%d ", num);
//	}
//	printf("\n");
//	return 0;
//}

//���Լ��
//#include<stdio.h>
//int gcd(int a, int b)
//{
//	int c = 0;
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	return b;
//	
//}
//
//int main()
//{
//	int num=gcd(20,40);
//	printf("%d\n", num);
//	return 0;
//}

////��ӡ1000~2000�������
//#include<stdio.h>
//
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//�ܱ�1��������������
//#include<stdio.h>
//void prime_print()
//{
//	int count = 0;
//	int j = 0;
//	for (int i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= i/2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i / 2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//}
//int main()
//{
//	prime_print();
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include<stdio.h>
//
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}	
//	printf("count=%d\n", count);
//	return 0;
//}

//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//#include<stdio.h>
//int main()
//{
//	double sum = 0.0;
//	int change = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i)*change;
//		change *= -1;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
////#include <stdio.h>
//
//
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//��10 �����������ֵ

//#include<stdio.h>
//int main()
//{
//	printf("please input ten numbers to compare:\n");
//	int a[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int max = a[0];
//	for (int j = 1; j < 9; j++)
//	{
//		if (max < a[j])
//		{
//			max = a[j];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//#include<stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ϿεĲ�������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned)time(NULL));
//	int random_number = rand()%51+10;
//	int x = 0;
//	while (1)
//	{
//		printf("please input your guess:");
//		scanf("%d", &x);
//		if (x == random_number)
//		{
//			printf("good!\n");
//			break;
//		}
//		else if (x > random_number)
//		{
//			printf("bigger more!\n");
//		}
//		else
//		{
//			printf("smaller more!\n");
//		}
//	}
//	return 0;
//}
//���ֲ���
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#include<stdio.h>
//void binary_search(int arr[], int sz,int x)
//{
//	int left = 0;//��ʼλ��
//	int right = sz - 1;//ĩβλ��
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�λ��
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("subscript is %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("not found!\n");
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(int);
//	printf("please/ input your serach number:");
//	int x = 0;
//	scanf("%d", &x);
//	binary_search(arr,sz,x);
//	return 0;
//}
