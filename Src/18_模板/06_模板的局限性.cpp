#include <iostream>
#include <string>
using namespace std;
//模板的局限性
//模板的通用性并不是万能的,有些特定数据类型,需要用具体化方式做特殊实现

class Person06
{
public:
	Person06(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//姓名
	string m_Name;
	//年龄
	int m_Age;
};

//对比两个数据是否相等
//************************************
// Method:    IsEqual
// Access:    public 
// Returns:   bool
// Author: 	  Fowindy
// Parameter: T a
// Parameter: T b
// Created:   2020/10/27 1:03
//************************************
template<typename T>
bool IsEqual(T &a, T &b)
{
	return a == b ? true : false;
}
//利用具体化Person的版本实现代码,具体化优先调用(重载)
//************************************
// Method:    IsEqual
// Access:    public 
// Returns:   bool
// Author: 	  Fowindy
// Parameter: Person06 & a
// Parameter: Person06 & b
// Created:   2020/10/27 9:40
//************************************
template<> bool IsEqual(Person06 &a, Person06 &b)
{
	if (a.m_Name == b.m_Name && a.m_Age == b.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test06()
{
	int a = 10;
	int b = 20;
	if (IsEqual(a, b))
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}
void test006()
{
	Person06 p1("Tom", 10);
	Person06 p2("Tom", 10);
	if (IsEqual(p1, p2))//因为p1和p2属于自定义Person类型,模板的局限性
	{
		cout << "对象p1 == 对象p2" << endl;
	}
	else
	{
		cout << "对象p1 != 对象p2" << endl;
	}
}
int main()
{
	test06();
	test006();
	system("pause");
	return 0;
}
