#include <iostream>
#include <string>
using namespace std;
//����Ӣ�۽ṹ��
struct Hero
{
	string name;//����
	int age;//����
	string gender;//�Ա�
};
void bubbleSortByAge(Hero heroArr[],int length)
{
	for (int i = 0; i < length-1 ; i++)
	{
		for (int j = 0; j < length-1-i; j++)
		{
			if (heroArr[j].age > heroArr[j+1].age)
			{
				Hero temp = heroArr[j];
				heroArr[j] = heroArr[j + 1];
				heroArr[j + 1] = temp;
			}
		}
	}
}
void printHeroInfo(Hero heroArr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout<<"����:"<<heroArr[i].name
			<<";����:"<<heroArr[i].age
			<<";�Ա�:"<<heroArr[i].gender<<endl;
	}
}
int main()
{
	//��������:
	//���һ��Ӣ�۵Ľṹ��, ������Ա����, ����, �Ա�:�����ṹ������, �����д��5��Ӣ��
	//ͨ��ð��������㷨, �������е�Ӣ�۰������g������������, ���մ�ӡ�����Ľ����
	//1.�����ṹ������
	Hero heroArr[5] = 
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	//�洢����ĳ���
	int len = sizeof(heroArr) / sizeof(heroArr[0]);
	//����ǰ�Ĵ�ӡ:
	cout<<"����ǰ�Ĵ�ӡ:"<<endl;
	printHeroInfo(heroArr, len);
	//2.������ð��������
	bubbleSortByAge(heroArr,len);
	//3.��ӡӢ����Ϣ
	cout << "�����Ĵ�ӡ:" << endl;
	printHeroInfo(heroArr, len);
	system("pause");
	return 0;
}
