#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

#define cupsize 2

typedef int DateType;

//定义顺序表结构体
typedef struct SeqList{
	DateType* array;//顺序表指向的空间指针
	size_t capacity;//顺序表容量
	size_t size;//个数
}SeqList;

//初始化顺序表
void SeqListInit(SeqList* ps);

//摧毁顺序表
void SeqListDestroy(SeqList* ps);

//打印顺序表
void SeqListPrint(SeqList* ps);

//尾插
void SeqListPushBack(SeqList* ps, DateType x);
