#include <iostream>
#include <string>
using namespace std;
int main48()
{
	//二维数组名称用途
	//1.可以查看占用内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6},
	};
	std::cout<<"二维数组占用的内存空间为:"<<sizeof(arr)<<std::endl;//24
	std::cout<<"二维数组第一行占用的内存空间为:"<<sizeof(arr[0])<<std::endl;//12
	std::cout<<"二维数组第一个元素占用的内存空间为:"<<sizeof(arr[0][0])<<std::endl;//4
	std::cout<<"二维数组行数为:"<<sizeof(arr)/sizeof(arr[0])<<std::endl;//2
	std::cout<<"二维数组列数为:"<<sizeof(arr[0])/sizeof(arr[0][0])<<std::endl;//3
	std::cout<<"二维数组元素的个数为:"<<sizeof(arr)/sizeof(arr[0][0])<<std::endl;//6

	//2.可以查看二维数组的首地址
	std::cout<<"二维数组的首地址为:"<<(int)arr<<std::endl;//15727172
	std::cout << "二维数组第一个元素的首地址为:" << (int)&arr[0][0] << std::endl;//15727172
	std::cout << "二维数组第二个元素的首地址为:" << (int)&arr[0][1] << std::endl;//15727176
	std::cout<<"二维数组第一行的首地址为:"<<(int)arr[0]<<std::endl;//15727172
	std::cout<<"二维数组第二行的首地址为:"<<(int)arr[1]<<std::endl;//15727184

	system("pause");
	return 0;
}
