#include <iostream>
#include <string>
using namespace std;
//49_继承同名静态成员处理方式.cpp
class Base49
{
public:
	static int m_A;//静态成员属性:类内声明,类外初始化
	static void func()
	{
		cout << "Base 下 func()的调用" << endl;
	}
};
class Son491 :public Base49
{
public:
	static int m_A;//静态成员属性:类内声明,类外初始化
	static void func()
	{
		cout << "Son 下 func()的调用" << endl;
	}
};
//类外初始化
int Base49::m_A = 100;
int Son491::m_A = 200;
//1.同名静态成员属性
void test49()
{
	//1.1.通过类对象访问
	cout << "------------------通过类对象访问----------------" << endl;
	Son491 s;
	cout << "Son 下 m_A = " << s.m_A << endl;//200
	cout << "Base 下 m_A = " << s.Base49::m_A << endl;//100
	//1.2.通过类名访问
	cout << "------------------通过类名访问----------------" << endl;
	cout << "Son 下 m_A = " << Son491::m_A << endl;//200
	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
	cout << "Base 下 m_A = " << Son491::Base49::m_A << endl;//100
}
//2.同名静态成员函数
void test491()
{
	Son491 s2;
	//2.1.通过类对象访问
	cout << "------------------通过类对象访问----------------" << endl;
	s2.func();
	s2.Base49::func();
}
int main()
{
	test49();
	cout << "------------------同名静态成员函数----------------" << endl;
	test491();
	system("pause");
	return 0;
}
