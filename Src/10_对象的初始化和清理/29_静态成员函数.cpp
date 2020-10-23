#include <iostream>
#include <string>
using namespace std;
//静态成员函数
//1.所有的对象共享同一个函数
//2.静态成员函数只能访问静态成员变量
class Person9
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 200;//静态成员函数不可以访问非静态成员变量,无法区分到底是哪个对象的
		cout<<"static void func()的调用"<<endl;
	}
	//静态成员变量(静态成员变量必须在类内声明)
	static int m_A;
	//非静态成员变量
	int m_B;
	//静态成员函数也是有访问权限的
private:
	//静态成员函数
	static void func2()
	{
		cout << "static void func2()的调用" << endl;
	}
};
//静态成员变量必须在类外初始化
int Person9::m_A = 0;
//静态成员函数有两种访问方式
void test9()
{
	//1.通过对象访问调用
	Person9 p;
	p.func();
	//2.通过类名调用
	Person9::func();
	//Person9::func2();//类外访问不到私有的静态成员函数
}
int main()
{
	test9();
	system("pause");
	return 0;
}
