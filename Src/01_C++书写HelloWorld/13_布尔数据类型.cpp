#include <iostream>
#include <string>
using namespace std;
int main()
{
	//������������:
	//����:�����������ʹ������ٵ�ֵ
	//bool����ֻ������ֵ :
	//true---��(������1)
	//false---��(������0)
	//bool����ռ1���ֽڴ�С

	//1������bool��������
	bool flag = true;//true������
	std::cout<<flag<<std::endl;
	flag = false;//false�����
	std::cout<<flag<<std::endl;
	//������1������0�����
	//2���鿴bool������ռ�ڴ�ռ�
	std::cout<<"bool������ռ�ڴ�ռ�Ϊ:"<<sizeof(flag)<<std::endl;
	system("pause");
	return 0;
}
