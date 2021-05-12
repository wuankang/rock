#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int removeDuplicates(int* nums, int numsSize){
//	int* cur = nums;
//	int* next = nums + 1;
//	int* end = nums + numsSize - 1;
//	if (numsSize < 0)
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
//	while (next < end)
//	{
//		if (*cur == *next)
//		{
//			next++;
//		}
//		else
//		{
//			cur++;
//			*cur = *next;
//		}
//	}
//	if (*cur != *next)
//	{
//		cur++;
//		*cur = *next;
//	}
//	return cur - nums + 1;
//}
//
//int main()
//{
//	int nums[] = {1};
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int len = removeDuplicates(nums, numsSize);
//	if (len != -1)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			printf("%d ", nums[i]);
//		}
//	}
//	printf("\n%d\n", len);
//	return 0;
//}
#include<malloc.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val){
	if (head == NULL)
	{
		return NULL;
	}
	//定义当前的位置
	struct ListNode* cur = head;
	//定义当前位置的下一个位置
	struct ListNode* next = cur->next;
	//1.值在头 2.值在中间
	while (next != NULL)
	{
		if (val == cur->val)//第一种情况
		{
			free(head);
			cur = next;
			head = cur;
		}
		else if (val == next->val)//第二种情况
		{
			next = next->next;
			cur->next = next;
		}
		else
		{
			cur = next;
			next = next->next;
		}
	}
	return head;
}

int main()
{
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode*));
	struct ListNode* cur = head;
	struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode*));
	struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode*));
	struct ListNode* head3 = (struct ListNode*)malloc(sizeof(struct ListNode*));
	int val = 7;
	head->next = head1;
	head->val = 7;
	head1->next = head2;
	head1->val = 7;
	head2->next = head3;
	head2->val = 7;
	head3->next = NULL;
	struct ListNode* receive = removeElements(head, val);
	while (cur != NULL)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");

	return 0;
}