#include <iostream>
#include <string>
using namespace std;
int main29()
{
	//switch���
	//����Ӱ���д��
	//10~9����
	//8~7�ǳ���
	//6~5һ��
	//5���� ��Ƭ
	std::cout << "�����Ӱ���(0-10):" << std::endl;
	int score = 0;
	std::cin >> score;
	std::cout << "������Ӱ�������Ϊ:" << score << std::endl;
	switch (score)
	{
	case 10:
	case 9:
		std::cout<<"�����Ӱ"<<std::endl;
		break;//�˳���ǰ��֧(breakһ��Ҫ)
	case 8:
	case 7:
		std::cout<<"�ǳ��õĵ�Ӱ"<<std::endl;
		break;
	case 6:
	case 5:
		std::cout<<"һ��ĵ�Ӱ"<<std::endl;
		break;
	default:
		std::cout<<"��Ƭ"<<std::endl;
		break;
	}
	//ע��1: case�����û��break, ��ô�����һֱ����ִ��
	//if��switch����:
	//switchȱ��:�ж�ʱ��ֻ�������ͻ����ַ���ö����,��������һ������
	//switch�ŵ�:�ṹ����,ִ��Ч�ʸ�
	system("pause");
	return 0;
}
