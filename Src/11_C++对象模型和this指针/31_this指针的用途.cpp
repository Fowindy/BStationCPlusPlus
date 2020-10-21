#include <iostream>
#include <string>
using namespace std;
//this指针的用途
class Person1
{
public:
	Person1(int age)
	{
		//this指针指向的被调用的成员函数所属的对象p1
		this->age = age;
	}
	Person1& Person1AddAge(Person1 &p)
	{
		this->age += p.age;
		//this是指向被调用的成员函数所属的对象p2的指针,而*this则是p2对象本体
		return *this;
	}
	int age;
};
//1.解决名称冲突
void test1()
{
	Person1 p1(18);
	cout<<"p1的年龄为:"<<p1.age<<endl;
}
//2.返回对象本身用*this
void test11()
{
	Person1 p1(10);
	Person1 p2(10);
	//链式编程思想
	p2.Person1AddAge(p1).Person1AddAge(p1).Person1AddAge(p1);
	cout<<"p2的年龄为:"<<p2.age<<endl;//40
}
int main31()
{
	test1();//18
	test11();//20
	system("pause");
	return 0;
}
