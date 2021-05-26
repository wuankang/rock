//声明数据的类型
typedef int DataType;

//定义节点的数据结构
typedef struct QueueNode
{
	DataType data;
	struct QueueNode* next;
}Qnode;

//定义队列的数据结构
typedef struct Queue
{
	Qnode* head;//队首
	Qnode* tail;//队尾
}Q;

//初始化
void QueueInint(Q* q);

//入列
void QueuePush(Q* q, DataType data);

//出列
void QueuePop(Q* q);

//计算个数
void QueueSize(Q* q);

//获取队列头元素
DataType Queuehead(Q* q);

//获取队列尾元素
DataType Queuetail(Q* q);

//队列是否为空
int Empty(Q* q);

//销毁队列
void QueueDestroy(Q* q);

void Test();