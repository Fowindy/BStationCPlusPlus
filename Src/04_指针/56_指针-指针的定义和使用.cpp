#include <iostream>
#include <string>
using namespace std;
int main56()
{
	//1.����һ��ָ��
	//����һ�����ͱ���
	int a = 10;
	//ָ�붨����﷨:	�������� * ָ�������;
	int * p;
	//��ָ�����p��¼a�ĵ�ַ
	p = &a;
	std::cout<<"a�ĵ�ַΪ:"<<&a<<std::endl;//010FFBA8
	std::cout<<"ָ��pΪ:"<<p<<std::endl;//010FFBA8
	//2.ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ��е�����
	//ָ��ǰ�� * ���������,�ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	std::cout<<"a = "<<a<<std::endl;//a = 1000
	std::cout<<"*p = "<<*p<<std::endl;//*p = 1000
	system("pause");
	return 0;
}
