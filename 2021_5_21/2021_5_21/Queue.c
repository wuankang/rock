#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

//队列是否为空
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

//初始化
void QueueInint(Q* q)
{
	assert(q);
	q->head = q->tail = BuyQnode(0);//头节点
}

//入列
void QueuePush(Q* q, DataType data)
{
	assert(q);
	Qnode* cur = BuyQnode(data);
	q->tail->next = cur;
	q->tail = cur;
}

//出列
void QueuePop(Q* q)
{
	assert(q);
	//判空
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
			Qnode* delnode = q->head->next->next;//第二个节点位置
			q->head->next = delnode;
		}
	}
}

//计算个数
int QueueSize1(Q* q)
{
	assert(q);
	int count = 0;//计数
	Qnode* cur = q->head->next;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

//获取队列头元素
DataType Queuehead(Q* q)
{
	assert(q);
	if (Empty(q))
	{
		return -1;
	}
	return q->head->next->data;
}

//获取队列尾元素
DataType Queuetail(Q* q)
{
	if (Empty(q))
	{
		return -1;
	}
	return q->tail->data;
}


//销毁队列
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