#include <iostream>
#include <string>
using namespace std;
#include <ctime>
//����ѧ���Ľṹ��
struct Student
{
	//ѧ��������
	string sName;
	//����
	int score;
};
//������ʦ�Ľṹ��
struct Teacher
{
	//ѧ���ṹ���������
	Student stuArray[5];//��Ҫ!!!ѧ��Ƕ�׶��������ʦ�ṹ���е��ʼ,���򱨴�
	//��ʦ����
	string tName;
};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(Teacher tArray[], int length)
{
	//����һ�����ֺ�׺����
	string nameSeed = "ABCDE";
	//��ʼ����ʦ����ͷ
	string tName = "Teacher_";
	//��ʼ����ʦ����ͷ
	string sName = "Student_";
	for (int i = 0; i < length; i++)
	{
		tArray[i].tName = tName + nameSeed[i];
		for (int j = 0; j < sizeof(tArray[i].stuArray) / sizeof(tArray[i].stuArray[0]); j++)
		{
			tArray[i].stuArray[j].sName = sName + nameSeed[j];
			//�������
			int random = rand() % 61 + 40;//40~100
			tArray[i].stuArray[j].score = random;
		}
	}
}
void printInfo(Teacher tArray[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "��" << i + 1 << "λ��ʦ������:" << tArray[i].tName<<endl;
		for (int j = 0; j < sizeof(tArray[i].stuArray) / sizeof(tArray[i].stuArray[0]); j++)
		{
			cout << "\t��" << j + 1 << "λѧ��������:" << tArray[i].stuArray[j].sName
				<< ";��" << j + 1 << "λѧ���ķ���:" << tArray[i].stuArray[j].score << endl;
		}
	}
}
//1.����3����ʦ������
Teacher tArray[3];//��Ҫ!!!Teacher���������main����֮ǰ,���򱨴�
int main70()
{
	//�������������������õ�ǰϵͳʱ�����������,��ֹÿ�������������һ��
	srand((unsigned int)time(NULL));
	//2.ͨ��������3����ʦ����Ϣ��ֵ,������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len);
	//3.��ӡ������ʦ������ѧ����Ϣ
	printInfo(tArray, len);
	system("pause");
	return 0;
}



