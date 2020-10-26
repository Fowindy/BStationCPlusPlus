#include <iostream>
#include <string>
using namespace std;
//普通函数与函数模板区别
// 1、普通函数调用可以发生隐式类型转换
// 2、函数模板用自动类型推导, 不可以发生隐式类型转换
// 3、函数模板用显示指定类型, 可以发生隐式类型转换
//************************************
// Method:    MmyAdd01
// Access:    public 
// Returns:   int
// Author: 	  Fowindy
// Parameter: int a
// Parameter: int b
// Created:   2020/10/26 11:38
//************************************
int myAdd01(int a, int b)
{
	return a + b;
}
int main()
{
	int a = 10;
	int b = 20;
	//1_1.普通函数显示调用
	cout << myAdd01(a, b) << endl;
	system("pause");
	return 0;
}