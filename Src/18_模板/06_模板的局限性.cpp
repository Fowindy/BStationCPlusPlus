#include <iostream>
#include <string>
using namespace std;
//模板的局限性
//模板的通用性并不是万能的,有些特定数据类型,需要用具体化方式做特殊实现

//对比两个数据是否相等
//************************************
// Method:    IsEqual
// Access:    public 
// Returns:   bool
// Author: 	  Fowindy
// Parameter: T a
// Parameter: T b
// Created:   2020/10/27 1:03
//************************************
template<typename T>
bool IsEqual(T a, T b)
{
	return a == b ? true : false;
}
void test06()
{
	int a = 10;
	int b = 20;
	if (IsEqual(a, b))
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}
int main()
{
	test06();
	system("pause");
	return 0;
}
