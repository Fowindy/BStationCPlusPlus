#include <iostream>
#include <string>
using namespace std;
//�ṹ��ָ��
//1.����ѧ���Ľṹ��
struct Student
{
	string name;//����
	int age;//����
	double height;//���
	int score;//����
};
int main66()
{
	//2.����ѧ���ṹ�����
	Student s = { "����",18,175,88 };
	//3.ͨ��ָ��ָ��ṹ�����
	Student* p = &s;
	//4.ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ����ʽṹ���е�����,��Ҫ����'->'
	std::cout<<"����:"<<p->name<<";����:"<<p->age<<";���:"<<p->height<<";����:"<<p->score<<std::endl;
	system("pause");
	return 0;
}
