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
	//调用尾删删除数据
	arr2.Pop_Back();
	cout << "arr2尾删后:" << endl;
	cout << "------------------arr1打印----------------" << endl;
	PrintArray(arr1);
	cout << "------------------arr2打印----------------" << endl;
	PrintArray(arr2);
	cout << "arr2的容量为:" << arr2.GetCapacity() << endl;
	cout << "arr2的大小为:" << arr2.GetSize() << endl;
	cout << "------------------再往arr2尾插一个数据----------------" << endl;
	arr2.Push_Back(9);
	//打印arr2中的最后插入的数据
	cout << "arr2中最后插入的元素为:" << arr2[arr2.GetSize() - 1] << endl;
}
int main()
{
	test15();
	system("pause");
	return 0;
}
