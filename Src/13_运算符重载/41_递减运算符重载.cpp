﻿#include <iostream>
#include <string>
using namespace std;
//赋值运算符重载
class Person
{
	friend void test01();
public:
	//构造函数传值进来
	Person(int age)
	{
		//然后将值存放在堆区,并用m_Age指针来维护(指向)
		m_Age = new int(age);
	}
private:
	int* m_Age;
	int* m_abc;
	int m_PassWord;
};
void test01()
{
	Person p1(18);
	cout << "p1的年龄为:" << *p1.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
