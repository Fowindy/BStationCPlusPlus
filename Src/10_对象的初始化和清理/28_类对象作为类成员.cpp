#include <iostream>
#include <string>
using namespace std;
//�������Ϊ���Ա
//�ֻ���
class Phone
{
public:
	Phone(string phoneBrand)
	{
		cout<<"Phone�Ĺ��캯������"<<endl;
		m_PhoneBrand = phoneBrand;
	}
	~Phone()
	{
		cout<<"Phone��������������"<<endl;
	}
public:
	//�ֻ�Ʒ������
	string m_PhoneBrand;
};
//����
class Person8
{
public:
	//Phone m_Phone = phoneBrand;//��ʽת����
	Person8(string name,string phoneBrand):m_Name(name),m_Phone(phoneBrand)
	{
		cout<<"Person8�Ĺ��캯������"<<endl;
	}
	~Person8()
	{
		cout<<"Person8��������������"<<endl;
	}
public:
	//����
	string m_Name;
	//�ֻ����Ա
	Phone m_Phone;
};
void test8()
{
	Person8 p("����", "Apple");
	cout << p.m_Name << "����:" << p.m_Phone.m_PhoneBrand << endl;
}
//1.�������������Ϊ�����Ա,����ʱ���ȹ���������ڹ�������������˳���빹���෴
int main28()
{
	test8();
	system("pause");
	return 0;
}
