#include <iostream>
#include <string>
using namespace std;
//左移运算符重载
class Person8
{
	//4.利用友元访问私有成员变量
	friend ostream& operator<<(ostream& out, Person8& p);
	//利用成员函数重载 左移运算符 p.operator<<(cout) 简化版本 p<<cout
	//2.不会利用成员函数重载<<运算符,因为无法实现cout在左侧
	//void operator<<(Person8& p)
	//{
	//}
private:
	int m_A;
	int m_B;
};
//3.只能利用全局函数重载左移运算符
ostream& operator<<(ostream& out,Person8& p)
{
	p.m_A = 10;
	p.m_B = 10;
	//此处cout为别名可以更改为out其他所有的别名都可以
	out<<"m_A = "<< p.m_A << ",m_B = "<<p.m_B<<endl;
	return out;
}
void test8()
{
	Person8 p;
	cout<<p<<"hello world."<<endl;
	//m_A = 10,m_B = 10
	//hello world.
}
int main()
{
	test8();
	system("pause");
	return 0;
}
