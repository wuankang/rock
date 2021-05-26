#define _CRT_SECURE_NO_WARNINGS 1

typedef  int NodeDataType;
typedef struct BTnode
{
	struct BTnode* left;
	struct BTnode* right;
	NodeDataType data;
}BTnode;

//孩子表示法
BTnode* CreateNode(NodeDataType array, int size);//创建节点

void Test();

