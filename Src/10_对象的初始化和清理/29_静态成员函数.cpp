#include <iostream>
#include <string>
using namespace std;
//��̬��Ա����
//1.���еĶ�����ͬһ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person9
{
public:
	//��̬��Ա����
	static void func()
	{
		cout<<"static void func()�ĵ���"<<endl;
	}
};
//��̬��Ա���������ַ��ʷ�ʽ
void test9()
{
	//1.ͨ��������ʵ���
	Person9 p;
	p.func();
	//2.ͨ����������
	Person9::func();
}
int main()
{
	test9();
	system("pause");
	return 0;
}
