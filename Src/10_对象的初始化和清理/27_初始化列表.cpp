#include <iostream>
#include <string>
using namespace std;
//��ʼ���б�
class Person7
{
public:
	//1.��ͳ��ʼ������
	//Person7(int a,int b,int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//2.��ʼ���б��ʼ������
	Person7(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{
	}
	int m_A;
	int m_B;
	int m_C;
};
void test7()
{
	//Person7 p(10, 20, 30);
	Person7 p(15, 25, 35);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}
int main()
{
	test7();
	system("pause");
	return 0;
}
