#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"
#include<stdio.h>
#include<assert.h>
#include<malloc.h>

int Less(BTDataType left, BTDataType right)
{
	return left < right;
}

void Swap(BTDataType* parent, BTDataType* child)
{
	int temp = *parent;
	*parent = *child;
	*child = temp;
}
void AdjustDown(heap* hp, int size,int parent)
{
	int child = parent * 2 + 1;//˫�׽ڵ�����ӽڵ�
	while (child < size)
	{
		if ((child+1)<size && hp->PCOM(hp->array[child + 1] , hp->array[child]))
		{
			child++;
		}
		//�жϺ��ӽڵ���˫�׽ڵ�Ĵ�С
		if (hp->PCOM(hp->array[child] , hp->array[parent]))
		{
			Swap(&hp->array[parent], &hp->array[child]);
			parent = child;
			child = 2 * parent + 1;
		}
		//������Ҫ����
		else
		{
			return;
		}
	}
	
}
//��ʼ����
void HeapInit(heap* hp, BTDataType* array, int size,pCom PCOM)
{
	assert(hp);
	//���ٶѵ�����ռ�
	hp->array = (BTDataType*)malloc(sizeof(BTDataType)*size);
	if (NULL == hp->array)
	{
		assert(0);
		return;
	}
	//�������ֵ������
	for (int i = 0; i < size; i++)
	{
		hp->array[i] = array[i];
	}
	hp->size = size;
	hp->capacity = size;
	hp->PCOM = PCOM;
	//�ҵ�һ����Ҷ�ӽڵ�
	int Lastnotleaf = ((size - 1) - 1) / 2;

	//�ӷ��ӽڵ㿪ʼ���µ���
	for (int root = Lastnotleaf; root >= 0; root--)
	{
		AdjustDown(hp, size,root);
	}

}
void CheckCapacity(heap* hp)
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		BTDataType* temp = (BTDataType*)realloc(hp->array, sizeof(BTDataType)*(hp->capacity) * 2);
		if (NULL == temp)
		{
			return;
		}
		else
		{
			hp->array = temp;
		}
		hp->capacity *= 2;
	}
}
void AdjustUp(heap* hp)
{
	int child = hp->size - 1;
	int parent = (child - 1) / 2;
	while (child)
	{
		if (hp->PCOM(hp->array[child] , hp->array[parent]))
		{
			Swap(&hp->array[child], &hp->array[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			return;
		}

	}
}
//����
void HeapInsert(heap* hp, int data)
{
	assert(hp);
	CheckCapacity(hp);//���ռ��С
	hp->array[hp->size++]=data;
	AdjustUp(hp);//���ϵ���
}

//ɾ��
void HeapErase(heap* hp)
{
	//�ж��Ƿ�Ϊ��
	if (HeapEmpty(hp))
	{
		return;
	}
	//������β��λ��
	Swap(&hp->array[hp->size - 1], &hp->array[0]);
	//��ЧԪ�ؼ�һ
	hp->size--;
	//���µ������ݵ�һ���ڵ�
	AdjustDown(hp, hp->size,0);

}

//��ȡ�Ѷ�Ԫ��
BTDataType HeapTop(heap* hp)
{
	assert(hp);
	return hp->array[0];
}

//��ȡ��Ԫ������
int HeapSize(heap* hp)
{
	return hp->size;
}

//����
void HeapDistroy(heap* hp)
{
	assert(hp);
	free(hp->array);
	hp->capacity = 0;
	hp->size = 0;
}

//�ж϶��Ƿ�Ϊ��
int HeapEmpty(heap* hp)
{
	assert(hp);
	return 0 == hp->size;
}

void Adjust(heap* hp,int parent,int k)
{
	int child = parent * 2 + 1;
	while (child < k)
	{
		if ((child + 1 < k) && (hp->array[child + 1] < hp->array[child]))
		{
			child++;
		}

		if (hp->array[child] < hp->array[parent])
		{
			int temp = hp->array[child];
			hp->array[child] = hp->array[parent];
			hp->array[parent] = temp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			return;
		}
	}

}

//void HeapSort(heap* hp)
//{
//	/*С�ѣ�����ɾ��˼��ʵ�ֽ���--�ɴ�С
//	������βԪ��*/
//	/*for (int root = (hp->size - 2) / 2; root >= 0; root--)
//	{
//		Adjust(hp, root);
//	}*/
//	while (hp->size-1)
//	{
//		Swap(&hp->array[0], &hp->array[hp->size-1]);
//		hp->size--;
//		Adjust(hp,0);
//	}
//	
//}
void PrintTopK(heap* hp,int k)
{
	int size = hp->size;
	for (int i = size - 1; i > size - k + 1; i--)//i��9��ʼ��i>5,i--
	{
		Adjust(hp, 0, k);//�Ӵ˽ڵ㿪ʼ������С�ѵ���
		if (hp->array[i] > hp->array[0])
		{
			int temp = hp->array[i];
			hp->array[i] = hp->array[0];
			hp->array[0] = temp;
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", hp->array[i]);
	}
	printf("\n");
}


//��ӡ
void HeapPrint(heap* p,int size)
{
	assert(p);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", p->array[i]);
	}
	printf("\n");
}

/////////////////////////////////////////////
void TestTopk()
{
	heap hp;
	BTDataType array[] = { 6, 7, 8, 3, 5, 1, 10, 2, 0, 9 };
	int sz = sizeof(array) / sizeof(array[0]);
	HeapInit(&hp, array,sz,Less);
	int k = 6;
	PrintTopK(&hp, k);
	HeapDistroy(&hp);
}