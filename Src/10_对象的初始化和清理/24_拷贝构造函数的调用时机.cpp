#include <iostream>
#include <string>
using namespace std;

// �������캯������ʱ��

class Person
{
public:
	Person()
	{
		cout<<"PersonĬ�Ϲ��캯���ĵ���"<<endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout<<"Person�вι��캯���ĵ���"<<endl;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person�������캯���ĵ���" << endl;
	}
	~Person()
	{
		cout<<"Person���������ĵ���"<<endl;
	}
	int m_Age;
};
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test03()
{
	Person p1(20);
	Person p2(p1);
	cout<<"p2������Ϊ:"<<p2.m_Age<<endl;
}
void doWork(Person p)
{

}
//2��ֵ���ݵķ�ʽ������������ֵ
void test04()
{
	Person p;
	doWork(p);
}
//3��ֵ��ʽ���ؾֲ�����
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
