#define _CRT_SECURE_NO_WARNINGS 1
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


#include<stdio.h>
#include<math.h>

//int main()
//{
//	int number = 100000;
//	int count = 0;
//	int sum = 0;
//	while (number)
//	{
//		count = 0;
//		sum = 0;
//		//算出位数0~100000
//		int number_temp = number;
//		while (number_temp)
//		{
//			number_temp = number_temp / 10;
//			count++;//位数
//		}
//		//分别各个位数的count次方
//		int number_temp1 = number;
//		while (number_temp1)
//		{
//			int a=number_temp1 % 10;
//			sum = sum + pow(a,count);
//			number_temp1 = number_temp1 / 10;
//		}
//		if (sum == number)
//		{
//			printf("%d ", number);
//		}
//		number--;
//	}
//	printf("\n");
//	return 0;
//}

//用C语言在屏幕上输出以下图案：
//
//#include<stdio.h>
//
//int main()
//{
//	//打印上面7行,*数第七行有13个，1，3，5，7...13--*
//	//6 5 4 3 2 1个空格
//	printf("请输入要打印的行数:");
//	int row = 0;
//	scanf("%d", &row);
//	//上半部分
//	for (int i = 0; i < row; i++)
//	{
//		int count = 2 * i + 1;
//		int j = row-1-i;
//		while (j--)
//		{
//			printf(" ");
//		}
//		while (count)
//		{
//			printf("*");//打印*
//			count--;
//		}
//		printf("\n");
//	}
//	//打印下面6行
//	//*--11 9 7 5 3 2 1 ---
//	//" "--1 2 3 4 5 6
//	for (int i = 0; i < row-1; i++)
//	{
//		//打印空格
//		int k = i + 1;
//		while (k--)
//		{
//			printf(" ");
//		}
//		//打印*号
//		int j =2*(row-1-i)-1;
//		while (j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//
//#include<stdio.h>
//void my_drink(int money)
//{
//	if (money < 1)
//	{
//		return;
//	}
//	int sum = money;//起始喝的汽水瓶数
//	int empty=money;
//	while (empty > 1)
//	{
//		int rare = 0;
//		if ((empty % 2) == 1)
//		{
//			rare++;
//		}
//		int exchange = empty / 2;//空瓶换来的汽水瓶水
//		sum += exchange;//加上交换的汽水瓶数
//		empty = exchange+rare;
//	}
//	printf("%d\n", sum);
//	
//}
//int main()
//{
//	my_drink(20);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//模拟实现库函数strlen
//#include<stdio.h>
//size_t my_strlen(char* arr)
//{
//	size_t count = 0;//计数
//	while ((*arr) != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	size_t len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

////模拟实现库函数strcpy
//#include<stdio.h>
//
//void my_strcpy(char* arr1, char* arr2)
//{
//	char* temp = arr1;
//	while (*arr2)
//	{
//		*temp = *arr2;
//		temp++;
//		arr2++;
//	}
//	*(temp++) = *arr2;
//}
//int main()
//{
//	char arr1[100];
//	char arr2[100] = "hello world";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//#include<stdio.h>
//void sort(int* arr)
//{
//	int* left = arr;
//	int* right = arr + 10 - 1;
//	while (left < right)
//	{
//		//判断从左往右的值是否是偶数
//		if ((*left) % 2 == 0)
//		{
//			while (1)
//			{
//				//如果是奇数就交换
//				if ((*right) % 2 == 1)
//				{
//					int temp = *left;
//					*left = *right;
//					*right = temp;
//					left++;
//					right--;
//					break;
//				}
//				//否则最终的地址往前走
//				else
//				{
//					right--;
//				}
//			}
//		}
//		else
//		{
//			left++;
//		}
//	}
//}
//
//
//
//int main()
//{
//	//输入一组整数
//	int arr[10] = { 0 };
//	//手动输入
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

