#include <iostream>
#include <string>
using namespace std;
//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student
{
	//���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
	//����	��Ա���� ��Ա����
	//��Ϊ	��Ա����	��Ա����
public:
	//����:
	//����
	string m_name;
	//ѧ��
	int m_id;
public:
	//��Ϊ:
	//��������
	void setName(string name)
	{
		m_name = name;
	}
	//����ѧ��
	void setId(int id)
	{
		m_id = id;
	}
	//��ʾ������ѧ��
	void showStudent()
	{
		cout<<"ѧ��������:"<<m_name<<";ѧ����ѧ��:"<<m_id<<endl;
	}

};
int main16()
{
	//ͨ��ѧ����,���������ѧ��(����)  ʵ��������
	Student stu1;
	//��stu1����,�������Ը�ֵ
	stu1.m_name = "����";
	stu1.m_id = 1;
	//��ʾѧ����Ϣ
	stu1.showStudent();

	Student stu2;
	stu2.m_name = "����";
	stu2.m_id = 2;
	stu2.showStudent();

	//ͨ��set��Ϊ�����Ը�ֵ�ķ�ʽ
	Student stu3;
	stu3.setName("����");
	stu3.setId(3);
	stu3.showStudent();
	system("pause");
	return 0;
}
