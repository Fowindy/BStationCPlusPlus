#include <iostream>
#include <string>
using namespace std;

// �������캯������ʱ��

class Person4
{
public:
	Person4()
	{
		cout<<"Person4Ĭ�Ϲ��캯���ĵ���"<<endl;
	}
	Person4(int age)
	{
		m_Age = age;
		cout<<"Person4�вι��캯���ĵ���"<<endl;
	}
	Person4(const Person4& p)
	{
		m_Age = p.m_Age;
		cout << "Person4�������캯���ĵ���" << endl;
	}
	~Person4()
	{
		cout<<"Person4���������ĵ���"<<endl;
	}
	int m_Age;
};
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test03()
{
	Person4 p1(20);
	Person4 p2(p1);
	cout<<"p2������Ϊ:"<<p2.m_Age<<endl;
}
void doWork(Person4 p)
{

}
//2��ֵ���ݵķ�ʽ������������ֵ
void test04()
{
	Person4 p;
	doWork(p);
}
//3��ֵ��ʽ���ؾֲ�����
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
