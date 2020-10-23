#include <iostream>
#include <string>
using namespace std;

// 拷贝构造函数调用时机

class Person4
{
public:
	Person4()
	{
		cout<<"Person4默认构造函数的调用"<<endl;
	}
	Person4(int age)
	{
		m_Age = age;
		cout<<"Person4有参构造函数的调用"<<endl;
	}
	Person4(const Person4& p)
	{
		m_Age = p.m_Age;
		cout << "Person4拷贝构造函数的调用" << endl;
	}
	~Person4()
	{
		cout<<"Person4析构函数的调用"<<endl;
	}
	int m_Age;
};
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test03()
{
	Person4 p1(20);
	Person4 p2(p1);
	cout<<"p2的年龄为:"<<p2.m_Age<<endl;
}
void doWork(Person4 p)
{

}
//2、值传递的方式给函数参数传值
void test04()
{
	Person4 p;
	doWork(p);
}
//3、值方式返回局部对象
Person4 doWork2()
{
	Person4 p1;
	cout<<(int*)&p1<<endl;
	return p1;
}
void test05()
{
	Person4 p = doWork2();
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
