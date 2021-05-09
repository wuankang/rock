#include "SeqList.h"

void test()
{
	SeqList* s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPrint(&s);
	SeqListDestroy(&s);
}

int main()
{
	test();
}