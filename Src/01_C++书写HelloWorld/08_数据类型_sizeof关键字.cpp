#include <iostream>
using namespace std;
//����sizeof�ؼ��ֿ���ͳ������������ռ�ڴ�Ĵ�С
int main8()
{
	//����: short(2)	 int(4) long(4) long long(8)
	short num1 = 10;
	std::cout<<"shortռ�õ��ڴ�ռ�Ϊ:"<<sizeof(num1)<<std::endl;
	int num2 = 10;
	std::cout<<"intռ�õ��ڴ�ռ�Ϊ:"<<sizeof(num2)<<std::endl;
	long num3 = 10;
	std::cout<<"longռ�õ��ڴ�ռ�Ϊ:"<<sizeof(num3)<<std::endl;
	long long num4 = 10;
	std::cout<<"long long ռ�õ��ڴ�ռ�Ϊ:"<<sizeof(num4)<<std::endl;

	//���ͽ���: short <int <= long <= long long
	system("pause");
	return 0;
}
