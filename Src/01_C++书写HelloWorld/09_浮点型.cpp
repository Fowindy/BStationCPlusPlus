#include <iostream>
using namespace std;
int main9()
{
	//1.������ float
	//2.˫���� double
	//Ĭ�������,���һ��С��,����ʾ��6λ��Ч����
	float f1 = 3.14f;//��fʡȥת������
	std::cout<<"f1 = "<<f1<<std::endl;
	double d1 = 3.1415926;
	std::cout<<"d1 = "<<d1<<std::endl;//3.14159
	//ͳ��float��doubleռ�õ��ڴ�ռ�
	std::cout<<"floatռ�õ��ڴ�ռ�Ϊ:"<<sizeof(f1)<<std::endl;//4
	std::cout<<"doubleռ�õ��ڴ�ռ�Ϊ:"<<sizeof(d1)<<std::endl;//8
	//��ѧ������
	float f2 = 3e2;//3*10^2
	std::cout<<"f2 = "<<f2<<std::endl;//300
	float f3 = 3e-2;//3*10^-2
	std::cout<<"f3 = "<<f3<<std::endl;//0.03
	system("pause");
	return 0;
}
