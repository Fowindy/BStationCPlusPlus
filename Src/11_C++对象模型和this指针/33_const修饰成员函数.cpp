#include <iostream>
#include <string>
using namespace std;
class Person3
{
public:
	//thisָ��ı�����ָ�볣�� ָ���ָ�򲻿����޸�
	//this�൱��Person3* const this;
	//�ڳ�Ա���������const,���ε���thisָ��,��ָ��ָ���ֵҲ�������޸�
	//������
	void showPerson() const//�ȼ���const Person3* const this;
	{
		//this->m_Age = 100;//����const�����޸�,��const�������޸�
		//this = NULL;//thisָ���ǲ������޸�ָ��ָ���
		this->m_B = 100;
	}
	void func()
	{
		m_Age = 300;
	}
	int m_Age;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ�����Ϲؼ���mutable
};
void test3()
{
	Person3 p;
	p.showPerson();
}
void test31()
{
	const Person3 p;//�ڶ���ǰ��const,��ɳ�����
	//p.m_Age = 100;//p���������ֵ�������޸�
	p.m_B = 200;//mutable���ε�����ֵ,�ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();//������,�����Ե�����ͨ��Ա����,��Ϊ��ͨ��Ա���������޸�����
}
int main()
{
	system("pause");
	return 0;
}
