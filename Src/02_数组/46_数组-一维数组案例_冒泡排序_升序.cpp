#include <iostream>
#include <string>
using namespace std;
int main46()
{
	//����ð������ʵ����������
	int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	std::cout<<"����ǰ:"<<std::endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	//��ʼð������
	//�ܹ���������Ϊ:Ԫ�ظ���-1
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0])-1 ; i++)
	{
		//�ڴ�ѭ���Աȴ���:Ԫ�ظ���-1-��ǰ����
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
		{
			//�����һ�����ֱȵڶ�����,�򽻻�˳��
			if (arr[j] >= arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	std::cout << "�����:" << std::endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
