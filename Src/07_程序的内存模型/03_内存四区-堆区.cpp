#include <iostream>
#include <string>
using namespace std;
int* func()
{
	//����new�ؼ���,���Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ��һ���ֲ�����,����ջ��,
	int* p = new int(10);//��ָ����ն����������ݵĵ�ַ,ָ�뱣��������Ƿ����˶���
	return p;
}
int main03()
{
	//�ڶ�����������
	int *p = func();
	cout << *p << endl;//10
	cout << *p << endl;//10
	system("pause");
	return 0;
}
