#include <iostream>
#include <string>
using namespace std;
int main28()
{
	//��Ŀ��������������ֵ
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double numMax = 0;
	std::cout<<"������������(�س����):"<<std::endl;
	std::cin>>num1>>num2>>num3;
	numMax = (num1 >= num2 ? num1 : num2) >= num3 ? (num1 >= num2 ? num1 : num2) : num3;
	std::cout<<"���ֵΪ:"<<numMax<<std::endl;
	//��C++�У���Ŀ��������ص��Ǳ��������Լ�����ֵ
	(num1 >= num2 ? num1 : num2) = 100;
	std::cout<<"num1="<<num1<<std::endl;
	std::cout<<"num2="<<num2<<std::endl;
	system("pause");
	return 0;
}
