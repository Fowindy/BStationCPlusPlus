#include <iostream>
#include <string>
using namespace std;
//���õı���
//����������,�Զ�ת��Ϊ:int* const ref = &a;
void func(int& ref)
{
	//ref������,�Զ�������Ϊ:*ref = 100;
	ref = 100;
}
int main09()
{
	int a = 10;
	//����������,���Զ�ת��Ϊ:int* const ref = &a;ָ�볣����ָ�벻���Ը�,Ҳ������Ϊʲô���ɸ�
	int& ref = a;
	//�ڲ�����ref������,�Զ�������ת��Ϊ������:*ref = 20
	ref = 20;
	cout<<"a = "<<a<<endl;//20
	cout<<"ref = "<<ref<<endl;//20
	func(a);
	cout << "a = " << a << endl;//100
	cout << "ref = " << ref << endl;//100
	system("pause");
	return 0;
}
