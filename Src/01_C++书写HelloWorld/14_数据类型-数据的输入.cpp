#include <iostream>
#include <string>
using namespace std;
int main14()
{
	//����:���ڴӼ��̻�ȡ����
	//�ؼ��� : cin
	//�﷨ : cin >> ����

	//1������
	int a = 0;
	std::cout<<"������ͱ���a��ֵ:"<<std::endl;
	std::cin>>a;
	std::cout<<"���ͱ���a = "<<a<<std::endl;
	//2��������
	float f = 3.1415926f;
	std::cout<<"��������ͱ���f��ֵ:"<<std::endl;
	std::cin>>f;
	std::cout<<"�����ͱ���f = "<<f<<std::endl;
	//3���ַ���
	char ch = 'a';
	std::cout<<"����ַ��ͱ�����ֵch:"<<std::endl;
	std::cin>>ch;
	std::cout<<"�ַ��ͱ���ch = "<<ch<<std::endl;
	//4���ַ�����
	string str = "";//C++�ַ������Ͳ��ܳ�ʼ����NULL
	std::cout<<"����ַ����ͱ���str��ֵ:"<<std::endl;
	std::cin>>str;
	std::cout<<"�ַ����ͱ���str = "<<str<<std::endl;
	//5����������
	bool flag = true;
	std::cout<<"����������ͱ���flag��ֵ:"<<std::endl;
	std::cin>>flag;
	std::cout<<"�������ͱ���flag = "<<flag<<std::endl;//���1����0;1������,0�����;��0��ֵ�ַ�Ϊ��,����Ϊ��
	system("pause");
	return 0;
}
