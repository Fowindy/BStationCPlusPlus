#include <iostream>
#include <string>
using namespace std;
//�Ӻ����������
class Person7
{
public:
	int m_A;
	int m_B;
	//1.��Ա��������+��
public:
	//Person7 operator+(Person7& p)
	//{
	//	Person7 temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
};
//2.ȫ�ֺ�������+��
Person7 operator+(Person7& p1, Person7& p2)
{
	Person7 temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
//3.���������
Person7 operator+(Person7& p1, int num)
{
	Person7 temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
void test7()
{
	Person7 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person7 p2;
	p2.m_A = 15;
	p2.m_B = 15;

	//Person7 p3 = p1 + p2;
	//1.1.��Ա�������صı��ʵ���
	//Person7 p3 = p1.operator+(p2);
	//2.1.ȫ�ֺ������صı��ʵ���
	Person7 p3 = operator+(p1, p2);
	cout << "p3.m_A = " << p3.m_A << endl;//25
	cout << "p3.m_B = " << p3.m_B << endl;//25
	//3.���������,Ҳ���Է�����������
	Person7 p4 = p1 + 100;//Person7 + int
	cout << "p4.m_A = " << p4.m_A << endl;//110
	cout << "p4.m_B = " << p4.m_B << endl;//110
}
int main()
{
	test7();
	system("pause");
	return 0;
}
