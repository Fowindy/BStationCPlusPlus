#include <iostream>
#include <string>
using namespace std;
//类模板和函数模板的区别
template<class NameType, class AgeType>
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
}
int main()
{
	system("pause");
	return 0;
}
