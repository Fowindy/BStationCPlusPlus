#include <iostream>
#include <string>
using namespace std;
//����const�������޸�
void showValue(const int& val)
{
	//val = 1000;//����const��Ϊֻ��,�����޸�
	cout<<"val = "<<val<<endl;
}
int main10()
{
	//��������
	//ʹ�ó���:���������β�,��ֹ�����
	int a = 10;
	//int& ref = a;//�Ϸ�
	//int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
	//����const֮��,�������������޸� int temp = 10;const int& ref = temp;
	const int& ref = 10;
	//ref = 20;//����const֮���Ϊֻ��,�������޸�

	int b = 100;
	showValue(b);//val = 1000
	cout << "b = " << b << endl;//b = 1000

	system("pause");
	return 0;
}
