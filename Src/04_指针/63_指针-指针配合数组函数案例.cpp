#include <iostream>
#include <string>
using namespace std;

//冒泡排序函数
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
//打印数组函数
void printArray(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout<<"升序排序后数组中的第"<<i+1<<"个元素为:"<<arr[i]<<std::endl;
	}
}
int main()
{
	//案例描述:封装一个函数,利用冒泡排序,实现对整型数组的升序排序
	//例如数组: int arr[10] = { 4, 3, 6, 9, 1, 2, 10, 8, 7, 5 };
	//1.先创建一个数组
	int arr[10] = { 4, 3, 6, 9, 1, 2, 10, 8, 7, 5 };
	//数组的长度
	int length = sizeof(arr) / sizeof(arr[0]);
	//2.创建函数,实现冒泡排序
	bubbleSort(arr, length);
	//3.打印排序后的数组
	printArray(arr, length);
	system("pause");
	return 0;
}
