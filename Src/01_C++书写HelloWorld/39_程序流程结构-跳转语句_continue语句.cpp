#include <iostream>
#include <string>
using namespace std;
int main39()
{
	//continue������;
	//����:�������ż�������
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//����ɸѡ����,ִ�е��˾Ͳ�������ִ��,ִ����һ��ѭ��
			//break���˳�ѭ��,��continue����
		}
		std::cout << i << std::endl;
	}
	system("pause");
	return 0;
}
