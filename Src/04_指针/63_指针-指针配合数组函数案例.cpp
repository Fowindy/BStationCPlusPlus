#include <iostream>
#include <string>
using namespace std;

//ð��������
void bubbleSort(int* arr,int length)
{
	for (int i = 0; i < length -1 ; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] >= arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//��ӡ���麯��
void printArray(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout<<"��������������еĵ�"<<i+1<<"��Ԫ��Ϊ:"<<arr[i]<<std::endl;
	}
}
int main()
{
	//��������:��װһ������,����ð������,ʵ�ֶ������������������
	//��������: int arr[10] = { 4, 3, 6, 9, 1, 2, 10, 8, 7, 5 };
	//1.�ȴ���һ������
	int arr[10] = { 4, 3, 6, 9, 1, 2, 10, 8, 7, 5 };
	//����ĳ���
	int length = sizeof(arr) / sizeof(arr[0]);
	//2.��������,ʵ��ð������
	bubbleSort(arr, length);
	//3.��ӡ����������
	printArray(arr, length);
	system("pause");
	return 0;
}
