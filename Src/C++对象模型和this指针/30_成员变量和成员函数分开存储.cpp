#include <iostream>
#include <string>
using namespace std;
//��Ա�����ͳ�Ա�����Ƿֿ��洢��
class Person0
{

};
void test0()
{
	Person0 p;
	//�ն���ռ���ڴ�ռ�Ϊ:1
	//C++�ı��������ÿ���ն���Ҳ����һ���ֽڵĿռ�,��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿһ���ն���ҳӦ����һ����һ�޶����ڴ��ַ
	cout<<"size of p = "<<sizeof(p)<<endl;//1
}
int main()
{
	test0();
	system("pause");
	return 0;
}
