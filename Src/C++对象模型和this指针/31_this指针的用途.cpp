#include <iostream>
#include <string>
using namespace std;
//this指针的用途
//2.返回对象本身用*this
class Person1
{
public:
	Person1(int age)
	{
		//this指针指向的被调用的成员函数所属的对象p1
		this->age = age;
	}
	int age;
};
//1.解决名称冲突
void test1()
{
	Person1 p1(18);
	cout<<"p1的年龄为:"<<p1.age<<endl;
}
int main()
{
	test1();//18
	system("pause");
	return 0;
}
