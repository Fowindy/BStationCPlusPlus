#include <iostream>
#include <string>
using namespace std;
//1.����ѧ����������:ѧ���������г�Ա(����,����,����)
//��ʵ�Զ����������;���һЩ�������͵ļ���;
//�﷨: struct �������� {��Ա�б�}
//����ṹ��ʱ,struct�ؼ��ֲ���ʡ��
struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
int main64()
{
	//2.ͨ��ѧ�����ʹ�������ѧ��
	//2.1 struct Student s1;
	//��������ʱ,struct�ؼ��ֿ���ʡ��
	Student s1;
	//��s1���Ը�ֵ,ͨ��������.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	std::cout<<"����:"<<s1.name<<";����:"<<s1.age<<";����:"<<s1.score<<std::endl;

	//2.2 struct Student s2 = {...};
	struct Student s2 = { "����",19,80 };
	std::cout << "����:" << s2.name << ";����:" << s2.age << ";����:" << s2.score << std::endl;

	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����(���Ƽ�ʹ��)
	//��s3���Ը�ֵ,ͨ��������.���ʽṹ������е�����
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	std::cout << "����:" << s3.name << ";����:" << s3.age << ";����:" << s3.score << std::endl;

	system("pause");
	return 0;
}
