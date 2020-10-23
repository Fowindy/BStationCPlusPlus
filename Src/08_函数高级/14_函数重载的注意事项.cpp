#include <iostream>
#include <string>
using namespace std;
//函数重载的注意事项
//1.引用作为重载的条件
void func(int& a)//第一个    //int& a = 10;不合法
{
	cout << "func(int& a)的调用" << endl;
}
void func(const int& a)//第二个	//const int& a = 10; 合法
{
	cout << "func(const int& a)的调用" << endl;
}
//2.函数重载碰到默认参数(重载避免写默认参数)
void fun2(int a,int b = 10)
{
	cout << "func(int a)的调用" << endl;
}
void fun2(int a)
{
	cout << "func(int a)的调用" << endl;
}
int main()
{
	int a = 10;
	func(a);//调用第一个,因为a是变量,可读可写
	func(10);//调用第二个,10为常量
	//fun2(a);//当函数重载碰到默认参数,出现二义性,报错,尽量避免这种情况
	system("pause");
	return 0;
}
