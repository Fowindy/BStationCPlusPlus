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
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա����,�޷����ֵ������ĸ������
		cout<<"static void func()�ĵ���"<<endl;
	}
	//��̬��Ա����(��̬��Ա������������������)
	static int m_A;
	//�Ǿ�̬��Ա����
	int m_B;
	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	//��̬��Ա����
	static void func2()
	{
		cout << "static void func2()�ĵ���" << endl;
	}
};
//��̬��Ա���������������ʼ��
int Person9::m_A = 0;
//��̬��Ա���������ַ��ʷ�ʽ
void test9()
{
	//1.ͨ��������ʵ���
	Person9 p;
	p.func();
	//2.ͨ����������
	Person9::func();
	//Person9::func2();//������ʲ���˽�еľ�̬��Ա����
}
int main()
{
	test9();
	system("pause");
	return 0;
}
