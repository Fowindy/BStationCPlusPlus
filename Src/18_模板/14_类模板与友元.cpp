#include <iostream>
#include <string>
using namespace std;
//2.3.类外实现,要先声明Person14类模板的存在
template<typename T1, typename T2>
class Person14;
//2.2.如果全局函数是类外实现,需要让编译器提前知道这个函数的存在
template<typename T1, typename T2>
void PrintPerson2(Person14<T1, T2> &p)
{
	cout << "全局函数类外实现_类内声明:name = " << p.m_Name << ";age = " << p.m_Age << endl;
}
template<typename T1, typename T2>
class Person14
{
	//1.全局函数类内友元实现
	friend void PrintPerson(Person14<T1, T2> &p)
	{
		cout << "全局函数类内友元实现:name = " << p.m_Name << ";age = " << p.m_Age << endl;
	}
	//2.全局函数类内声明_类外实现
	//2.1.需要加空模板参数列表
	friend void PrintPerson2<>(Person14<T1, T2> &p);
public:
	Person14(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
void test14()
{
	Person14<string, int>p1("Tom", 18);//全局函数类内友元实现:name = Tom;age = 18
	PrintPerson(p1);
}
void test014()
{
	Person14<string, int>p1("Jerry", 23);
	PrintPerson2(p1);
}
int main()
{
	test14();//全局函数类内友元实现:name = Tom;age = 18
	test014();//全局函数类外实现_类内声明:name = Jerry;age = 23
	system("pause");
	return 0;
}
