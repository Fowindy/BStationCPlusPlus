#include <iostream>
#include <string>
using namespace std;
int main48()
{
	//��ά����������;
	//1.���Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6},
	};
	std::cout<<"��ά����ռ�õ��ڴ�ռ�Ϊ:"<<sizeof(arr)<<std::endl;//24
	std::cout<<"��ά�����һ��ռ�õ��ڴ�ռ�Ϊ:"<<sizeof(arr[0])<<std::endl;//12
	std::cout<<"��ά�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ:"<<sizeof(arr[0][0])<<std::endl;//4
	std::cout<<"��ά��������Ϊ:"<<sizeof(arr)/sizeof(arr[0])<<std::endl;//2
	std::cout<<"��ά��������Ϊ:"<<sizeof(arr[0])/sizeof(arr[0][0])<<std::endl;//3
	std::cout<<"��ά����Ԫ�صĸ���Ϊ:"<<sizeof(arr)/sizeof(arr[0][0])<<std::endl;//6

	//2.���Բ鿴��ά������׵�ַ
	std::cout<<"��ά������׵�ַΪ:"<<(int)arr<<std::endl;//15727172
	std::cout << "��ά�����һ��Ԫ�ص��׵�ַΪ:" << (int)&arr[0][0] << std::endl;//15727172
	std::cout << "��ά����ڶ���Ԫ�ص��׵�ַΪ:" << (int)&arr[0][1] << std::endl;//15727176
	std::cout<<"��ά�����һ�е��׵�ַΪ:"<<(int)arr[0]<<std::endl;//15727172
	std::cout<<"��ά����ڶ��е��׵�ַΪ:"<<(int)arr[1]<<std::endl;//15727184

	system("pause");
	return 0;
}
