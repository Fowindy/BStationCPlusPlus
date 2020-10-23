//在函数的分文件cpp中引用自己定义的头文件(自定义的头文件用双引号,系统头文件用尖括号)
#include "swap.h"
//函数的定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}