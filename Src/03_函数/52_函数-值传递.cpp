#include <iostream>
#include <string>
using namespace std;
//值传递
//定义函数,实现两个数字交换函数
//如果函数不需要返回值,声明的时候返回值类型为void
void swap2(int num1, int num2)
{
	std::cout << "交换前:num1 = " << num1 << ",num2 = " << num2 << std::endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	std::cout << "交换后:num1 = " << num1 << ",num2 = " << num2 << std::endl;
	//return; 返回值为void的时候,可以不写return
}
int main52()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//20
	//当我们做值传递的时候,函数的形参发生改变,并不会影响实参
	swap(a, b);
	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//20
	system("pause");
	return 0;
}
