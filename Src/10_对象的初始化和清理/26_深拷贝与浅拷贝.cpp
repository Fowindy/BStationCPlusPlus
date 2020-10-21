#include <iostream>
#include <string>
using namespace std;
//深拷贝与浅拷贝
class Person6
{
public:
	Person6()
	{
		cout<<"Person6的无参构造函数的调用"<<endl;
	}
	Person6(int age)
	{
		cout<<"Person6的有参构造函数的调用"<<endl;
		m_Age = age;
	}
	~Person6()
	{
		cout<<"Person6的析构函数的调用"<<endl;
	}
	int m_Age;
};
void test6()
{
	Person6 p1(18);
	cout<<"p1的年龄为:"<<p1.m_Age<<endl;//18
	//2.未定义拷贝构造函数,编译器会自动添加拷贝构造，并且做浅拷贝操作
	Person6 p2(p1);
	cout << "p2的年龄为:" << p2.m_Age << endl;//18
}
int main() 
{
	test6();
	system("pause");
	return 0;
}
