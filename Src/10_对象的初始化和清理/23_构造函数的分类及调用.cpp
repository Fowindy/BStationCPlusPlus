#include <iostream>
#include <string>
using namespace std;
//���캯���ķ��༰����
//����
// ���ղ������� �޲ι���(Ĭ�Ϲ���)���вι���
//�������ͷ��� ��ͨ���쿽������
class Person
{
public:
	//���캯��
	Person()
	{
		cout<<"Person���޲ι��캯������"<<endl;
	}
	//���캯��
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person& p)
	{
		//������������ϵ���������,������������
		age = p.age;
		cout<<"Person�������캯������"<<endl;
	}
	~Person()
	{
		cout<<"Person��������������"<<endl;
	}
	int age;
};
//����
void test02()
{
	//1.���ŷ�
	Person p1;//Ĭ�Ϲ��캯���ĵ���
	Person p2(10);//�вι��캯��
	Person p3(p2);//�������캯������
	cout << "P2������Ϊ:" << p2.age << endl;//10
	cout << "P3������Ϊ:" << p3.age << endl;//10
	//ע������:
	//����Ĭ�Ϲ��캯��ʱ��,��Ҫ��()
	//��Ϊ�������д���,����������Ϊ��һ������������
	Person p4();//����,����Ϊ�Ǻ�������,������Ϊ���ڴ�������
	//2.��ʽ��
	Person p5;
	Person p6 = Person(20);//�вι���
	Person p7 = Person(p6);//��������
	cout << "P6������Ϊ:" << p6.age << endl;//20
	cout << "P7������Ϊ:" << p7.age << endl;//20
	Person(20);//�������� �ص�:��ǰ��ִ�н�����,ϵͳ���������յ���������
	cout<<"aaaa"<<endl;
	//ע������2
	//��Ҫ���ÿ������캯����ʼ���������� ����������ΪPerson(p3)===Person p3;��������
	//Person(p3);//����
	//3.��ʽת����
	Person p8 = 30;//�൱�� д�� Person p8 = Person(30);
	Person p9 = p8;
	cout << "P8������Ϊ:" << p8.age << endl;//30
	cout << "P9������Ϊ:" << p9.age << endl;//30
}
int main23()
{
	test02();
	system("pause");
	return 0;
}
