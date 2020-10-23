#include <iostream>
#include <string>
using namespace std;
int main17()
{
	//1、前置递增
	int a = 10;
	++a;//让变量进行加1操作
	std::cout << "a = " << a << std::endl;
	//2、后置递增
	int b = 10;
	b++;//让变量进行+1
	std::cout << "b = " << b << std::endl;
	//3、前置和后置的区别
	//前置递增 先让变量+1然后进行表达式运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	std::cout << "a2 = " << a2 << std::endl;//11
	std::cout << "b2 = " << b2 << std::endl;//110
	//后置递增 先进行表达式运算后让变量+1
	int a3 = 10;
	int b3 = a3++ * 10;
	std::cout << "a3 = " << a3 << std::endl;//11
	std::cout << "b3 = " << b3 << std::endl;//100
	system("pause");
	return 0;
}
