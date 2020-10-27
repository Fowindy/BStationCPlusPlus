#include <iostream>
#include <string>
using namespace std;
//类模板
template<typename nameType, typename ageType>
class Person07
{
public:
	Person07(nameType name, ageType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowPerson()
	{
		cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
	}
	nameType m_Name;
	ageType m_Age;
};
void test07()
{
	//类模板实例化:指定NameType 为string类型，AgeType 为 int类型
	Person07<string, int> p("孙悟空", 999);//姓名:孙悟空;年龄:999
	p.ShowPerson();
	//类模板实例化:指定NameType 为string类型，AgeType 为 double类型
	Person07<string, double> p1("齐天大圣", 999.999);//姓名:齐天大圣;年龄:999.999
	p1.ShowPerson();
}
int main07()
{
	test07();
	system("pause");
	return 0;
}
