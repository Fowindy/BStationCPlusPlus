#include <iostream>
#include <string>
using namespace std;
//类模板对象做函数参数
//1. 指定传入的类型-- - 直接显示对象的数据类型
//2. 参数模板化-- - 将对象中的参数变为模板进行传递
//3. 整个类模板化-- - 将这个对象类型 模板化进行传递
template<typename NameType, typename AgeType>
class Person10
{
public:
	Person10(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowPerson()
	{
		cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
//************************************
// Method:    PrintPerson
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: Person10<string
// Parameter: int> & p
// Created:   2020/10/27 19:40
//************************************
//调类模板的对象做函数的参数
void PrintPerson(Person10<string, int>& p)
{
	p.ShowPerson();
}
//调类模板的对象做函数的参数并将参数模板化
template<typename T1, typename T2>
void PrintPerson1(Person10<T1, T2>& p)
{
	p.ShowPerson();
	cout << "T1的类型为:" << typeid(T1).name() << endl;//class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
	cout << "T2的类型为:" << typeid(T2).name() << endl;//double
}
void test10()
{
	Person10<string, int>p("孙悟空", 999);
	PrintPerson(p);//姓名:孙悟空;年龄:999
	Person10<string, double>p1("猪八戒", 999.999);//姓名:猪八戒;年龄:999.999
	PrintPerson1(p1);
}
int main()
{
	test10();
	system("pause");
	return 0;
}
