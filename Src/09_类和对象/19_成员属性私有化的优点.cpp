#include <iostream>
#include <string>
using namespace std;
//��Ա��������Ϊ˽�е��ŵ�:
//�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
//�������
class Person
{
private:
	//����---�ɶ���д
	string m_Name;
	//����---��д
	string m_Lover;
	//����---�ɶ�
	int m_Age;
public:
	//��������---��д
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����---�ɶ�
	string getName()
	{
		return m_Name;
	}
	//��ȡ����---�ɶ���д ������޸�(���䷶Χ������0~150֮��)
	int getAge()
	{
		//m_Age = 18;//�����ʼ��Ϊ18
		return m_Age;
	}
	//��������
	void setAge(int age)
	{
		//�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
		if (age<0 || age>150)
		{
			m_Age = 0;
			cout<<"������������!"<<endl;
			return;
		}
		m_Age = age;
	}
	//��������---��д
	void setLover(string lover)
	{
		m_Lover = lover;
	}
};
int main19()
{
	Person p1;
	p1.setName("����");
	//��������
	p1.setLover("�����");
	p1.setAge(18);
	cout << "����Ϊ:" << p1.getName() << endl;
	cout << "����Ϊ:" << p1.getAge() << endl;
	system("pause");
	return 0;
}
