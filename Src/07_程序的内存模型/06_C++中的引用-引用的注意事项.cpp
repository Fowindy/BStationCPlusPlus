#include <iostream>
#include <string>
using namespace std;
int main06()
{
	//���õ�ע������
	//1.���ñ���Ҫ��ʼ��
	int a = 10;
	//int &b;//����,����δ��ʼ��
	int &b = a;//��ȷ,�г�ʼ��
	//2.����һ����ʼ����,�Ͳ�����������(�ı�)
	int c = 20;
	b = c;//��ֵ����,�����Ǹ�������
	cout << "a = " << a << endl;//20
	cout << "b = " << b << endl;//20
	cout << "c = " << c << endl;//20
	system("pause");
	return 0;
}