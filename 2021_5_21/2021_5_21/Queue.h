//�������ݵ�����
typedef int DataType;

//����ڵ�����ݽṹ
typedef struct QueueNode
{
	DataType data;
	struct QueueNode* next;
}Qnode;

//������е����ݽṹ
typedef struct Queue
{
	Qnode* head;//����
	Qnode* tail;//��β
}Q;

//��ʼ��
void QueueInint(Q* q);

//����
void QueuePush(Q* q, DataType data);

//����
void QueuePop(Q* q);

//�������
void QueueSize(Q* q);

//��ȡ����ͷԪ��
DataType Queuehead(Q* q);

//��ȡ����βԪ��
DataType Queuetail(Q* q);

//�����Ƿ�Ϊ��
int Empty(Q* q);

//���ٶ���
void QueueDestroy(Q* q);

void Test();