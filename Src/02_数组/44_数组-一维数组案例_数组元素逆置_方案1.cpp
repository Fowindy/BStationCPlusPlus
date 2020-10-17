#include <iostream>
#include <string>
using namespace std;
int main44()
{
	//定义一个数组
	int arr[] = { 1,2,3,4,5,6};
	//定义一个零时变量用于交换数据
	int temp = 0;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0])/2 ; i++)
	{
		temp = arr[i];
		arr[i] = arr[sizeof(arr) / sizeof(arr[0]) - 1 - i];
		arr[sizeof(arr) / sizeof(arr[0]) - 1 - i] = temp;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout<<arr[i]<<endl;
	}
	system("pause");
	return 0;
}
