#include <iostream>
#include <string>
using namespace std;
//�����ǳ����
class Person6
{
public:
	Person6()
	{
		cout<<"Person6���޲ι��캯���ĵ���"<<endl;
	}
	Person6(int age)
	{
		cout<<"Person6���вι��캯���ĵ���"<<endl;
		m_Age = age;
	}
	~Person6()
	{
		cout<<"Person6�����������ĵ���"<<endl;
	}
	int m_Age;
};
void test6()
{
	Person6 p1(18);
	cout<<"p1������Ϊ:"<<p1.m_Age<<endl;//18
	//2.δ���忽�����캯��,���������Զ���ӿ������죬������ǳ��������
	Person6 p2(p1);
	cout << "p2������Ϊ:" << p2.m_Age << endl;//18
}
int main() 
{
	test6();
	system("pause");
	return 0;
}
