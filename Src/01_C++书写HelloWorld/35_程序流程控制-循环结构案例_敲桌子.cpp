#include <iostream>
#include <string>
using namespace std;
int main()
{
	//��������:��1��ʼ��������100������ָ�λ����7,��������ʮλ����7,���߸�������7�ı���,���Ǵ�ӡ
	//������, ��������ֱ�Ӵ�ӡ�����
	for (int i = 1; i <= 100; i++)
	{
		if (i%10==7 || i/10==7 || i%7==0)
		{
			std::cout<<"i = "<<i<<";������"<<std::endl;
		}
		else
		{
			std::cout<<"i = "<<i<<std::endl;
		}
	}
	system("pause");
	return 0;
}
