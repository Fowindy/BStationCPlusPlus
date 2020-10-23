#include <iostream>
#include <string>
using namespace std;
//继承同名成员处理方式
class Base48
{
public:
	Base48()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base 中的 func" << endl;
	}
	void func(int a)
	{
		cout << "Base 中的 func(int a)" << endl;
	}
	int m_A;
};
class Son481 :public Base48
{
public:
	Son481()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son 中的 func" << endl;
	}
	int m_A;
};
//同名成员属性处理
void test48()
{
	Son481 s1;
	cout << "Son 下 m_A = " << s1.m_A << endl;//200
	//1.如果通过子类对象访问到父类对象中同名成员,需要加作用域
	cout << "Base 下 m_A = " << s1.Base48::m_A << endl;//100
}
//同名成员函数处理
void test481()
{
	Son481 s2;
	s2.func();//2.直接调用,如果子类没有,就调父类;子类父类都有就调子类
	//3.如果通过子类对象访问到父类对象中同名成员函数,需要加作用域
	s2.Base48::func();
	// 如果子类中出现和父类同名的成员函数, 子类的同名成员会隐藏掉父类中所有同名成员函数
	//s2.func(100);//错误
	//4.如果想访问到父类中被隐藏的同名成员函数,需要加作用域
	s2.Base48::func(100);
}
int main()
{
	cout << "------------------同名成员属性处理----------------" << endl;
	test48();
	cout << "------------------同名成员函数处理----------------" << endl;
	test481();
	system("pause");
	return 0;
}
