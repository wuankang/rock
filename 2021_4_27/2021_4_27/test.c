#define _CRT_SECURE_NO_WARNINGS 1
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


#include<stdio.h>
#include<math.h>

//int main()
//{
//	int number = 100000;
//	int count = 0;
//	int sum = 0;
//	while (number)
//	{
//		count = 0;
//		sum = 0;
//		//���λ��0~100000
//		int number_temp = number;
//		while (number_temp)
//		{
//			number_temp = number_temp / 10;
//			count++;//λ��
//		}
//		//�ֱ����λ����count�η�
//		int number_temp1 = number;
//		while (number_temp1)
//		{
//			int a=number_temp1 % 10;
//			sum = sum + pow(a,count);
//			number_temp1 = number_temp1 / 10;
//		}
//		if (sum == number)
//		{
//			printf("%d ", number);
//		}
//		number--;
//	}
//	printf("\n");
//	return 0;
//}

//��C��������Ļ���������ͼ����
//
//#include<stdio.h>
//
//int main()
//{
//	//��ӡ����7��,*����������13����1��3��5��7...13--*
//	//6 5 4 3 2 1���ո�
//	printf("������Ҫ��ӡ������:");
//	int row = 0;
//	scanf("%d", &row);
//	//�ϰ벿��
//	for (int i = 0; i < row; i++)
//	{
//		int count = 2 * i + 1;
//		int j = row-1-i;
//		while (j--)
//		{
//			printf(" ");
//		}
//		while (count)
//		{
//			printf("*");//��ӡ*
//			count--;
//		}
//		printf("\n");
//	}
//	//��ӡ����6��
//	//*--11 9 7 5 3 2 1 ---
//	//" "--1 2 3 4 5 6
//	for (int i = 0; i < row-1; i++)
//	{
//		//��ӡ�ո�
//		int k = i + 1;
//		while (k--)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		int j =2*(row-1-i)-1;
//		while (j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//
//#include<stdio.h>
//void my_drink(int money)
//{
//	if (money < 1)
//	{
//		return;
//	}
//	int sum = money;//��ʼ�ȵ���ˮƿ��
//	int empty=money;
//	while (empty > 1)
//	{
//		int rare = 0;
//		if ((empty % 2) == 1)
//		{
//			rare++;
//		}
//		int exchange = empty / 2;//��ƿ��������ˮƿˮ
//		sum += exchange;//���Ͻ�������ˮƿ��
//		empty = exchange+rare;
//	}
//	printf("%d\n", sum);
//	
//}
//int main()
//{
//	my_drink(20);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strlen
//#include<stdio.h>
//size_t my_strlen(char* arr)
//{
//	size_t count = 0;//����
//	while ((*arr) != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	size_t len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

////ģ��ʵ�ֿ⺯��strcpy
//#include<stdio.h>
//
//void my_strcpy(char* arr1, char* arr2)
//{
//	char* temp = arr1;
//	while (*arr2)
//	{
//		*temp = *arr2;
//		temp++;
//		arr2++;
//	}
//	*(temp++) = *arr2;
//}
//int main()
//{
//	char arr1[100];
//	char arr2[100] = "hello world";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//#include<stdio.h>
//void sort(int* arr)
//{
//	int* left = arr;
//	int* right = arr + 10 - 1;
//	while (left < right)
//	{
//		//�жϴ������ҵ�ֵ�Ƿ���ż��
//		if ((*left) % 2 == 0)
//		{
//			while (1)
//			{
//				//����������ͽ���
//				if ((*right) % 2 == 1)
//				{
//					int temp = *left;
//					*left = *right;
//					*right = temp;
//					left++;
//					right--;
//					break;
//				}
//				//�������յĵ�ַ��ǰ��
//				else
//				{
//					right--;
//				}
//			}
//		}
//		else
//		{
//			left++;
//		}
//	}
//}
//
//
//
//int main()
//{
//	//����һ������
//	int arr[10] = { 0 };
//	//�ֶ�����
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

