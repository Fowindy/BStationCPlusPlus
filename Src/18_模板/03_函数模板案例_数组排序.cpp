//************************************
// File:      03_函数模板案例_数组排序.cpp
// FullName:  03_函数模板案例_数组排序.cpp
// Author: 	  Fowindy
// Created:   2020/10/25
// history:   2020/10/25 8:38 by Fowindy
//************************************
#include <iostream>
#include <string>
using namespace std;
//实现通用 对数组进行排序的函数
//规则 从大到小
//算法	选择排序
//测试char数组、int数组

//升序降序枚举
enum SortType
{
	升序,
	降序,
};

//交换模板
//************************************
// Method:    MySwap
// FullName:  MySwap
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: T & a
// Parameter: T & b
// Created:   2020/10/25
// history:   2020/10/25 8:43 by Fowindy
//************************************
template<typename T>
void MySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法模板 选择排序
//************************************
// Method:    SortSelect
// FullName:  SortSelect
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: T arr[]
// Parameter: int length
// Created:   2020/10/25
// history:   2020/10/25 8:38 by Fowindy
//************************************
template<typename T>
void SortSelect(T arr[], int length, SortType sortType)
{
	for (int i = 0; i < length; i++)
	{
		//先默认最大项的下标为i
		int index = i;
		//然后用第i项跟后面其所有项进行比较
		for (int j = i + 1; j < length; j++)
		{
			switch (sortType)
			{
			case 升序:
			{
				//升序:如果当前项比后面项大,更新下标
				if (arr[index] > arr[j])
				{
					index = j;
				}
			}
			break;
			case 降序:
			{
				//降序:如果当前项比后面项小,更新下标
				if (arr[index] < arr[j])
				{
					index = j;
				}
			}
			break;
			default:
				break;
			}
		}
		//只要当前项的下标i和更新下标不等,说明需要交换
		if (i != index)
		{
			MySwap(arr[i], arr[index]);
		}
	}
}

//打印数组模板
//************************************
// Method:    PrintArray
// FullName:  PrintArray
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: T arr[]
// Parameter: int length
// Created:   2020/10/25
// history:   2020/10/25 8:50 by Fowindy
//************************************
template<typename T>
void PrintArray(T arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void test03()
{
	cout << "------------------测试char数组----------------" << endl;
	char arr[] = "cadbfge";
	int len = sizeof(arr) / sizeof(char);
	SortSelect(arr, len, 降序);
	PrintArray(arr, len);
	SortSelect(arr, len, 升序);
	PrintArray(arr, len);
	cout << "------------------测试int数组----------------" << endl;
	int intArr[] = { 1,5,6,3,8,4,7,2 };
	len = sizeof(intArr) / sizeof(int);
	SortSelect(intArr, len, 降序);
	PrintArray(intArr, len);
	SortSelect(intArr, len, 升序);
	PrintArray(intArr, len);
}
int main03()
{
	test03();
	system("pause");
	return 0;
}
