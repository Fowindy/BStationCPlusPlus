#include <iostream>
#include <string>
using namespace std;
//构造函数的调用规则
//1.创建一个类, C++编译器会给每个类都添加至少3个函数
//默认构造(空实现)
//析构函数(空实现)
//拷贝构造(值拷贝)

class Person5
{
public:
	Person5()
	{
		cout<<"Person5的默认构造函数的调用"<<endl;
	}
	Person5(int age)
	{
		cout << "Person5的有参构造函数的调用" << endl;
		m_Age = age;
	}
	//Person5(const Person5& p)
	//{
	//	cout << "Person5的拷贝构造函数的调用" << endl;
	//	m_Age = p.m_Age;
	//}
	~Person5()
	{
		cout<<"Person5的析构函数的调用"<<endl;
	}
	int m_Age;
};
void test06()
{
	Person5 p;
	p.m_Age = 18;
	//2.如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
	Person5 p2(p);
	cout<<"p2的年龄为："<<p2.m_Age<<endl;
}
int main()
{
	test06();
	system("pause");
	return 0;
}
