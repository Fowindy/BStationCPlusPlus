#include <iostream>
#include <string>
using namespace std;
int main17()
{
	//1��ǰ�õ���
	int a = 10;
	++a;//�ñ������м�1����
	std::cout << "a = " << a << std::endl;
	//2�����õ���
	int b = 10;
	b++;//�ñ�������+1
	std::cout << "b = " << b << std::endl;
	//3��ǰ�úͺ��õ�����
	//ǰ�õ��� ���ñ���+1Ȼ����б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	std::cout << "a2 = " << a2 << std::endl;//11
	std::cout << "b2 = " << b2 << std::endl;//110
	//���õ��� �Ƚ��б��ʽ������ñ���+1
	int a3 = 10;
	int b3 = a3++ * 10;
	std::cout << "a3 = " << a3 << std::endl;//11
	std::cout << "b3 = " << b3 << std::endl;//100
	system("pause");
	return 0;
}
