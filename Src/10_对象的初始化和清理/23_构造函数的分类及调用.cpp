#include <iostream>
#include <string>
using namespace std;
//���캯���ķ��༰����
//����
// ���ղ������� �޲ι���(Ĭ�Ϲ���)���вι���
//�������ͷ��� ��ͨ���쿽������
class Person3
{
public:
	//���캯��
	Person3()
	{
		cout<<"Person3���޲ι��캯������"<<endl;
	}
	//���캯��
	Person3(int a)
	{
		age = a;
		cout << "Person3���вι��캯������" << endl;
	}
	//�������캯��
	Person3(const Person3& p)
	{
		//������������ϵ���������,������������
		age = p.age;
		cout<<"Person3�������캯������"<<endl;
	}
	~Person3()
	{
		cout<<"Person3��������������"<<endl;
	}
	int age;
};
//����
void test02()
{
	//1.���ŷ�
	Person3 p1;//Ĭ�Ϲ��캯���ĵ���
	Person3 p2(10);//�вι��캯��
	Person3 p3(p2);//�������캯������
	cout << "P2������Ϊ:" << p2.age << endl;//10
	cout << "P3������Ϊ:" << p3.age << endl;//10
	//ע������:
	//����Ĭ�Ϲ��캯��ʱ��,��Ҫ��()
	//��Ϊ�������д���,����������Ϊ��һ������������
	Person3 p4();//����,����Ϊ�Ǻ�������,������Ϊ���ڴ�������
	//2.��ʽ��
	Person3 p5;
	Person3 p6 = Person3(20);//�вι���
	Person3 p7 = Person3(p6);//��������
	cout << "P6������Ϊ:" << p6.age << endl;//20
	cout << "P7������Ϊ:" << p7.age << endl;//20
	Person3(20);//�������� �ص�:��ǰ��ִ�н�����,ϵͳ���������յ���������
	cout<<"aaaa"<<endl;
	//ע������2
	//��Ҫ���ÿ������캯����ʼ���������� ����������ΪPerson3(p3)===Person3 p3;��������
	//Person3(p3);//����
	//3.��ʽת����
	Person3 p8 = 30;//�൱�� д�� Person3 p8 = Person3(30);
	Person3 p9 = p8;
	cout << "P8������Ϊ:" << p8.age << endl;//30
	cout << "P9������Ϊ:" << p9.age << endl;//30
}
int main23()
{
	test02();
	system("pause");
	return 0;
}
