#include <iostream>
#include <string>
using namespace std;
//�ṹ����const��ʹ�ó���
//����ѧ���Ľṹ��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
//ֵ���ݵ�ȱ��:�Ὣѧ���ṹ���е�����ȫ��������Ϊ����,����ռ�������ڴ�
void printStudents1(Student stu)
{
	cout<<"����:"<<stu.name
		<<";����:"<<stu.age
		<<";����:"<<stu.score<<endl;
}
//���������βθ�Ϊָ��,���Լ����ڴ�ռ�,���Ҳ��Ḵ���µĸ�������
void printStudents2(const Student* p)
{
	//p->age = 150;//����const֮��,һ�����޸ĵĲ����ͻᱨ��;���Է�ֹ�����,ֻ��
	cout << "����:" << p->name
		<< ";����:" << p->age
		<< ";����:" << p->score << endl;
}
int main69()
{
	//�����ṹ�����
	Student s = { "����",15,70 };
	printStudents1(s);
	printStudents2(&s);
	cout << "����:" << s.name
		<< ";����:" << s.age
		<< ";����:" << s.score << endl;
	system("pause");
	return 0;
}
