#include <iostream>
#include <string>
using namespace std;
//类模板中成员函数和普通类中成员函数创建时机是有区别的：
//
//1. 普通类中的成员函数一开始就可以创建
//2. 类模板中的成员函数在调用时才创建
class Person09_1
{
public:
	void showPerson1()
	{
		cout << "Person09_1的成员函数" << endl;
	}
};
class Person09_2
{
public:
	void showPerson2()
	{
		cout << "Person09_2的成员函数" << endl;
	}
};
template<typename T>
class MyClass
{
public:
	T obj;
	//类模板中的成员函数
	//能够编译通过,是因为下面两个成员函数只要没有调用,都不会创建的;因为不能确定obj为何种类型
	void fun1()
	{
		obj.showPerson1();
	}
	void fun2()
	{
		obj.showPerson2();
	}
};
void test09()
{
	MyClass<Person09_1>m;
	m.fun1();//Person09_1可以调用fun1
	//m.fun2();//Person09_1不可以调用fun2
}
int main09()
{
	test09();
	system("pause");
	return 0;
}
