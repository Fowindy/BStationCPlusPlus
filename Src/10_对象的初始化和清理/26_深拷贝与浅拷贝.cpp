#include <iostream>
#include <string>
using namespace std;
//�����ǳ����
class Person6
{
public:
	Person6()
	{
		cout << "Person6���޲ι��캯���ĵ���" << endl;
	}
	Person6(int age, int height)
	{
		cout << "Person6���вι��캯���ĵ���" << endl;
		m_Age = age;
		//��ߵ����ݲ�����ֱ�Ӹ�ֵ,��������new��������ݴ����ڶ���
		//�������ٵ�����:�ɳ���Ա�ֶ�����,ҲҪ�ɳ���Ա�ֶ��ͷ�(�ڶ�������ǰ)
		m_Height = new int(height);//��ָ����ն���������
	}
	~Person6()
	{
		//��������:�����������������ͷŲ���
		if (m_Height != NULL)
		{
			//�ͷ�
			delete(m_Height);
			//ͬʱΪ�˷�ֹҰָ��ĳ���,���ÿղ���
			m_Height = NULL;
		}
		cout << "Person6�����������ĵ���" << endl;
	}
	//�Լ�ʵ�ֿ������캯��,�����ǳ��������������
	Person6(const Person6 &p)
	{
		cout<<"Person6�������캯���ĵ���"<<endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//ǳ����,������Ĭ��ʵ�־������д���
		//�������:����ͨ�������ó������ݿ����Լ��Ķ����ڴ�
		m_Height = new int(*p.m_Height);
	}
	int m_Age;
	int *m_Height;//����ָ����ߵ�ָ��---��Ҫ����ߵ����ݿ��ٵ�����
};
void test6()
{
	Person6 p1(18, 160);
	//������,���ָ������
	cout << "p1������Ϊ:" << p1.m_Age << ";p1�����Ϊ:" << *p1.m_Height << endl;//18
	//2.δ���忽�����캯��,���������Զ���ӿ������죬������ǳ��������
	Person6 p2(p1);//ǳ�������������ڴ��ظ��ͷŵ�����
	cout << "p2������Ϊ:" << p2.m_Age << ";p2�����Ϊ:" << *p2.m_Height << endl;//18
}
int main26()
{
	test6();
	system("pause");
	return 0;
}
