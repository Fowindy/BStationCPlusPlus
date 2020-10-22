#include <iostream>
#include <string>
using namespace std;
//左移运算符重载
class Person8
{
	//利用成员函数重载 左移运算符 p.operator<<(cout) 简化版本 p<<cout
	//不会利用成员函数重载<<运算符,因为无法实现cout在左侧
	//void operator<<(Person8& p)
	//{
	//}
public:
	int m_A;
	int m_B;
};
void test8()
{
	Person8 p;
	p.m_A = 10;
	p.m_B = 10;
	cout<<p.m_A<<endl;//10
}
int main()
{
	test8();
	system("pause");
	return 0;
}
