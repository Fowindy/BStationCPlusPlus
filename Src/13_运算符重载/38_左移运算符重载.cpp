#include <iostream>
#include <string>
using namespace std;
//�������������
class Person8
{
	//4.������Ԫ����˽�г�Ա����
	friend ostream& operator<<(ostream& out, Person8& p);
	//���ó�Ա�������� ��������� p.operator<<(cout) �򻯰汾 p<<cout
	//2.�������ó�Ա��������<<�����,��Ϊ�޷�ʵ��cout�����
	//void operator<<(Person8& p)
	//{
	//}
private:
	int m_A;
	int m_B;
};
//3.ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream& out,Person8& p)
{
	p.m_A = 10;
	p.m_B = 10;
	//�˴�coutΪ�������Ը���Ϊout�������еı���������
	out<<"m_A = "<< p.m_A << ",m_B = "<<p.m_B<<endl;
	return out;
}
void test8()
{
	Person8 p;
	cout<<p<<"hello world."<<endl;
	//m_A = 10,m_B = 10
	//hello world.
}
int main()
{
	test8();
	system("pause");
	return 0;
}
