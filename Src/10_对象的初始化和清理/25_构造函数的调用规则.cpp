#include <iostream>
#include <string>
using namespace std;
//���캯���ĵ��ù���
//1.����һ����, C++���������ÿ���඼�������3������
//Ĭ�Ϲ���(��ʵ��)
//��������(��ʵ��)
//��������(ֵ����)

class Person5
{
public:
	Person5()
	{
		cout<<"Person5��Ĭ�Ϲ��캯���ĵ���"<<endl;
	}
	Person5(int age)
	{
		cout << "Person5���вι��캯���ĵ���" << endl;
		m_Age = age;
	}
	//Person5(const Person5& p)
	//{
	//	cout << "Person5�Ŀ������캯���ĵ���" << endl;
	//	m_Age = p.m_Age;
	//}
	~Person5()
	{
		cout<<"Person5�����������ĵ���"<<endl;
	}
	int m_Age;
};
void test06()
{
	Person5 p;
	p.m_Age = 18;
	//2.�����д�������죬���������Զ���ӿ������죬������ǳ��������
	Person5 p2(p);
	cout<<"p2������Ϊ��"<<p2.m_Age<<endl;
}
int main()
{
	test06();
	system("pause");
	return 0;
}
