#include <iostream>
#include <string>
using namespace std;
int main()
{
	//���Գɼ�ͳ��:
	//��������:������ͬѧ(����, ����, ����), ��һ�ο����еĳɼ��ֱ����±�, ��ֱ��������ͬѧ���ܳɼ�
	//��������
	int scores[3][4] =
	{
		{100,100,100,98},
		{90,50,100,78},
		{60,70,80,77}
	};
	//��������
	string names[] = { "����", "����", "����" };
	for (int i = 0; i < sizeof(scores)/sizeof(scores[0]) ; i++)
	{
		int sum = 0;
		for (int j = 0; j < sizeof(scores[0])/sizeof(scores[0][0]) ; j++)
		{
			sum += scores[i][j];
		}
		std::cout<<names[i]<<"���ܷ�Ϊ:"<<sum<<std::endl;
	}
	system("pause");
	return 0;
}
