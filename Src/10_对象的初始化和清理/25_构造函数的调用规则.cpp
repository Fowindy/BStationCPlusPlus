﻿#include <iostream>
#include <string>
using namespace std;
//构造函数的调用规则
//1.创建一个类, C++编译器会给每个类都添加至少3个函数
//默认构造(空实现)
//析构函数(空实现)
//拷贝构造(值拷贝)

//
class Person5
{
public:
	//Person5()
	//{
	//	cout<<"Person5的默认构造函数的调用"<<endl;
	//}
	//Person5(int age)
	//{
	//	cout << "Person5的有参构造函数的调用" << endl;
	//	m_Age = age;
	//}
	Person5(const Person5& p)
	{
		cout << "Person5的拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
	}
	~Person5()
	{
		cout<<"Person5的析构函数的调用"<<endl;
	}
	int m_Age;
};
//void test06()
//{
//	Person5 p;
//	p.m_Age = 18;
//	//2.如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
//	Person5 p2(p);
//	cout<<"p2的年龄为："<<p2.m_Age<<endl;
//}
void test07()
{
	//3.如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
	//Person5 p1; //此时如果用户自己没有提供默认构造，会出错
	//Person5 p2(10); //用户提供的有参
	//Person5 p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供

	//4.如果用户提供拷贝构造，编译器不会提供其他构造函数
	//Person5 p4; //此时如果用户自己没有提供默认构造，会出错
	//Person5 p5(10); //此时如果用户自己没有提供有参，会出错
	//Person5 p6(p5); //用户自己提供拷贝构造,会出错
}
int main25()
{
	test07();
	system("pause");
	return 0;
}
