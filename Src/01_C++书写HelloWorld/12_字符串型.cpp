#include <iostream>
#include <string>//��C++����ַ���ʱ��Ҫ�������ͷ�ļ�
using namespace std;
int main12()
{
	//�ַ�����:���ڱ�ʾһ���ַ�
	//1.C����ַ�����
	char chs[] = "�ַ���ֵ";
	//ע������1:char �ַ�����[]
	//ע������2:�Ⱥź���Ҫ��˫���Ű��������ַ���
	char str1[] = "C����ַ���:helloWorld";
	std::cout<<str1<<std::endl;
	//2.C++����ַ���:
	//����һ��ͷ�ļ�	#include <string>
	string str2 = "C++����ַ���:helloWorld";
	std::cout<<str2<<std::endl;
	system("pause");
	return 0;
}
