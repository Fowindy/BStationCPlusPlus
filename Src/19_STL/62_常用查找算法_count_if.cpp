#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//62_常用查找算法_count_if
//1.统计内置数据类型
//定义查找谓词
class MyCount
{
public:
	bool operator()(int val)
	{
		return val >= 30;//大于等于30
	}
};
void test62()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(20);
	v.push_back(30);
	int num = count_if(v.begin(), v.end(), MyCount());
	cout << "大于等于30的数个数为:" << num << endl;
	//大于等于30的数个数为:5
}
//2.统计自定义数据类型
class Person62
{
public:
	Person62(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
//定义自定义查找谓词
class CountPerson
{
public:
	bool operator()(Person62& p)
	{
		return p.m_Age < 35;//小于35岁
	}
};
void test062()
{
	vector<Person62>v;
	Person62 p1("刘备", 35);
	Person62 p2("关羽", 35);
	Person62 p3("张飞", 35);
	Person62 p4("赵云", 30);
	Person62 p5("曹操", 25);
	//将对象插入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//查找
	int num = count_if(v.begin(), v.end(), CountPerson());
	cout << "小于35岁的人个数为:" << num << endl;//小于35岁的人个数为:2
}
int main()
{
	test62();
	test062();
	system("pause");
	return 0;
}
