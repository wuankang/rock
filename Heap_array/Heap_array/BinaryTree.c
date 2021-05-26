#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"
#include<stdio.h>
#include<assert.h>
#include<malloc.h>

BTnode* BuyBTnode(NodeDataType data)
{
	BTnode* node = (BTnode*)malloc(sizeof(BTnode));
	if (NULL == node)
	{
		assert(0);
		return NULL;
	}
	node->data = data;
	node->left = node->right = NULL;
}


BTnode* CreateNode(NodeDataType array[], int size)
{
	BTnode* node1 = BuyBTnode(array[0]);
	BTnode* node2=  BuyBTnode(array[1]);
	BTnode* node3 = BuyBTnode(array[2]);
	BTnode* node4 = BuyBTnode(array[3]);
	BTnode* node5 = BuyBTnode(array[4]);
	BTnode* node6 = BuyBTnode(array[5]);
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node3->left = node5;
	node3->right = node6;
	return node1;
}

///////////////////////////////////////
void Test()
{
	int array[] = { 1, 2, 4, 3, 5, 6 };
	BTnode* startnode = CreateNode(array, sizeof(array) / sizeof(array[0]));
	return;
}