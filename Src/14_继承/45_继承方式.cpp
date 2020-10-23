#include <iostream>
#include <string>
using namespace std;
//继承方式
//父类
class Base1
{
public:
	int m_A;//父类公共权限
protected:
	int m_B;//父类保护权限
private:
	int m_C;//父类私有权限
};
//1.子类1---继承方式:公共继承
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类公共权限	子类可以访问	子类权限为公共权限
		m_B = 10;//父类保护权限	子类可以访问	子类权限为保护权限
		//m_C = 10;//父类私有权限		子类不可访问	
	}
};
//2.子类2---继承方式：保护继承
class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 20;//父类公共权限	子类可以访问	子类权限为保护权限
		m_B = 20;//父类保护权限	子类可以访问	子类权限为保护权限
		//m_C = 20;//父类私有权限	子类不可访问	
	}
};
//3.子类3---继承方式:私有继承
class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 30;//父类公共权限 子类可以访问	子类权限为私有权限
		m_B = 30;//父类保护权限 子类可以访问	子类权限为私有权限
		//m_C = 30;//父类私有权限 子类不可访问 
	}
};
void test45()
{
	cout << "------------------继承方式:公共继承----------------" << endl;
	Son1 s1;
	s1.m_A = 100;//子类权限为公共权限 类外可访问
	//s1.m_B = 100;//子类权限为保护权限 类内可以访问，类外不能访问
	cout << "------------------继承方式:保护继承----------------" << endl;
	Son2 s2;
	//s2.m_A = 200;//子类权限为保护权限	内可以访问，类外不能访问
	cout << "------------------继承方式:私有继承----------------" << endl;
	Son3 s3;
	//s3.m_A = 300;//到Son3中 变为 私有成员 类外访问不到
}
int main()
{
	system("pause");
	return 0;
}
