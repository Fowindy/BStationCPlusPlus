#include <iostream>
#include <string>
using namespace std;
//thisָ�����;
class Person1
{
public:
	Person1(int age)
	{
		//thisָ��ָ��ı����õĳ�Ա���������Ķ���p1
		this->age = age;
	}
	Person1& Person1AddAge(Person1 &p)
	{
		this->age += p.age;
		//this��ָ�򱻵��õĳ�Ա���������Ķ���p2��ָ��,��*this����p2������
		return *this;
	}
	int age;
};
//1.������Ƴ�ͻ
void test1()
{
	Person1 p1(18);
	cout<<"p1������Ϊ:"<<p1.age<<endl;
}
//2.���ض�������*this
void test11()
{
	Person1 p1(10);
	Person1 p2(10);
	//��ʽ���˼��
	p2.Person1AddAge(p1).Person1AddAge(p1).Person1AddAge(p1);
	cout<<"p2������Ϊ:"<<p2.age<<endl;//40
}
int main31()
{
	test1();//18
	test11();//20
	system("pause");
	return 0;
}
