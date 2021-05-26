#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

//�����Ƿ�Ϊ��
int Empty(Q* q)
{
	assert(q);
	return NULL == q->head->next;
}

Qnode* BuyQnode(DataType x)
{
	Qnode* qq = (Qnode*)malloc(sizeof(Qnode));
	if (NULL == qq)
	{
		assert(0);
		return NULL;
	}
	qq->data = x;
	qq->next = NULL;
	return qq;
}

//��ʼ��
void QueueInint(Q* q)
{
	assert(q);
	q->head = q->tail = BuyQnode(0);//ͷ�ڵ�
}

//����
void QueuePush(Q* q, DataType data)
{
	assert(q);
	Qnode* cur = BuyQnode(data);
	q->tail->next = cur;
	q->tail = cur;
}

//����
void QueuePop(Q* q)
{
	assert(q);
	//�п�
	if (Empty(q))
	{
		return;
	}
	else
	{
		if (NULL == q->head->next->next)
		{
			q->tail = q->head;
			q->tail->next = NULL; 
		}
		else
		{
			Qnode* delnode = q->head->next->next;//�ڶ����ڵ�λ��
			q->head->next = delnode;
		}
	}
}

//�������
int QueueSize1(Q* q)
{
	assert(q);
	int count = 0;//����
	Qnode* cur = q->head->next;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

//��ȡ����ͷԪ��
DataType Queuehead(Q* q)
{
	assert(q);
	if (Empty(q))
	{
		return -1;
	}
	return q->head->next->data;
}

//��ȡ����βԪ��
DataType Queuetail(Q* q)
{
	if (Empty(q))
	{
		return -1;
	}
	return q->tail->data;
}


//���ٶ���
void QueueDestroy(Q* q)
{
	assert(q);
	Qnode* cur = q->head;
	while (cur)
	{
		q->head = cur->next;
		free(cur);
		cur = q->head;
	}
	q->head = q->tail = NULL;
}

//////////////////////////////////////
void Test()
{
	Q q;
	QueueInint(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);
	printf("size = %d\n", QueueSize1(&q));
	printf("head = %d\n", Queuehead(&q));
	printf("tail = %d\n", Queuetail(&q));
	printf("*****************************\n");
	QueuePop(&q);
	QueuePop(&q);
	printf("size = %d\n", QueueSize1(&q));
	printf("head = %d\n", Queuehead(&q));
	printf("tail = %d\n", Queuetail(&q));
	printf("*****************************\n");
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	printf("size = %d\n", QueueSize1(&q));
	printf("head = %d\n", Queuehead(&q));
	printf("tail = %d\n", Queuetail(&q));
	QueueDestroy(&q);
	



}