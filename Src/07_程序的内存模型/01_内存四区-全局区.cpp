#include <iostream>
#include <string>
using namespace std;
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const���ε�ȫ�ֱ���
const int c_g_a = 10;
const int c_g_b = 10;
int main01()
{
	//ȫ����
	//ȫ������ŵ�����:ȫ�ֱ���,��̬����,����
	//����һ����ͨ�ľֲ�����
	//�ֲ�����:ֻҪд�ں����ڲ��ı������оֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ:" << (int)&a << endl;//16578468
	cout << "�ֲ�����b�ĵ�ַΪ:" << (int)&b << endl;//16578456

	cout << "ȫ�ֱ���g_a�ĵ�ַΪ:" << (int)&g_a << endl;//3260468
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ:" << (int)&g_b << endl;//3260472

	//��̬����:����ͨ����ǰ�����static,���ھ�̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ:" << (int)&s_a << endl;//3260476
	cout << "��̬����s_b�ĵ�ַΪ:" << (int)&s_b << endl;//3260480

	//����
	//�ַ�������
	cout<<"�ַ��������ĵ�ַΪ:"<<(int)&"hello world"<<endl;
	//const���εı���
	//const���ε�ȫ�ֱ���,const���εľֲ�����
	cout << "const���ε�ȫ�ֱ���c_g_a�ĵ�ַΪ:" << (int)&c_g_a << endl;//3260476
	cout << "const���ε�ȫ�ֱ���c_g_b�ĵ�ַΪ:" << (int)&c_g_b << endl;//3260480

	int c_l_a = 10;//c-const g-global l-local
	int c_l_b = 10;
	cout << "const���εľֲ�����c_l_a�ĵ�ַΪ:" << (int)&c_l_a << endl;//3260476
	cout << "const���εľֲ�����c_l_b�ĵ�ַΪ:" << (int)&c_l_b << endl;//3260480
	system("pause");
	return 0;
}
