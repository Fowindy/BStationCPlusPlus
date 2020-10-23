#include <iostream>
#include <string>
using namespace std;
//成员变量和成员函数是分开存储的
class Person0
{
	int m_A;//非静态的成员变量 属于类对象上
	static int m_B;//静态成员变量 不属于类的对象上
	void func()//非静态成员函数 不属于类的对象上
	{

	}
	static void func2()//静态成员函数 不属于类的对象上
	{

	}
};
//静态成员变量必须初始化
int Person0::m_B = 0;
void test0()
{
	Person0 p;
	//空对象占的内存空间为:1
	//C++的编译器会给每个空对象也分配一个字节的空间,是为了区分空对象占内存的位置
	//每一个空对象页应该有一个独一无二的内存地址
	cout<<"size of p = "<<sizeof(p)<<endl;//1
}
void test01()
{
	Person0 p;
	cout << "size of p = " << sizeof(p) << endl;//4
}
int main30()
{
	test0();
	test01();
	system("pause");
	return 0;
}
