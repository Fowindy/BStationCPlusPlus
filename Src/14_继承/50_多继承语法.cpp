#include <iostream>
#include <string>
using namespace std;
//多继承语法
class Base501
{
public:
	Base501()
	{
		m_A = 100;
		m_E = 1000;
	}
	int m_A;
	int m_E;
};
class Base502
{
public:
	Base502()
	{
		m_B = 200;
		m_E = 2000;
	}
	int m_B;
	int m_E;
};
//子类既要继承父类Base501也要继承父类Base502
//多继承语法:class 子类:继承关系 父类1,继承关系 父类2{}
class Son501 :public Base501, public Base502
{
public:
	Son501()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test50()
{
	Son501 s;
	cout << "------------------1.查看子类多继承后占用内存空间----------------" << endl;
	cout << "sizeof(Son) = " << sizeof(s) << endl;//24
	cout << "------------------2.子类调用两父类重名成员属性----------------" << endl;
	cout << "子类调父类Base501中的m_E = " << s.Base501::m_E << endl;//1000
	cout << "子类调父类Base502中的m_E = " << s.Base502::m_E << endl;//2000
}
int main()
{
	test50();
	system("pause");
	return 0;
}
