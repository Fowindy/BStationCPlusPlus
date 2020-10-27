#include <iostream>
#include <string>
using namespace std;
//类模板成员函数类外实现
template<typename T1, typename T2>
class Person12
{
public:
	//构造函数和成员函数的类内实现
	Person12(T1 name, T2 age);//类内声明
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}
	void ShowPerson();//类内声明
	//{
	//	cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
	//}
	T1 m_Name;
	T2 m_Age;
};
//构造函数的类外实现
template<typename T1, typename T2>
Person12<T1, T2>::Person12(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
//类成员函数类外实现
template<typename T1, typename T2>
void Person12<T1, T2>::ShowPerson()
{
	cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
}
void test12()
{
	//构造函数和成员函数类外实现的调用
	Person12<string, int>p("Tom", 12);//姓名:Tom;年龄:12
	p.ShowPerson();
}
int main()
{
	test12();
	system("pause");
	return 0;
}
