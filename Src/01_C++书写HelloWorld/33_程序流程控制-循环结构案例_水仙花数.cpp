#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main33()
{
	//��������:ˮ�ɻ�����ָһ��3λ��, ����ÿ��λ�ϵ����ֵ�3��Ļ֮�͵���������
	//��a : 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
	//������do...while���,�������3λ���е�ˮ�ɻ���
	int num = 100;
	do
	{
		if (pow(num / 100, 3) + pow(num % 100 / 10, 3) + pow(num % 10, 3) == num)
		{
			std::cout<<"ˮ�ɻ���:"<<num<<std::endl;
		}
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}
