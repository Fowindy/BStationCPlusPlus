#include <iostream>
#include <string>
using namespace std;
int main58()
{
	//��ָ��
	//1.��ָ����ָ�����ָ���ڴ��е�ַ���Ϊ0�Ŀռ�;
	int* p = NULL;
	std::cout<<"p = "<<p<<std::endl;//00000000
	//2.��ָ��ָ����ڴ��ǲ����Է��ʵ�;(���벻�����,���б���)
	//�ڴ��ַ���0~255Ϊϵͳռ�õ��ڴ�,�������û�����
	//p ��nullptr.
	//*p = 1000;//*p�����Է���,�������Ը�ֵ
	system("pause");
	return 0;
}
