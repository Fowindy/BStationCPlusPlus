#include <iostream>
#include <string>
using namespace std;
int main()
{
	//1.����5ֻС�����������
	int arr[5] = { 300,350,200,400,250 };
	//2.���������ҵ����ֵ
	int max = 0;//�ȶ���һ�����ֵΪ0
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		if (max <= arr[i]) 
		{
			max = arr[i];
		}
	}
	cout<<"5ֻС�������ص�С������Ϊ:"<<max<<endl;
	system("pause");
	return 0;
}
