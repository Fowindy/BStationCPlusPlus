#include <iostream>
#include <string>
using namespace std;
//ʹ�õ�ʱ��,�������ļ���ͷ�ļ�
#include "swap.h"
//�����ķ��ļ���д
//ʵ���������ֽ��н����ĺ���
#pragma region �����������ŵ�ͷ�ļ�swap.h��
				//����������
//void swap1(int a, int b);
#pragma endregion

#pragma region �����Ķ���ŵ�swap.cpp
				//�����Ķ���
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//}
#pragma endregion

//�����ķ��ļ���д
//1. ������׺��Ϊ.h��ͷ�ļ�
//2. ������׺��Ϊ.cpp��Դ�ļ�
//3. ��ͷ�ļ���д����������
//4. ��Դ�ļ���д�����Ķ���

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);//a = 20;b = 10
	system("pause");
	return 0;
}
