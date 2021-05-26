typedef int BTDataType;

typedef int (*pCom)(BTDataType left, BTDataType right);




//堆的结构
typedef struct heap
{
	BTDataType* array;//堆的数组
	int capacity;//堆的容量
	int size;//堆的有效数量
	pCom PCOM;//函数指针
}heap;

int Less(BTDataType left, BTDataType right);

//初始化堆
void HeapInit(heap* hp, BTDataType* array, int size,pCom PCOM);

//插入
void HeapInsert(heap* hp, int data);

//删除
void HeapErase(heap* hp);

//获取堆顶元素
BTDataType HeapTop(heap* hp);

//获取堆元素数量
int HeapSize(heap* hp);

//销毁
void HeapDistroy(heap* hp);

//判断堆是否为空
int HeapEmpty(heap* hp);

//调整
void Adjust(heap* hp,int parent);
//排序
void HeapSort(heap* hp);
//比较
void PrintTopK(heap* hp, int k);

//打印
void HeapPrint(heap* hp, int size);

void TestTopk();
