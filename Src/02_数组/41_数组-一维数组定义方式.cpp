#include <iostream>
#include <string>
using namespace std;
int main41()
{
	//����
	//1, �������� ������[���鳤��];
	//����Ԫ�ص��±��Ǵ�0��ʼ��
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//��������Ԫ��
	std::cout<<arr[3]<<std::endl;//40
	//2, �������� ������[���鳤��]= (ֵ1,ֵ2 ..);
	//����ڳ�ʼ�����ݵ�ʱ��,û����ȫ��д��,����0��������
	int arr2[5] = { 10,20,30,40,50 };
	//����ѭ��,��������е�Ԫ��
	for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
	{
		cout<<arr2[i]<<endl;
	}
	//3, �������� ������[] = (ֵ1, ֵ2 ...);
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
	//����ѭ��,��������е�Ԫ��
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}
