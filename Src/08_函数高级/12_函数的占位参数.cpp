#include <iostream>
#include <string>
using namespace std;
//ռλ����
//�﷨:����ֵ���� ������(��������){}
//Ŀǰ�׶ε�ռλ����,���ǻ��ò���,����γ��л��õ�
//ռλ������������Ĭ�ϲ���
void func(int a, int = 10)
{
	cout<<"This is func."<<endl;
}
int main12()
{
	func(20);//ռλ�������û��Ĭ��ֵ,�������д
	system("pause");
	return 0;
}
