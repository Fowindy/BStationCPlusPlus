#include <iostream>
#include <string>
using namespace std;
//�������ص�ע������
//1.������Ϊ���ص�����
void func(int& a)//��һ��    //int& a = 10;���Ϸ�
{
	cout << "func(int& a)�ĵ���" << endl;
}
void func(const int& a)//�ڶ���	//const int& a = 10; �Ϸ�
{
	cout << "func(const int& a)�ĵ���" << endl;
}
//2.������������Ĭ�ϲ���(���ر���дĬ�ϲ���)
void fun2(int a,int b = 10)
{
	cout << "func(int a)�ĵ���" << endl;
}
void fun2(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
int main()
{
	int a = 10;
	func(a);//���õ�һ��,��Ϊa�Ǳ���,�ɶ���д
	func(10);//���õڶ���,10Ϊ����
	//fun2(a);//��������������Ĭ�ϲ���,���ֶ�����,����,���������������
	system("pause");
	return 0;
}
