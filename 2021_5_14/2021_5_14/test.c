//#define _CRT_SECURE_NO_WARNINGS 1
//
#include<stdio.h>
#include<string.h>
//
//void replaceSpace(char *str, int length) {
//		int count = 0;
//		char* str_cur = str;
//		while (*str_cur++)
//		{
//			count++;
//			if (*str == ' ')
//			{
//				char* cur = str_cur;
//				length = length - count + 2;
//				char* end = cur + length;
//				while (length--)
//				{
//					*end = *(cur + 1);
//					*(end - 1) = *(cur + 2);
//					*(end - 2) = *(cur + 3);
//					*cur = '%';
//					*(cur + 1) = '2';
//					*(cur + 2) = '0';
//				}
//				count = 0;
//			}
//	}
//}
//
//
//int main()
//{
//	char str[] = "We are happy";
//	int length = strlen(str);
//	replaceSpace(str, length);
//	printf("%s", str);
//	return 0;
//}
//
//
//
//void reverse(int* nums, int k)
//{
//	//整体反转
//	if (k == 0)
//	{
//		return;
//	}
//	int* start = nums;
//	int* end = nums + k - 1;
//	while (start <= end)
//	{
//		int temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//	////局部反转
//	//int* start_part = nums;
//	//int* end_part = nums + k - 1;
//	//while (start_part<end_part)
//	//{
//	//	int temp_part = *start_part;
//	//	*start_part = *end_part;
//	//	*end_part = temp_part;
//	//	start_part++;
//	//	end_part--;
//	//}
//}
//
//
//int main()
//{
//	int nums[] = { -1};
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int k = 0;
//	scanf_s("%d", &k);
//	k %= numsSize;
//	reverse(nums,numsSize);//{7,6,5,4,3,2,1}
//	reverse(nums,k);//{5,6,7,4,3,2,1}
//	reverse(nums + k, numsSize - k);
//	for (int i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//}



/**
* Note: The returned array must be malloced, assume caller calls free().
*/
#include<malloc.h>
#include<math.h>
int* addToArrayForm(int* num, int numSize, int k, int* returnSize){
	int number = 0;
	//num合成一个数
	for (int i = 0; i<numSize; i++)
	{
		number += (num[i] * pow(10, numSize - 1 - i));//1*10^3=1000+2*10^2=1200+3*10=1230+4*10^0=123
	}
	//与k相加
	number += k;
	//number求位数
	int count = 0;
	int temp = number;
	while (temp)
	{
		count++;
		temp /= 10;
	}//count位数
	int* num_add = (int*)malloc(sizeof(int)*count);
	for (int j = 0; j<count; j++)//1234
	{
		num_add[count - 1 - j] = number % 10;//num_add[3]=4,num_add[2]=3
		number /= 10;
	}
	returnSize = (int*)malloc(sizeof(int));
	* returnSize = count;
	return num_add;
}


int main()
{
	int num[] = { 1, 2, 0, 0 };
	int numSize = sizeof(num) / sizeof(num[0]);
	int k = 32;
	int returnsize = 0;
	int* nums = addToArrayForm(num, numSize, k,&returnsize);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}