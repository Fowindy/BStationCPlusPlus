#include <iostream>
#include <string>
using namespace std;
//交换整型函数
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//交换双精度函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
//模板语法:
//template<typename T>	//函数声明或定义
//利用模板提供通用的交换函数
template<typename T>	//模板函数声明
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//模板调用方法1:自动类型推导
	//mySwap(a, b);
	//模板调用方法2:显示指定类型
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
