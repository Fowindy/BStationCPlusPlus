#include <iostream>
#include <string>
using namespace std;
//调用规则如下：
//
//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
//2. 可以通过空模板参数列表来强制调用函数模板
//3. 函数模板也可以发生重载
//4. 如果函数模板可以产生更好的匹配, 优先调用函数模板
//************************************
// Method:    myPrint
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: int a
// Parameter: int b
// Created:   2020/10/26 12:48
//************************************
void myPrint(int a, int b)//如果函数模板和普通函数都可以实现,普通函数只有声明没有实现,则编译报错
{
	cout << "调用普通函数" << endl;
}
//************************************
// Method:    myPrint
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: T a
// Parameter: T b
// Created:   2020/10/26 12:55
//************************************
template<typename T>
void myPrint(T a, T b)
{
	cout << "调用函数模板" << endl;
}
void test05()
{
	int a = 10;
	int b = 20;
	//myPrint(a, b);//调用普通函数
	//通过空模板参数列表,强制调用函数模板
	myPrint<>(a, b);//调用函数模板
}
int main()
{
	test05();
	system("pause");
	return 0;
}
