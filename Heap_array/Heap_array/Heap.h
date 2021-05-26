typedef int BTDataType;

typedef int (*pCom)(BTDataType left, BTDataType right);




//�ѵĽṹ
typedef struct heap
{
	BTDataType* array;//�ѵ�����
	int capacity;//�ѵ�����
	int size;//�ѵ���Ч����
	pCom PCOM;//����ָ��
}heap;

int Less(BTDataType left, BTDataType right);

//��ʼ����
void HeapInit(heap* hp, BTDataType* array, int size,pCom PCOM);

//����
void HeapInsert(heap* hp, int data);

//ɾ��
void HeapErase(heap* hp);

//��ȡ�Ѷ�Ԫ��
BTDataType HeapTop(heap* hp);

//��ȡ��Ԫ������
int HeapSize(heap* hp);

//����
void HeapDistroy(heap* hp);

//�ж϶��Ƿ�Ϊ��
int HeapEmpty(heap* hp);

//����
void Adjust(heap* hp,int parent);
//����
void HeapSort(heap* hp);
//�Ƚ�
void PrintTopK(heap* hp, int k);

//��ӡ
void HeapPrint(heap* hp, int size);

void TestTopk();
