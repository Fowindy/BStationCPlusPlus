#include <iostream>
#include <string>
using namespace std;
int main41()
{
	//数组
	//1, 数据类型 数组名[数组长度];
	//数组元素的下标是从0开始的
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//访问数组元素
	std::cout<<arr[3]<<std::endl;//40
	//2, 数据类型 数组名[数组长度]= (值1,值2 ..);
	//如果在初始化数据的时候,没有完全填写完,会用0补充完整
	int arr2[5] = { 10,20,30,40,50 };
	//利用循环,输出数组中的元素
	for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
	{
		cout<<arr2[i]<<endl;
	}
	//3, 数据类型 数组名[] = (值1, 值2 ...);
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
	//利用循环,输出数组中的元素
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}
