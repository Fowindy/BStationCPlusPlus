#include <iostream>
#include <string>
using namespace std;
//ֵ����
//���庯��,ʵ���������ֽ�������
//�����������Ҫ����ֵ,������ʱ�򷵻�ֵ����Ϊvoid
void swap(int num1, int num2)
{
	std::cout << "����ǰ:num1 = " << num1 << ",num2 = " << num2 << std::endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	std::cout << "������:num1 = " << num1 << ",num2 = " << num2 << std::endl;
	//return; ����ֵΪvoid��ʱ��,���Բ�дreturn
}
int main52()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//20
	//��������ֵ���ݵ�ʱ��,�������βη����ı�,������Ӱ��ʵ��
	swap(a, b);
	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//20
	system("pause");
	return 0;
}
