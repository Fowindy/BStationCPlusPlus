#include <iostream>
#include <string>
using namespace std;
//��������
//1.ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.��ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.���ô���
void mySwap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main07()
{
	int a = 10;
	int b = 20;
	cout << "����ǰ:a = " << a << ";b = " << b << endl;//10 20
	mySwap01(a, b);//ֵ����:�βη����ı䲻������ʵ��
	cout << "ֵ����_������:a = " << a << ";b = " << b << endl;//10 20
	mySwap02(&a, &b);//��ַ����:�βη����仯������ʵ��
	cout << "��ַ����_������:a = " << a << ";b = " << b << endl;//20 10
	mySwap03(a, b);//���ô���:�βη����仯������ʵ��
	cout << "���ô���_������:a = " << a << ";b = " << b << endl;//10 20
	system("pause");
	return 0;
}
