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
		m_PhoneBrand = phoneBrand;
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
	}
public:
	//����
	string m_Name;
	//�ֻ����Ա
	Phone m_Phone;
};
int main()
{
	Person8 p("����", "Apple");
	cout<<p.m_Name<<"����:"<<p.m_Phone.m_PhoneBrand<<endl;
	system("pause");
	return 0;
}
