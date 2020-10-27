#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间

template<typename T1, typename T2>
class Person13
{
public:
	Person13(T1 name, T2 age);
	void ShowPeron();
	T1 m_Name;
	T2 m_Age;
	~Person13();	//析构函数
};
template<typename T1, typename T2>
Person13<T1, T2>::Person13(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<typename T1, typename T2>
Person13<T1, T2>::~Person13()
{

}
template<typename T1, typename T2>
void Person13<T1, T2>::ShowPeron()
{
	cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
}