#include <iostream>
#include <string>
using namespace std;
#include "MyArray.hpp"

template<typename T>
void PrintArray(T t)
{
	for (int i = 0; i < t.GetSize(); i++)
	{
		cout << "第" << i + 1 << "个元素为:" << t[i] << endl;
	}
}
void test15()
{
	MyArray<int> arr1(5);//MyArray的有参构造
	//MyArray<int> arr2(arr1);//拷贝构造
	//MyArray<int> arr3(100);//MyArray的有参构造
	//arr3 = arr2 = arr1;//MyArray的重载操作符=
	//调用尾插循环插入数据
	for (int i = 0; i < arr1.GetCapacity(); i++)
	{
		arr1.Push_Back(i);
	}
	PrintArray(arr1);
	cout << "arr1的容量为:" << arr1.GetCapacity() << endl;
	cout << "arr1的大小为:" << arr1.GetSize() << endl;
	MyArray<int> arr2(arr1);
}
int main()
{
	test15();
	system("pause");
	return 0;
}
