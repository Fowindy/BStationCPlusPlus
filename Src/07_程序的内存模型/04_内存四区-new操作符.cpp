#include <iostream>
#include <string>
using namespace std;
//new������
//1.new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}
void test01()
{
	int *p = func();
	cout << *p << endl;//10
	cout << *p << endl;//10
	cout << *p << endl;//10
	//����������,�ɳ���Ա������,����Ա�����ͷ�
	//������ͷŶ���������,���ùؼ���delete
	delete p;
	//cout<<*p<<endl;//�ڴ��Ѿ����ͷ�,�ٴη��Ǹ��ʾ��ǷǷ�����,�ᱨ��
}
//2.�ڶ�������new��������
void test02()
{
	//����10���������ݵ�����,�ڶ���
	int* arr = new int[10];//10����������10��Ԫ��
	//���鸳ֵ����
	for (int i = 0; i < 10 ; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ 100~109
	}
	//��ӡ����
	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<endl;
	}
	//�ͷŶ�������
	//�ͷ������ʱ��,Ҫ��[]�ſ���
	delete[] arr;
}
int main04()
{
	test01();
	test02();
	system("pause");
	return 0;
}
