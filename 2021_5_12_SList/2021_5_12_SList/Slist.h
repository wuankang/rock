#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct SListNode{
	DataType data; //节点的数据
	struct SListNode* next;//节点的指向的下一个位置
}Node;

//初始化
void SListInit(Node** head);

//尾插
void SListPushBack(Node** head,DataType x);//空链表的话，尾插会导致head节点移动，所以传二级指针

//尾删
void SListPopBack(Node** head);//一个节点的时候，head变成NULL

//头插
void SListPushFront(Node** head, DataType x);

//头删
void SListPopFront(Node** head);

//打印
void SListPrint(Node* head);

//测试
void Test();