#include <iostream>
#include <string>
using namespace std;
//�ṹ������
//1.����ṹ��
struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
int main65()
{
	//2.�����ṹ������
	Student stuArray[3] =
	{
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	};
	//3.���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].age = 23;
	stuArray[2].name = "����";
	stuArray[2].score = 78;
	//4.�����ṹ������
	for (int i = 0; i < sizeof(stuArray)/sizeof(stuArray[0]) ; i++)
	{
		std::cout<<"����:"<<stuArray[i].name<<";����:"<<stuArray[i].age<<";����:"<<stuArray[i].score<<std::endl;
	}
	system("pause");
	return 0;
}
