#include <iostream>
#include <string>
using namespace std;
//����Բ���ʳ���
const double PI = 3.14;
//���һ��Բ��,��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ:2*PI*�뾶
//class �������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	//���ԣ�
	//�뾶
	int m_r;

	//��Ϊ:(����)
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main15()
{
	//ͨ��Բ��,���������Բ(����)
	Circle cl;
	//��Բ��������Խ��и�ֵ
	cl.m_r = 12;
	cout<<"�뾶Ϊ:"<<cl.m_r<<"��Բ���ܳ�Ϊ:"<<cl.calculateZC()<<endl;
	system("pause");
	return 0;
}
