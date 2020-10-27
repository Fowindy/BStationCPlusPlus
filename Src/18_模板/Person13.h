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