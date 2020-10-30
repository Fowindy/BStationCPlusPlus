#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//58_常用查找算法_find_if
//1.查找内置数据类型
//定义查找谓词
class GreaterSix
{
public:
	bool operator()(int val)
	{
		return val > 6;//大于6返回true
	}
};
void test58()
{
	vector<int>v;
	//添加数据
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找大于6的数
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterSix());
	if (it != v.end())
	{
		cout << "找到大于6的元素:" << *it << endl;
		//找到大于6的元素:7
	}
}
//2.查找自定义数据类型
class Person58
{
public:
	Person58(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
//定义自定义数据类型的谓词
class AgeGreater20
{
public:
	bool operator()(Person58& p)
	{
		return p.m_Age > 20;
	}
};
void test058()
{
	vector<Person58>v;
	//实例化自定义类型对象
	Person58 p1("aaa", 10);
	Person58 p2("bbb", 20);
	Person58 p3("ccc", 30);
	Person58 p4("ddd", 40);
	//加载数据到容器
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	//查找
	vector<Person58>::iterator it = find_if(v.begin(), v.end(), AgeGreater20());
	if (it != v.end())
	{
		cout << "找到元素:姓名:" << it->m_Name << "  年龄:" << it->m_Age << endl;
		//找到元素:姓名:ccc  年龄:30
	}
	else
	{
		cout << "未找到元素!" << endl;
	}
}
int main58()
{
	test58();
	test058();
	system("pause");
	return 0;
}
