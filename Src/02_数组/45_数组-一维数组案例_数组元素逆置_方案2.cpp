#include <iostream>
#include <string>
using namespace std;
int main45()
{
	//实现数组元素逆置
	//1.创建数组
	int arr[] = { 1,2,3,4,5,6};
	std::cout<<"数组逆置前:"<<std::endl;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		std::cout<<arr[i]<<"\t";
	}
	cout<<endl;
	//2.实现逆置
	//2.1.记录起始下标位置
	int startIndex = 0;
	//2.2.记录结束下标位置
	int endIndex = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = 0;
	while (startIndex <= endIndex)
	{
		//2.3.起始下标与结束下标的元素互换
		temp = arr[startIndex];
		arr[startIndex] = arr[endIndex];
		arr[endIndex] = temp;
		//2.4.起始下标加,结束下标减
		startIndex++;
		endIndex--;
	}
	std::cout << "数组逆置后:" << std::endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		std::cout << arr[i] << "\t";
	}
	system("pause");
	return 0;
}
