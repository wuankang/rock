#include "SeqList.h"

void test()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPrint(&s);
	//SeqListPushFront(&s, 4);
	//SeqListPushFront(&s, 5);
	//SeqListPushFront(&s, 6);
	//SeqListPrint(&s);
	int pos = SeqListFind(&s, 2);
	if (pos != -1)
	{
		printf("the position is %d\n", pos+1);
	}
	else
	{
		printf("not found!\n");
	}
	SeqListInsert(&s, pos, 5);
	SeqListPrint(&s);
	SeqListErase(&s, pos, 5);
	SeqListPrint(&s);
}


int main()
{
	test();
	return 0;
}