#include "SList.h"

void test()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
}

void test1()
{
	SListNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPrint(plist);
	SListNode* pos = SListFind(plist, 2);

	SListEraseAfter(pos);

	SListPrint(plist);
	SListDestory(plist);
	SListPrint(plist);

}


int main()
{
	test1();
	return 0;
}