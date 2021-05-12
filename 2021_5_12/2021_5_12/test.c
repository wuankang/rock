#define _CRT_SECURE_NO_WARNINGS 1

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

//
//struct ListNode* removeElements(struct ListNode* head, int val){
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	struct ListNode* cur = head;//定义当前的地址
//	struct ListNode* prev = NULL;//定义当前的前一个地址为NULL
//	while (cur != NULL)
//	{
//		struct ListNode* next = cur->next;//定义当前地址的下一个地址
//		if (val == cur->val)//如果cur->val等于val
//		{
//			if (prev == NULL)//第一个就是cur->val等于val
//			{
//				free(cur);
//				cur = next;
//				head = cur;
//			}
//			else
//			{
//				cur = next;
//				prev->next = cur;//跳过了cur->val
//			}
//		}
//		else//如果cur->val不等于val
//		{
//			prev = cur;
//			cur = next;
//		}
//	}
//	return head;
//}


//int removeDuplicates(int* nums, int numsSize){
//	int* cur = nums;
//	int* next = nums + 1;
//	int* end = nums + numsSize - 1;
//	if (numsSize<0)
//	{
//		return -1;
//	}
//	else if (numsSize == 0)
//	{
//		return 0;
//	}
//	else if (numsSize == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		while (next < end)
//		{
//			if (*cur == *next)
//			{
//				next++;
//			}
//			else
//			{
//				cur++;
//				*cur = *next;
//			}
//		}
//		if (*cur != *next)
//		{
//			cur++;
//			*cur = *next;
//		}
//		return cur - nums + 1;
//	}
//}
#include<stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	int end_1 = m - 1;//nums1的有效数字的末尾位置
	int end_2 = n - 1;//nums2的末尾位置
	int end_all = m + n - 1;//总大小的最后一个位置
	while (end_1>=0 && end_2>=0)
	{
		if (nums1[end_1]<nums2[end_2])
		{
			nums1[end_all] = nums2[end_2];
			end_all--;
			end_2--;
		}
		else
		{
			nums1[end_all] = nums1[end_1];
			end_all--;
			end_1--;
		}
	}
}

int main()
{
	int nums1[] = { 1, 2, 3, 0, 0, 0 };
	int nums2[] = { 2, 5, 6 };
	int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
	int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
	int m = 3, n = 3;
	merge(nums1, nums1Size,m, nums2, nums2Size,n);
	for (int i = 0; i < (m + n); i++)
	{
		printf("%d ", nums1[i]);
	}
	printf("\n");
	return 0;
}
