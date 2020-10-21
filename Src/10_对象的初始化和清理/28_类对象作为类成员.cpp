#include <iostream>
#include <string>
using namespace std;
//类对象作为类成员
//手机类
class Phone
{
public:
	Phone(string phoneBrand)
	{
		m_PhoneBrand = phoneBrand;
	}
public:
	//手机品牌名称
	string m_PhoneBrand;
};
//人类
class Person8
{
public:
	//Phone m_Phone = phoneBrand;//隐式转换法
	Person8(string name,string phoneBrand):m_Name(name),m_Phone(phoneBrand)
	{
	}
public:
	//姓名
	string m_Name;
	//手机类成员
	Phone m_Phone;
};
int main()
{
	Person8 p("张三", "Apple");
	cout<<p.m_Name<<"拿着:"<<p.m_Phone.m_PhoneBrand<<endl;
	system("pause");
	return 0;
}
