#include <iostream>
#include <string>
using namespace std;
//�ṹ��Ƕ�׽ṹ��
//0.����ѧ���Ľṹ��
struct Student
{
	string name;//����
	int age;//����
	int score;//����
};
//1.������ʦ�ṹ��
struct Teacher
{
	int id;//��ʦ���
	string name;//��ʦ����
	int age;//��ʦ����
	Student stu;//����ѧ��(�ṹ��)
};
int main67()
{
	//������ʦ
	Teacher t;
	//����ʦ�ṹ���еĳ�Ա�б����Ը�ֵ
	t.name = "����";
	t.age = 35;
	t.id = 1001;
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 89;
	std::cout<<"��ʦ����:"<< t.name
		<<";��ʦ���:"<<t.id
		<<";��ʦ����:"<<t.age
		<<";��ʦ������ѧ������:"<<t.stu.name
		<<";ѧ��������:"<<t.stu.age
		<<";ѧ�����Եķ���:"<<t.stu.score<<::endl;
	system("pause");
	return 0;
}
