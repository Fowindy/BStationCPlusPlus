#include <iostream>
#include <string>
using namespace std;
//ֵ����_ʵ���������ֽ��н����ĺ���(ֻ�ı��ββ��ı�ʵ��)
void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"ֵ���ݿɸı��ڲ��β�:swap01 num1 = "<<num1<<",swap01 num2 = "<<num2<<endl;//20,10
}
//��ַ����_ʵ���������ֽ��н����ĺ���(���ı��β�Ҳ�ı�ʵ��)
void swap02(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "��ַ���ݿɸı��ڲ��β�:swap02 num1 = " << *p1 << ",swap02 num2 = " << *p2 << endl;//20,10
}
int main62()
{
	//ָ��ͺ���
	//1.ֵ����
	int num1 = 10;
	int num2 = 20;
	swap01(num1, num2);
	cout << "ֵ���ݲ��ı�����ʵ��:num1 = " << num1 << ",num2 = " << num2 << endl;//10,20
	//2.��ַ����
	swap02(&num1, &num2);
	cout << "��ַ���ݿɸı�����ʵ��:num1 = " << num1 << ",num2 = " << num2 << endl;//20,10
	system("pause");
	return 0;
}
