#include <iostream>
#include <string>
using namespace std;
int main()
{
	//�������̿���-ѡ��ṹ_��������if���
	//����һ�����Է���, �������600��, ��Ϊ����һ����ѧ, ����Ļ���
	//1���û��������
	std::cout << "��������ĸ߿�����:";
	int score = 0;
	std::cin >> score;
	//2����ӡ�û�����ķ���
	std::cout << "������ķ�����:" << score << std::endl;
	//3������600,����һ����ѧ,��Ļ���
	if (score > 600)
	{
		std::cout<<"��ϲ��!����һ����ѧ"<<std::endl;
	}
	//4������500, ��Ϊ���϶�����ѧ, ��Ļ���
	else if (score > 500)
	{
		std::cout<<"��ϲ��!���϶�����ѧ"<<std::endl;
	}
	//5������400, ��Ϊ����������ѧ, ��Ļ���
	else if (score > 400)
	{
		std::cout<<"��ϲ��!����������ѧ"<<std::endl;
	}
	//6��С�ڵ���400��,��Ϊδ���ϱ���,��Ļ�����
	else
	{
		std::cout<<"���ź�!û�п��ϴ�ѧ"<<std::endl;
	}
	system("pause");
	return 0;
}
