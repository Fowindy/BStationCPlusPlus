#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
using namespace std;
//34_list容器_排序案例
//按照年龄进行升序,如果年龄相同按照身高进行降序
//自定义英雄类
class Hero
{
public:
	Hero(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;//姓名
	int m_Age;//年龄
	int m_Height;//身高
};
void PrintHero(const list<Hero>& L)
{
	for (list<Hero>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名:" << (*it).m_Name << "  年龄:" << it->m_Age << "  身高:" << it->m_Height << endl;
	}
}
void test34()
{
	list<Hero> L;
	//实例化英雄对象
	Hero h1("刘备", 35, 175);
	Hero h2("曹操", 45, 180);
	Hero h3("孙权", 40, 170);
	Hero h4("赵云", 25, 190);
	Hero h5("张飞", 35, 160);
	Hero h6("关羽", 35, 200);
	//添加数据到list
	L.push_back(h1);
	L.push_back(h2);
	L.push_back(h3);
	L.push_back(h4);
	L.push_back(h5);
	L.push_back(h6);
	PrintHero(L);
}
int main()
{
	test34();
	system("pause");
	return 0;
}
