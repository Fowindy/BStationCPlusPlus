#include <iostream>
#include <string>
using namespace std;
//使用的时候,包含分文件的头文件
#include "swap.h"
//函数的分文件编写
//实现两个数字进行交换的函数
#pragma region 函数的声明放到头文件swap.h中
				//函数的声明
//void swap1(int a, int b);
#pragma endregion

#pragma region 函数的定义放到swap.cpp
				//函数的定义
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//}
#pragma endregion

//函数的分文件编写
//1. 创建后缀名为.h的头文件
//2. 创建后缀名为.cpp的源文件
//3. 在头文件中写函数的声明
//4. 在源文件中写函数的定义

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);//a = 20;b = 10
	system("pause");
	return 0;
}
