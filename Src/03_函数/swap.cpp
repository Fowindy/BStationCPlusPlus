//�ں����ķ��ļ�cpp�������Լ������ͷ�ļ�(�Զ����ͷ�ļ���˫����,ϵͳͷ�ļ��ü�����)
#include "swap.h"
//�����Ķ���
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}