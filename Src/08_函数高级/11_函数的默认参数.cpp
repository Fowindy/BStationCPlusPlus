#include <iostream>
#include <string>
using namespace std;
//������Ĭ�ϲ���
//�﷨:����ֵ���� ������(�β�=Ĭ��ֵ)
//��������Լ���������,�����Լ�������,���û��,��ô����Ĭ��ֵ
int add(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
//ע������1:���ĳ��λ���Ѿ���Ĭ�ϲ���,��ô���λ������,�����Ҷ�������Ĭ��ֵ
//int add1(int a, int b = 20, int c)//c�������Ĭ��ֵ
//{
//	return a + b + c;
//}

//ע������2:���������������Ĭ�ϲ���,����ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
int add2(int a, int b = 20, int c = 30);
int add2(int a, int b, int c)
{
	return a + b + c;
}
int main11()
{
	cout << add(10) << endl;//60
	cout << add(10,-10) << endl;//30
	cout << add(10, -10, -5) << endl;//-5
	cout << add2(10, -10, -5) << endl;//-5
	system("pause");
	return 0;
}
