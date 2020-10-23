#include <iostream>
#include <string>
using namespace std;
int main46()
{
	//利用冒泡排序实现升序序列
	int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	std::cout<<"排序前:"<<std::endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	//开始冒泡排序
	//总共排序轮数为:元素个数-1
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0])-1 ; i++)
	{
		//内存循环对比次数:元素个数-1-当前轮数
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
		{
			//如果第一个数字比第二个大,则交换顺序
			if (arr[j] >= arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	std::cout << "排序后:" << std::endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
