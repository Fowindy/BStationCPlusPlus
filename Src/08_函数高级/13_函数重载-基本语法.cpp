#include <iostream>
#include <string>
using namespace std;
//��������
//�����ú�������ͬ,��߸�����
//�����������������
//1.ͬһ����������(ȫ��������)
//2.����������ͬ
//3.�����������Ͳ�ͬ���߸�����ͬ,����˳��ͬ
void func()//��һ��
{
	cout<<"func�ĵ���"<<endl;
}
void func(int a)//�ڶ���
{
	cout<<"func(int a)�ĵ���"<<endl;
}
void func(double a)//������
{
	cout << "func(double a)�ĵ���" << endl;
}
void func(int a, double b)//���ĸ�
{
	cout << "func(int double)�ĵ���" << endl;
}
void func(double a, int b)//�����
{
	cout << "func(double int)�ĵ���" << endl;
}
//ע������
//1.�����ķ���ֵ��������Ϊ�������ص�����,��Ϊ�����з���ֵ,���Բ���Ҫ���ܺ�������ֵ�ı���
//int void func(double a, int b)//����
//{
//	cout << "func(double int)�ĵ���" << endl;
//}
int main13()
{
	func();//���õ�һ��
	func(10);//���õڶ���
	func(3.14);//���õ�����
	func(10, 3.14);//���õ��ĸ�
	func(3.14, 10);//���õ����
	system("pause");
	return 0;
}
