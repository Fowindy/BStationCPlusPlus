#include <iostream>
#include <string>
using namespace std;
//����Ȩ��
//����Ȩ��  public	��Ա  ���ڿ��Է���  ������Է���
//����Ȩ��  protected	��Ա  ���ڿ��Է���  ���ⲻ���Է���	���ӿ��Է��ʸ����еı�������
//˽��Ȩ��  private	��Ա    ���ڿ��Է���  ���ⲻ���Է���	���Ӳ����Է��ʸ����е�˽������
class Person
{
public:
	//����Ȩ��
	string m_Name;
protected:
	//����Ȩ��
	string m_Car;
private:
	//˽��Ȩ��
	int m_PassWord;
public:
#pragma region ���ڿ��Է���
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_PassWord = 123456;
		cout<<"����:"<<m_Name<<";����:"<<m_Car<<";����:"<<m_PassWord<<endl;
	}
#pragma endregion

};
int main17()
{
	Person p1;
	p1.m_Name = "����";
	//p1.m_Car = "����";//����Ȩ�޵�����,�����ⲻ�ܷ���
	//p1.m_PassWord = 123��//˽��Ȩ�޵����ݣ����ⲻ�ܷ���
	p1.func();//����:����;����:������;����:123456
	system("pause");
	return 0;
}
