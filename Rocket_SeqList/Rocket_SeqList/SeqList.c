#include "SeqList.h"

//初始化
void SeqListInit(SeqList* ps)
{
	ps->a = (SLDateType*)malloc(sizeof(SLDateType)*cap);
	ps->capacity = cap;
	ps->size = 0;
}

//释放
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->size = 0;
	ps->capacity = 0;
	ps->a = NULL;
}

//打印
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	if (ps->size > 0)
	{
		for (size_t i = 0; i < ps->size; i++)
		{
			printf("%d ", ps->a[i]);
		}
		printf("\n");
	}
	else
	{
		printf("无数据打印\n");
	}
}
//是否满足
int isFull(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		//扩张
		SLDateType* arr = realloc(ps->a, sizeof(SLDateType)*(ps->capacity + cap));
		if (arr != NULL)
		{
			ps -> a = arr;
		}
		ps->capacity += cap;
		return 1;
	}
	return 0;
}

//尾插
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	//判断空间是否满足
	if (isFull(ps))
	{
		printf("expand ok\n");
	}
	ps->a[ps->size] = x;
	ps->size++;
}

//头插
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	//判断空间是否满足
	if (isFull(ps))
	{
		printf("expand ok\n");
	}
	for (size_t i=ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[0] = x;
	ps->size++;
}

//头删
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

//尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; i++)
	{
		if (x == ps->a[i])
		{
			return i;
		}
	}
	return -1;
}

// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	//判断
	if (isFull(ps))
	{
		printf("expand ok\n");
	}
	for (size_t i = ps->size; i >=pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}

// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	for (size_t i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}