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
//************************************
// Method:    myAdd02
// Access:    public 
// Returns:   T
// Author: 	  Fowindy
// Parameter: T a
// Parameter: T b
// Created:   2020/10/26 12:39
//************************************
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}
int main()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//1_1.普通函数显式调用
	cout << myAdd01(a, b) << endl;//30
	//1_2.普通函数隐式调用_隐式转换
	cout << myAdd01(a, c) << endl;//10 + 99 = 109---c(99)

	//1_3.自动类型推导_显式不会报错
	cout << myAdd02(a, b) << endl;//30
	//1_4.自动类型推导_隐式会报错
	//cout << myAdd02(a, c) << endl;
	system("pause");
	return 0;
}