#include <iostream>
#include <string>
using namespace std;
int main45()
{
	//ʵ������Ԫ������
	//1.��������
	int arr[] = { 1,2,3,4,5,6};
	std::cout<<"��������ǰ:"<<std::endl;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		std::cout<<arr[i]<<"\t";
	}
	cout<<endl;
	//2.ʵ������
	//2.1.��¼��ʼ�±�λ��
	int startIndex = 0;
	//2.2.��¼�����±�λ��
	int endIndex = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = 0;
	while (startIndex <= endIndex)
	{
		//2.3.��ʼ�±�������±��Ԫ�ػ���
		temp = arr[startIndex];
		arr[startIndex] = arr[endIndex];
		arr[endIndex] = temp;
		//2.4.��ʼ�±��,�����±��
		startIndex++;
		endIndex--;
	}
	std::cout << "�������ú�:" << std::endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		std::cout << arr[i] << "\t";
	}
	system("pause");
	return 0;
}
