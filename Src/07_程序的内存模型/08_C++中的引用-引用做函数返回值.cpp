#include <iostream>
#include <string>
using namespace std;
//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;
	return a;
}
//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//static���γɾ�̬���������ֲ�������������,��ջ���ᵽȫ����,ȫ�����������ڳ��������ϵͳ�ͷ�
	return a;
}
int main08()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;//10---��һ�ν����ȷ,����Ϊ���������˱���
	cout << "ref = " << ref << endl;//2073672672---�ڶ��ν������,��Ϊa���ڴ��Ѿ��ͷ�
	cout<<"----------------------------------"<<endl;
	int& ref1 = test02();
	cout << "ref1 = " << ref1 << endl;//10
	cout << "ref1 = " << ref1 << endl;//10
	//�����ĵ��ÿ�����Ϊ��ֵ
	//test02()���صľ���a������,�ٸ�ֵ1000,�൱�ھ͵ȼ���a = 1000
	//ref2����a�ı���,����refҲ����1000
	test02() = 1000;//��������ķ���ֵ������,����������ÿ�����Ϊ��ֵ
	cout << "ref1 = " << ref1 << endl;//1000
	cout << "ref1 = " << ref1 << endl;//1000
	system("pause");
	return 0;
}
