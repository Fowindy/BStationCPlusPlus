#include <iostream>
#include <string>
using namespace std;
int main16()
{
	//ȡģ����ı��ʾ���������
	int a1 = 10;
	int b1 = 3;
	std::cout << a1 % b1 << std::endl;//1

	int a2 = 10;
	int b2 = 20;
	std::cout << a2 % b2 << std::endl;//10

	int a3 = 10;
	int b3 = 0;
	//����!�������������������Ϊ0,����Ҳ������ȡģ����
	//std::cout << a3 % b3 << std::endl;

	//����С���ǲ�������ȡģ�����
	double d1 = 3.14;
	double d2 = 1.1;
	//std::cout << d1 % d2 << std::endl;
	system("pause");
	return 0;
}
