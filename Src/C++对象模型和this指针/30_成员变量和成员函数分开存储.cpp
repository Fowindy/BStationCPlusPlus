#include <iostream>
#include <string>
using namespace std;
//��Ա�����ͳ�Ա�����Ƿֿ��洢��
class Person0
{
	int m_A;//�Ǿ�̬�ĳ�Ա���� �����������
};
void test0()
{
	Person0 p;
	//�ն���ռ���ڴ�ռ�Ϊ:1
	//C++�ı��������ÿ���ն���Ҳ����һ���ֽڵĿռ�,��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿһ���ն���ҳӦ����һ����һ�޶����ڴ��ַ
	cout<<"size of p = "<<sizeof(p)<<endl;//1
}
void test01()
{
	Person0 p;
	cout << "size of p = " << sizeof(p) << endl;//4
}
int main()
{
	test0();
	test01();
	system("pause");
	return 0;
}
