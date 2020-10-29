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
class compareHero
{
public:
	bool operator()(const Hero42& h1, const Hero42& h2)
	{
		//指定排序规则:按照年龄降序
		return h1.m_Age > h2.m_Age;
	}
};
void test42()
{
	//自定义数据类型,必须要告诉set的排序规则(使用仿函数)
	set<Hero42, compareHero>s1;
	//实例化英雄对象
	Hero42 h1("刘备", 23);
	Hero42 h2("关羽", 27);
	Hero42 h3("张飞", 25);
	Hero42 h4("赵云", 21);
	//写入数据到set
	s1.insert(h1);
	s1.insert(h2);
	s1.insert(h3);
	s1.insert(h4);
	//遍历
	for (set<Hero42, compareHero>::iterator it = s1.begin(); it != s1.end(); it++)
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
