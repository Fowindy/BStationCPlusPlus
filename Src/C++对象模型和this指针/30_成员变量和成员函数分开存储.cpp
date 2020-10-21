#include <iostream>
#include <string>
using namespace std;
//成员变量和成员函数是分开存储的
class Person0
{

};
void test0()
{
	Person0 p;
	//空对象占的内存空间为:1
	//C++的编译器会给每个空对象也分配一个字节的空间,是为了区分空对象占内存的位置
	//每一个空对象页应该有一个独一无二的内存地址
	cout<<"size of p = "<<sizeof(p)<<endl;//1
}
int main()
{
	test0();
	system("pause");
	return 0;
}
