#include <iostream>
#include <string>
using namespace std;
class Person3
{
public:
	//this指针的本质是指针常量 指针的指向不可以修改
	//this相当于Person3* const this;
	//在成员函数后面加const,修饰的是this指向,让指针指向的值也不可以修改
	//常函数
	void showPerson() const//等价于const Person3* const this;
	{
		//this->m_Age = 100;//不加const可以修改,加const不可以修改
		//this = NULL;//this指针是不可以修改指针指向的
		this->m_B = 100;
	}
	void func()
	{
		m_Age = 300;
	}
	int m_Age;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加上关键字mutable
};
void test3()
{
	Person3 p;
	p.showPerson();
}
void test31()
{
	const Person3 p;//在对象前加const,变成常对象
	//p.m_Age = 100;//p对象的属性值不允许修改
	p.m_B = 200;//mutable修饰的特殊值,在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//常对象,不可以调用普通成员函数,因为普通成员函数可以修改属性
}
int main()
{
	system("pause");
	return 0;
}
