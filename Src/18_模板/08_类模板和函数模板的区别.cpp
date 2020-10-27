#include <iostream>
#include <string>
using namespace std;
//类模板和函数模板的区别
template<class NameType = string, class AgeType = int>
class Person08
{
public:
	Person08(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name:" << this->m_Name << ";age:" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
void test08()
{
	//1.类模板没有自动类型推导的功能,只能用显式指定类型
	//Person08 p("孙悟空", 999);//错误:无法用自动类型推导
	Person08<string, int> p("孙悟空", 999);//正确:只能用显式指定类型
	//2.类模板在模板参数列表中可以有默认参数_1
	Person08<string>p1("猪八戒", 356);//name:猪八戒;age:356
	p1.showPerson();
	//类模板在模板参数列表中可以有默认参数_全部为默认参数,可以使用但是失去了模板的意义
	Person08<> p2("孙悟空", 999);//name:孙悟空;age:999
	p2.showPerson();
}
int main()
{
	test08();
	system("pause");
	return 0;
}
