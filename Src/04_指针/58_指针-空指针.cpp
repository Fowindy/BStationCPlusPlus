#include <iostream>
#include <string>
using namespace std;
int main58()
{
	//空指针
	//1.空指针是指针变量指向内存中地址编号为0的空间;
	int* p = NULL;
	std::cout<<"p = "<<p<<std::endl;//00000000
	//2.空指针指向的内存是不可以访问的;(编译不会出错,运行报错)
	//内存地址编号0~255为系统占用的内存,不允许用户访问
	//p 是nullptr.
	//*p = 1000;//*p不可以访问,更不可以赋值
	system("pause");
	return 0;
}
