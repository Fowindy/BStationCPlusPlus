#include <iostream>
using namespace std;
int main15()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	std::cout << a1 << " + " << b1 << " = " << a1 + b1 << std::endl;
	std::cout << a1 << " - " << b1 << " = " << a1 - b1 << std::endl;
	std::cout << a1 << " * " << b1 << " = " << a1 * b1 << std::endl;
	//两个整数相除,结果依然是整数,将小数部分去除
	std::cout << a1 << " / " << b1 << " = " << a1 / b1 << std::endl;
	int a2 = 10;
	int b2 = 20;
	std::cout << a2 << " / " << b2 << " = " << a2 / b2 << std::endl;
	//错误!两个数相除,除数不能为0
	int a3 = 10;
	int b3 = 0;
	//std::cout << a3 << " / " << b3 << " = " << a3 / b3 << std::endl;

	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2;//运算结果也可以是小数
	system("pause");
	return 0;
}
