#include <iostream>
#include <string>
using namespace std;
//����ѧ���ṹ��
struct Student
{
	string name;//����
	int age;//����
	int score;//����
};
//��ӡѧ����Ϣ�ĺ���
//1.ֵ����
void printStudent1(Student stu)
{
	//ֵ����_�������βη����仯����Ӱ�������ʵ��
	stu.age = 100;
	cout<<"�Ӻ���1������:"<<stu.name
		<<";�Ӻ���1������:"<<stu.age
		<<";�Ӻ���1�еķ���:"<<stu.score<<endl;
}
//2.��ַ����
void printStudent2(Student* p)
{
	//��ַ����_�������βη����仯��Ӱ�������ʵ��
	p->age = 200;
	cout << "�Ӻ���2������:" << p->name
		<< ";�Ӻ���2������:" << p->age
		<< ";�Ӻ���2�еķ���:" << p->score << endl;
}
int main68()
{
	//�ṹ������������
	//��ѧ������һ��������,��ӡѧ�����ϵ�������Ϣ
	//�����ṹ�����
	Student stu;
	stu.name = "����";
	stu.age = 18;
	stu.score = 89;
	//ֵ����_�ṹ������������
	printStudent1(stu);
	//��ַ����_�ṹ������������
	printStudent2(&stu);
	cout << "����:" << stu.name
		<< ";����:" << stu.age
		<< ";����:" << stu.score << endl;
	system("pause");
	return 0;
}
