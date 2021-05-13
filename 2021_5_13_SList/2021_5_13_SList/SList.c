#include "SList.h"
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == node)
	{
		assert(0);
		return NULL;
	}
	else
	{
		node->data = x;
		node->next = NULL;
		return node;
	}
}
//尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	//空链表的时候
	if (NULL == *pplist)
	{
		*pplist = BuySListNode(x);
	}
	//不是空链表的时候
	else
	{
		//找到最后一个节点
		SListNode* cur = *pplist;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = BuySListNode(x);
	}
}

// 单链表打印
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d-->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	//空链表
	if (NULL == *pplist)
	{
		return;
	}
	//为一个节点的时候
	else if (NULL == (*pplist)->next)
	{
		free(*pplist);
		*pplist = NULL;
	}
	//为多个节点的时候
	else
	{
		//找到最后一个节点，释放
		SListNode* cur = *pplist;
		SListNode* prev = NULL;
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		cur = NULL;
		prev->next = NULL;
	}
}

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	//空链表
	if (NULL == *pplist)
	{
		*pplist = BuySListNode(x);
	}
	else
	{
		SListNode* cur = BuySListNode(x);
		cur->next = *pplist;
		*pplist = cur;
	}
}

// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	//空链表
	if (NULL == *pplist)
	{
		return;
	}
	else
	{
		SListNode* next = (*pplist)->next;
		free(*pplist);
		*pplist = NULL;
		*pplist = next;
	}
}

// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	if (NULL == cur)
	{
		return NULL;
	}
 }

void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* node = BuySListNode(x);
	node->next = pos->next;
	pos->next = node;
}

void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	SListNode* next = pos->next;
	pos->next = next->next;
	free(next);
}

// 单链表的销毁
void SListDestory(SListNode* plist)
{
	SListNode* cur = NULL;
	if (NULL == plist)
	{
		return;
	}
	cur = plist;
	while (cur)
	{
		free(plist);
		plist = NULL;
		cur = cur->next;
		plist = cur;
	}
}