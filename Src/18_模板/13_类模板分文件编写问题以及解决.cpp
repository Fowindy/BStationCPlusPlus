﻿#include <iostream>
#include <string>
using namespace std;
//#include "Person13.cpp"//解决方式1：直接包含.cpp源文件
#include "Person13.hpp"//解决方式2:将.h和.cpp中的内容写到一起,将后缀名改为.hpp文件(.hpp为类模板后缀)
//13_类模板分文件编写问题以及解决
//template<typename T1, typename T2>
//class Person13
//{
//public:
//	Person13(T1 name, T2 age);
//	void ShowPeron();
//	T1 m_Name;
//	T2 m_Age;
//};
//template<typename T1, typename T2>
//Person13<T1, T2>::Person13(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//template<typename T1, typename T2>
//void Person13<T1, T2>::ShowPeron()
//{
//	cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
//}
void test13()
{
	Person13<string, int>p("Jerry", 23);
	p.ShowPeron();
}
int main13()
{
	test13();// 姓名:Jerry; 年龄:23
	system("pause");
	return 0;
}
