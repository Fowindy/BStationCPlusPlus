#include <iostream>
#include <string>
using namespace std;
//����ӷ�����
//���������ʱ��,num1��num2��û����ʵ����
//ֻ��һ����ʽ�ϵĲ���,����β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main51()
{
	//��main�����е���add����
	int a = 10;
	int b = 20;
	//���������﷨:��������(����)
	//a��b��Ϊʵ�ʲ���,���ʵ��
	//�����õ�ʱ��,ʵ�ε�ֵ�ᴫ�ݸ��β�
	int result = add(a, b);
	std::cout<<"result = "<<result<<std::endl;//30

	a = 100;
	b = 500;
	result = add(a, b);
	cout<<"result = "<<result<<endl;//600
	system("pause");
	return 0;
}
