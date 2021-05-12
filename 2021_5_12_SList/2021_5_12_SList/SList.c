#include "Slist.h"
void SListInit(Node** head)
{
	assert(head);
	*head = NULL;
}

Node* SListBuyNode(DataType x)
{
	Node* node = (Node*)malloc(sizeof(Node));
	if (NULL == node)
	{
		assert(0);
		return NULL;
	}
	node->next = NULL;
	node->data = x;
	return node;
}

void SListPushBack(Node** head,DataType x)
{
	assert(head);
	if (NULL == *head )//��
	{
		*head = SListBuyNode(x);
	}
	else//�ǿ�
	{
		Node* cur = *head;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = SListBuyNode(x);
	}
}

void SListPopBack(Node** head)
{
	assert(head);
	//����Ϊ�������ʱ��
	if (*head == NULL)
	{
		return;
	}
	//����ֻ��һ���ڵ�
	else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		Node* prev = NULL;
		Node* cur = *head;
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		prev->next = NULL;
	}
}
void SListPushFront(Node** head, DataType x)
{
	assert(head);
	//Ϊ�������ʱ��
	if (*head==NULL)
	{
		*head = SListBuyNode(x);
	}
	else
	{
		Node* cur = SListBuyNode(x);
		cur->next = *head;
		*head = cur;
	}
}

void SListPopFront(Node** head)
{
	assert(head);
	//������
	if (*head == NULL)
	{
		return;
	}
	else
	{
		Node* cur = (*head)->next;
		*head = cur;
	}
}


void SListPrint(Node* head)
{
	Node* cur = head;
	if (NULL == head)
	{
		return;
	}
	while (cur)
	{
		printf("%d-->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void Test01()
{
	Node* head;
	SListInit(&head);
	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPrint(head);
	SListPopBack(&head);
	SListPrint(head);
}

void Test02()
{
	Node* head;
	SListInit(&head);
	SListPushFront(&head,1);
	SListPushFront(&head, 2);
	SListPushFront(&head, 3);
	SListPrint(head);
	SListPopFront(&head);
	SListPrint(head);

}

void Test()
{
	/*Test01();*/
	Test02();
}