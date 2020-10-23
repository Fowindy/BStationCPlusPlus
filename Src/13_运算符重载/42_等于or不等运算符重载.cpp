#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	//构造函数初始化局部变量
	Person(string name, int age)
	{
		m_Age = age;
		m_Name = name;
	}
private:
	int m_Age;
	string m_Name;
};
void test01()
{
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2)
	{
	}
	else
	{

	}
}
int main()
{
	system("pause");
	return 0;
}
