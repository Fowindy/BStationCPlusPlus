#include <iostream>
#include <string>
using namespace std;
int main23()
{
	//ѡ��ṹ����if���
	//�û��������,�����������600,��Ϊ����һ����ѧ,����Ļ�����
	//1���û��������
	std::cout << "��������ĸ߿�����:";
	int score = 0;
	std::cin >> score;
	//2����ӡ�û�����ķ���
	std::cout<<"������ķ�����:"<<score<<std::endl;
	//3���жϷ����Ƿ����600,�������,��ô���
	//ע������, if�������治Ҫ�ӷֺ�
	if(score > 600)
		std::cout<<"��ϲ��!������һ��"<<std::endl;
	system("pause");
	return 0;
}
