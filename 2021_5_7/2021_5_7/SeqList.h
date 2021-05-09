#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

#define cupsize 2

typedef int DateType;

//����˳���ṹ��
typedef struct SeqList{
	DateType* array;//˳���ָ��Ŀռ�ָ��
	size_t capacity;//˳�������
	size_t size;//����
}SeqList;

//��ʼ��˳���
void SeqListInit(SeqList* ps);

//�ݻ�˳���
void SeqListDestroy(SeqList* ps);

//��ӡ˳���
void SeqListPrint(SeqList* ps);

//β��
void SeqListPushBack(SeqList* ps, DateType x);
