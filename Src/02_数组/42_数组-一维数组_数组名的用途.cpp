#include <iostream>
#include <string>
using namespace std;
int main42()
{
	//����������;
	//1, ����ͳ�������������ڴ��еĳ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout<<"��������ռ�õ��ڴ�ռ�Ϊ:"<<sizeof(arr)<<std::endl;//40
	cout<<"ÿ��Ԫ��ռ�õ��ڴ�ռ�Ϊ:"<<sizeof(arr[0])<<endl;//4
	cout<<"������Ԫ�صĸ���Ϊ:"<<sizeof(arr)/sizeof(arr[0])<<endl;//10
	//2, ���Ի�ȡ�������ڴ��е��׵�ַ
	std::cout<<"�������ڴ��е��׵�ַΪ:"<<(int)arr<<std::endl;//6290576
	cout << "�����е�һ��Ԫ�صĵ�ַΪ:" << (int)&arr[0] << endl;//6290576
	cout << "�����еڶ���Ԫ�صĵ�ַΪ:" << (int)&arr[1] << endl;//6290580
	//�������ǳ���,�����Խ��и�ֵ����
	//arr = 100;
	system("pause");
	return 0;
}
