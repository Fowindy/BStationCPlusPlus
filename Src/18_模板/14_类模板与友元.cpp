#include <iostream>
#include <string>
using namespace std;
template<typename T1, typename T2>
class Person14
{
	//1.全局函数类内友元实现
	friend void PrintPerson(Person14<T1, T2>& p)
	{
		cout << "全局函数类内友元实现:name = " << p.m_Name << ";age = " << p.m_Age << endl;
	}
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
int main()
{
	test14();//全局函数类内友元实现:name = Tom;age = 18
	system("pause");
	return 0;
}
