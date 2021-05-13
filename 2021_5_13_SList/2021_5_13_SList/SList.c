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
//β��
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	//�������ʱ��
	if (NULL == *pplist)
	{
		*pplist = BuySListNode(x);
	}
	//���ǿ������ʱ��
	else
	{
		//�ҵ����һ���ڵ�
		SListNode* cur = *pplist;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = BuySListNode(x);
	}
}

// �������ӡ
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

// �������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	//������
	if (NULL == *pplist)
	{
		return;
	}
	//Ϊһ���ڵ��ʱ��
	else if (NULL == (*pplist)->next)
	{
		free(*pplist);
		*pplist = NULL;
	}
	//Ϊ����ڵ��ʱ��
	else
	{
		//�ҵ����һ���ڵ㣬�ͷ�
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

// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	//������
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

// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	//������
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

// ���������
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

// �����������
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