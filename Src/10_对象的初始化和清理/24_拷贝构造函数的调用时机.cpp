#include <iostream>
#include <string>
using namespace std;

// 拷贝构造函数调用时机

class Person
{
public:
	Person()
	{
		cout<<"Person默认构造函数的调用"<<endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout<<"Person有参构造函数的调用"<<endl;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person拷贝构造函数的调用" << endl;
	}
	~Person()
	{
		cout<<"Person析构函数的调用"<<endl;
	}
	int m_Age;
};
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test03()
{
	Person p1(20);
	Person p2(p1);
	cout<<"p2的年龄为:"<<p2.m_Age<<endl;
}
void doWork(Person p)
{

}
//2、值传递的方式给函数参数传值
void test04()
{
	Person p;
	doWork(p);
}
//3、值方式返回局部对象
Person doWork2()
{
	Person p1;
	cout<<(int*)&p1<<endl;
	return p1;
}
void test05()
{
	Person p = doWork2();
	cout << (int*)&p << endl;
}
int main24()
{
	test03();
	test04();
	test05();
	system("pause");
	return 0;
}
