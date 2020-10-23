#include <iostream>
#include <string>
using namespace std;
int main56()
{
	//1.定义一个指针
	//定义一个整型变量
	int a = 10;
	//指针定义的语法:	数据类型 * 指针变量名;
	int * p;
	//让指针变量p记录a的地址
	p = &a;
	std::cout<<"a的地址为:"<<&a<<std::endl;//010FFBA8
	std::cout<<"指针p为:"<<p<<std::endl;//010FFBA8
	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存中的数据
	//指针前加 * 代表解引用,找到指针指向的内存中的数据
	*p = 1000;
	std::cout<<"a = "<<a<<std::endl;//a = 1000
	std::cout<<"*p = "<<*p<<std::endl;//*p = 1000
	system("pause");
	return 0;
}
