#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct SListNode{
	DataType data; //�ڵ������
	struct SListNode* next;//�ڵ��ָ�����һ��λ��
}Node;

//��ʼ��
void SListInit(Node** head);

//β��
void SListPushBack(Node** head,DataType x);//������Ļ���β��ᵼ��head�ڵ��ƶ������Դ�����ָ��

//βɾ
void SListPopBack(Node** head);//һ���ڵ��ʱ��head���NULL

//ͷ��
void SListPushFront(Node** head, DataType x);

//ͷɾ
void SListPopFront(Node** head);

//��ӡ
void SListPrint(Node* head);

//����
void Test();