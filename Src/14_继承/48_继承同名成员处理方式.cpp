#include <iostream>
#include <string>
using namespace std;
//继承同名成员处理方式
class Base48
{
public:
	Base48()
	{
		m_A = 100;
	}
	int m_A;
};
class Son481 :public Base48
{
public:
	Son481()
	{
		m_A = 200;
	}
	int m_A;
};
void test48()
{
	Son481 s1;
	cout << "Son 下 m_A = " << s1.m_A << endl;//200
	//1.如果通过子类对象访问到父类对象中同名成员,需要加作用域
	cout << "Base 下 m_A = " << s1.Base48::m_A << endl;//100
}
int main()
{
	test48();
	system("pause");
	return 0;
}
