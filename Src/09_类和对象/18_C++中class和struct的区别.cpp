#include <iostream>
#include <string>
using namespace std;
//C++��class��struct������
//struct Ĭ��Ȩ���� ���� public
//class Ĭ��Ȩ���� ˽�� private
class C1
{
	int m_A;//Ĭ��Ȩ����˽��
};
struct C2
{
	int m_A;//Ĭ��Ȩ���ǹ���
};
int main18()
{
	C1 c1;
	//c1.m_A = 100;//��class��Ĭ��Ȩ��˽��,���ⲻ�ܷ���;
	C2 c2;
	c2.m_A = 100;//��struct��Ĭ��Ȩ�޹���,������Է���;
	system("pause");
	return 0;
}
