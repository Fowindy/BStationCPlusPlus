#include <iostream>
#include <string>
using namespace std;
//���캯���ĵ��ù���
//1.����һ����, C++���������ÿ���඼�������3������
//Ĭ�Ϲ���(��ʵ��)
//��������(��ʵ��)
//��������(ֵ����)

//
class Person5
{
public:
	//Person5()
	//{
	//	cout<<"Person5��Ĭ�Ϲ��캯���ĵ���"<<endl;
	//}
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
//void test06()
//{
//	Person5 p;
//	p.m_Age = 18;
//	//2.�����д�������죬���������Զ���ӿ������죬������ǳ��������
//	Person5 p2(p);
//	cout<<"p2������Ϊ��"<<p2.m_Age<<endl;
//}
void test07()
{
	//3.����û��ṩ�вι��죬�����������ṩĬ�Ϲ��죬���ṩ��������
	//Person5 p1; //��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
	Person5 p2(10); //�û��ṩ���в�
	Person5 p3(p2); //��ʱ����û�û���ṩ�������죬���������ṩ
}
int main()
{
	test07();
	system("pause");
	return 0;
}
