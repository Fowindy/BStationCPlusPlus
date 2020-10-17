#include <iostream>
#include <string>
using namespace std;
int main()
{
	//函数的定义
	//语法:
	//返回值类型	函数名(参数列表)	{函数体语句 return表达式}
	system("pause");
	return 0;
}
//注意!!!:函数不能定义在函数内部(也就是不能在main函数中定义函数)
//加法函数,实现两个整数想加,并且将想加的结果进行返回
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
