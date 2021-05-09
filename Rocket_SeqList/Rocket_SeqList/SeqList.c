#include "SeqList.h"

//��ʼ��
void SeqListInit(SeqList* ps)
{
	ps->a = (SLDateType*)malloc(sizeof(SLDateType)*cap);
	ps->capacity = cap;
	ps->size = 0;
}

//�ͷ�
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->size = 0;
	ps->capacity = 0;
	ps->a = NULL;
}

//��ӡ
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
		printf("�����ݴ�ӡ\n");
	}
}
//�Ƿ�����
int isFull(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		//����
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

//β��
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	//�жϿռ��Ƿ�����
	if (isFull(ps))
	{
		printf("expand ok\n");
	}
	ps->a[ps->size] = x;
	ps->size++;
}

//ͷ��
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	//�жϿռ��Ƿ�����
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

//ͷɾ
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

//βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}

// ˳������
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

// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	//�ж�
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

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	for (size_t i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}