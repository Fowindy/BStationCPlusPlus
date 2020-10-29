#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
//42_set容器_排序(自定义类型)
class Hero42
{
public:
	Hero42(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void test42()
{
	set<Hero42>s1;
	//实例化英雄对象
	Hero42 h1("刘备", 23);
	Hero42 h2("关羽", 27);
	Hero42 h3("张飞", 25);
	Hero42 h4("赵云", 21);
	//遍历
	for (set<Hero42>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名:" << it->m_Name << "\t年龄:" << it->m_Age << endl;
	}
}
int main()
{
	test42();
	system("pause");
	return 0;
}
