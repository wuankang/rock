#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int* addToArrayForm(int* num, int numSize, int k, int* returnSize){
//	int i = numSize - 1;//数组底数
//	while (k)
//	{
//		int count = 0;//进位数
//		int tmp = k % 10;
//		num[i] = num[i]+tmp+count;
//		if (num[i]>10)
//		{
//			count = 1;
//			num[i] -= 10;
//		}
//		i--;
//		k /= 10;
//	}
//	return num;
//}
//
//int main()
//{
//	int num[4] = { 1, 2, 0, 0 };
//	int numSize = sizeof(num) / sizeof(num[0]);
//	int returnSize = 0;
//	int k = 34;
//	addToArrayForm(num, numSize, k, &returnSize);
//	for (int i = 0; i < numSize; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	return 0;
//}



/**
* Note: The returned array must be malloced, assume caller calls free().
*/
//#include<malloc.h>
//
//int* addToArrayForm(int* num, int numSize, int k, int* returnSize){
//	int k_size = 0;//k的大小
//	int temp_k = k;
//	while (temp_k)//34
//	{
//		k_size++;
//		temp_k /= 10;
//	}
//	int len = k_size>numSize ? k_size + 1 : numSize + 1;//最终的数组长度
//	int* arr_num = (int*)malloc(sizeof(int)*len);//开辟新数组的大小
//	int pos = 0;//位置
//	int k_size2 = 0;
//	int end = numSize - 1;//老数组的最后位置
//	int ret = 0;//统计每位的和
//	int next = 0;//进位数
//	while (end >= 0 || k_size2<k_size)
//	{
//		int x1 = 0, x2 = 0;
//		if (end >= 0)
//		{
//			x1 = num[end--];
//		}
//		if (k_size2<k_size)
//		{
//			x2 = k % 10;
//			k /= 10;
//			k_size2++;
//		}
//		ret = x1 + x2 + next;
//		next = 0;
//		if (ret>=10)
//		{
//			next = 1;
//			ret -= 10;
//		}
//		arr_num[pos++] = ret;
//	}
//	if (1 == next)
//	{
//		arr_num[pos++] = next;
//	}
//	//反转
//	int begin = 0;
//	int end1 = pos - 1;
//	while (begin <= end1)
//	{
//		int temp = arr_num[begin];
//		arr_num[begin] = arr_num[end1];
//		arr_num[end1] = temp;
//		begin++;
//		end1--;
//	}
//	*returnSize = pos;
//	return arr_num;
//}
//
//int main()
//{
//	int num[3] = {2,1,5};
//	int numSize = sizeof(num) / sizeof(num[0]);
//	int returnSize = 0;
//	int k = 806;
//	int* num1=addToArrayForm(num, numSize, k, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", num1[i]);
//	}
//	printf("\n");
//	return 0;
//}
#include "Queue.h"
int main()
{
	Test();
	return 0;
}