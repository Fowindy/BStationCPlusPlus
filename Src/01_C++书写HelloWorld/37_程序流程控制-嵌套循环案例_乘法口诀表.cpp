#include <iostream>
#include <string>
using namespace std;
int main37()
{
	//��ӡ�����ǵĳ˷��ھ���
	for (int i = 1; i <= 9; i++)//��
	{
		for (int j = 1; j <= i; j++)//��
		{
			std::cout<<j<<" * "<<i<<" = "<<j*i<<"\t";
		}
		std::cout<<std::endl;
	}
	system("pause");
	return 0;
}
