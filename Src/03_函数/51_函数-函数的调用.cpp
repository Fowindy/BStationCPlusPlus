#include <iostream>
#include <string>
using namespace std;
//定义加法函数
//函数定义的时候,num1和num2并没有真实数据
//只是一个形式上的参数,简称形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main51()
{
	//在main函数中调用add函数
	int a = 10;
	int b = 20;
	//函数调用语法:函数名称(参数)
	//a和b称为实际参数,简称实参
	//当调用的时候,实参的值会传递给形参
	int result = add(a, b);
	std::cout<<"result = "<<result<<std::endl;//30

	a = 100;
	b = 500;
	result = add(a, b);
	cout<<"result = "<<result<<endl;//600
	system("pause");
	return 0;
}
