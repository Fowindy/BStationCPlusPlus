#include <iostream>
#include <string>
using namespace std;
//thisָ�����;
//2.���ض�������*this
class Person1
{
public:
	Person1(int age)
	{
		//thisָ��ָ��ı����õĳ�Ա���������Ķ���p1
		this->age = age;
	}
	int age;
};
//1.������Ƴ�ͻ
void test1()
{
	Person1 p1(18);
	cout<<"p1������Ϊ:"<<p1.age<<endl;
}
int main()
{
	test1();//18
	system("pause");
	return 0;
}
