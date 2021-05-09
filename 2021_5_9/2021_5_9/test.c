#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
//int* singleNumbers(int* nums, int numsSize, int* returnSize){
//	int result = 0;
//	//��һ��
//	for (int i = 0; i<numsSize; i++)
//	{
//		result ^= nums[i];//����Ľ������������һ�ε��������
//	}
//	int count = 0;
//	//�ҽ��Ϊ1��λ����ʾ�����������λ��һ��
//	while (!(result & 1))//result=0001&0001=0001  ��һ��bitλ
//	{
//		result >>= 1;
//		count++;//�����ĸ�λ����һ��
//	}
//	//�ֳ�����
//	for (int j = 0; j<numsSize; j++)
//	{
//		if( ((nums[j] >> count) & 1 )== 1)//nums[0]=1=0001&0001=0001
//		{
//			returnSize[0] ^= nums[j];
//		}
//		else
//		{
//			returnSize[1] ^= nums[j];
//		}
//	}
//	return returnSize;
//}
int* singleNumbers(int* nums, int numsSize, int* returnSize){
	int result = 0;
	returnSize = (int*)malloc(sizeof(int) * 2);
	memset(returnSize,0,sizeof(int)*2);
	for (int i = 0; i<numsSize; i++)
	{
		result ^= nums[i];//����Ľ������������һ�ε��������
	}
	int count = 0;
	//�ҽ��Ϊ1��λ����ʾ�����������λ��һ��
	while (!(result & 1))
	{
		result >>= 1;
		count++;//�����ĸ�λ����һ��
	}
	//�ֳ�����
	for (int j = 0; j<numsSize; j++)
	{
		if (((nums[j] >> count) & 1) == 1)
		{
			returnSize[0] ^= nums[j];
		}
		else
		{
			returnSize[1] ^= nums[j];
		}
	}
	return returnSize;
}

int main()
{
	int nums[] = {4,1,4,6};//0010^0011=0001
	int numsSizes = sizeof(nums) / sizeof(nums[0]);
	int* returnSize = NULL;
	int* returnSize_temp=singleNumbers( nums, numsSizes, returnSize);
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", returnSize_temp[i]);
	}
	printf("\n");

	return 0;
}