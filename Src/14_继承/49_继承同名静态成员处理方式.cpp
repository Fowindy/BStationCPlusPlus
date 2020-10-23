#include <iostream>
#include <string>
using namespace std;
//49_继承同名静态成员处理方式.cpp
class Base49
{
public:
	static int m_A;//静态成员属性:类内声明,类外初始化
};
class Son491 :public Base49
{
public:
	static int m_A;//静态成员属性:类内声明,类外初始化
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
}
int main()
{
	test49();
	system("pause");
	return 0;
}
