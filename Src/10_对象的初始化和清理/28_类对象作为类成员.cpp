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
		cout<<"Phone的构造函数调用"<<endl;
		m_PhoneBrand = phoneBrand;
	}
	~Phone()
	{
		cout<<"Phone的析构函数调用"<<endl;
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
		cout<<"Person8的构造函数调用"<<endl;
	}
	~Person8()
	{
		cout<<"Person8的析构函数调用"<<endl;
	}
public:
	//姓名
	string m_Name;
	//手机类成员
	Phone m_Phone;
};
void test8()
{
	Person8 p("张三", "Apple");
	cout << p.m_Name << "拿着:" << p.m_Phone.m_PhoneBrand << endl;
}
//1.当其他类对象作为本类成员,构造时候先构造类对象，在构造自身，析构的顺序与构造相反
int main28()
{
	test8();
	system("pause");
	return 0;
}
