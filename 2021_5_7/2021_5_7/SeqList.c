#include "SeqList.h"
//��ʼ��
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->array = (DateType*)malloc(sizeof(DateType) * cupsize);//��̬����
	ps->capacity = cupsize;
	ps->size = 0;
}

//����
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//��ӡ
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}

//����
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
	printf("����ɹ�\n");
}

void SeqListPushBack(SeqList* ps, DateType x)
{
	assert(ps);
	//�����Ƿ���λ�ò���
	if (ps->size >= ps->capacity)
	{
		ExpandList(ps);//����
	}
	ps->array[ps->size] = x;
	ps->size++;
}