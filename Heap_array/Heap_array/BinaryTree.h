#define _CRT_SECURE_NO_WARNINGS 1

typedef  int NodeDataType;
typedef struct BTnode
{
	struct BTnode* left;
	struct BTnode* right;
	NodeDataType data;
}BTnode;

//���ӱ�ʾ��
BTnode* CreateNode(NodeDataType array, int size);//�����ڵ�

void Test();

