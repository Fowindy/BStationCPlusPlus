#include <iostream>
#include <string>
using namespace std;
int main57()
{
	//ָ����ռ���ڴ�ռ�
	int a = 10;
	int *p = &a;
	//��32λ����ƽ̨:�κ����͵�ָ��ռ��4���ֽڿռ�
	//��64λ����ƽ̨:�κ����͵�ָ��ռ��8���ֽڿռ�
	std::cout << "sizeof(p) = " << sizeof(p) << std::endl;//4
	std::cout << "sizeof(int *) = " << sizeof(int *) << std::endl;//4
	std::cout << "sizeof(double *) = " << sizeof(double *) << std::endl;//4
	std::cout << "sizeof(float *) = " << sizeof(float *) << std::endl;//4
	std::cout << "sizeof(char *) = " << sizeof(char *) << std::endl;//4
	system("pause");
	return 0;
}
