#include <iostream>
#include <string>
using namespace std;
int main38()
{
	//break��ʹ��ʱ��
	//1.������switch�����
	std::cout<<"��ѡ�񸱱����Ѷ�:"<<std::endl;
	std::cout<<"1.��ͨ"<<std::endl;
	std::cout<<"2.�е�"<<std::endl;
	std::cout<<"3.����"<<std::endl;
	int select = 0;//����ѡ��������
	std::cin>>select;//�ȴ��û�����ѡ�����
	switch (select)
	{
	case 1:
		std::cout<<"��ѡ�������ͨ�Ѷ�"<<std::endl;
		break;
	case 2:
		std::cout << "��ѡ������е��Ѷ�" << std::endl;
		break;
	case 3:
		std::cout << "��ѡ����������Ѷ�" << std::endl;
		break;
	}
	//2.������ѭ�������
	for (int i = 0; i < 10; i++)
	{
		//���i����5,�˳�ѭ��,���ٴ�ӡ
		if (i==5)
		{
			break;//�˳�ѭ��
		}
		std::cout<<i<<std::endl;
	}
	//3.������Ƕ��ѭ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	system("pause");
	return 0;
}
