#include "SeqList.h"
//初始化
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->array = (DateType*)malloc(sizeof(DateType) * cupsize);//动态扩张
	ps->capacity = cupsize;
	ps->size = 0;
}

//销毁
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//打印
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}

//扩大
void ExpandList(SeqList* ps)
{
	assert(ps);
	int capacity = 2 * (ps->capacity);
	DateType* arry1 = (DateType*)realloc(ps->array, sizeof(DateType)*capacity);
	if (NULL == arry1)
	{
		return;
	}
	else
	{
		ps->array = arry1;
	}
	ps->capacity = capacity;
	printf("扩大成功\n");
}

void SeqListPushBack(SeqList* ps, DateType x)
{
	assert(ps);
	//检验是否有位置插入
	if (ps->size >= ps->capacity)
	{
		ExpandList(ps);//扩大
	}
	ps->array[ps->size] = x;
	ps->size++;
}