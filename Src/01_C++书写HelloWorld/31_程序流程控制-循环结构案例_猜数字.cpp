#include <iostream>
#include <string>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>
int main31()
{
	//�������������������õ�ǰϵͳʱ�����������,��ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1��ϵͳ���������
	int num = rand() % 100 + 1;//rand() % 100 + 1����0+1~99+1�������(ע��:��ʱΪα�����)
	//2����ҽ������
	int guess = 0;//������������
	while (1)
	{
		std::cout << "��������²������(1~100):" << std::endl;
		std::cin >> guess;
		//3���ж���ҵĲ²�
		if (guess == num)//�¶� �˳���Ϸ
		{
			std::cout << "��ϲ��!�¶���" << std::endl;
			break;//break,�������ô˹ؼ������˳���ǰѭ��
		}
		else if (guess > num)//�´� ��ʾ�µĽ��������߹�С ���·��ص�2��
		{
			std::cout << "����" << std::endl;
		}
		else
		{
			std::cout << "С��" << std::endl;
		}
	}
	system("pause");
	return 0;
}
