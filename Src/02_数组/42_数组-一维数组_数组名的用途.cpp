#include <iostream>
#include <string>
using namespace std;
int main42()
{
	//数组名的用途
	//1, 可以统计整个数组在内存中的长度
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout<<"整个数组占用的内存空间为:"<<sizeof(arr)<<std::endl;//40
	cout<<"每个元素占用的内存空间为:"<<sizeof(arr[0])<<endl;//4
	cout<<"数组中元素的个数为:"<<sizeof(arr)/sizeof(arr[0])<<endl;//10
	//2, 可以获取数组在内存中的首地址
	std::cout<<"数组在内存中的首地址为:"<<(int)arr<<std::endl;//6290576
	cout << "数组中第一个元素的地址为:" << (int)&arr[0] << endl;//6290576
	cout << "数组中第二个元素的地址为:" << (int)&arr[1] << endl;//6290580
	//数组名是常量,不可以进行赋值操作
	//arr = 100;
	system("pause");
	return 0;
}
