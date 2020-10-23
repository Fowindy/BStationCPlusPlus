#include <iostream>
#include <string>
using namespace std;
class Person42
{
private:
	int m_Age;
	string m_Name;
public:
	//构造函数初始化局部变量
	Person42(string name, int age)
	{
		m_Age = age;
		m_Name = name;
	}
	//2.相等运算符重载
	bool operator==(Person42& p)
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
void test42()
{
	Person42 p1("Tom", 18);
	Person42 p2("Tom", 19);
	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}
}
int main()
{
	test42();
	system("pause");
	return 0;
}
