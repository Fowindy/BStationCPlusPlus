#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//57_常用查找算法_find
//1.查找 内置数据类型
void test57()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it != v.end())
	{
		cout << "找到元素:" << *it << endl;//找到元素:5
	}
	else
	{
		cout << "未找到元素!" << endl;
	}
}
//2.查找 自定义数据类型
class Person57
{
public:
	Person57(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//因为是自定义数据类型,需要重载==号定义查找规则,让底层find知道如何对比person数据类型
	bool operator==(const Person57& p)//必须加上const
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test057()
{
	vector<Person57>v;
	//实例化Person类型对象
	Person57 p1("aaa", 111);
	Person57 p2("bbb", 222);
	Person57 p3("ccc", 333);
	Person57 p4("ddd", 444);
	Person57 p5("eee", 555);
	//把对象加载进容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//实例化查找目标对象
	Person57 pTarget("bbb", 222);
	//查找
	vector<Person57>::iterator it = find(v.begin(), v.end(), pTarget);
	if (it != v.end())
	{
		cout << "找到元素:姓名:" << it->m_Name << "  年龄:" << it->m_Age << endl;
		//找到元素:姓名:bbb  年龄:222
	}
	else
	{
		cout << "未找到元素!" << endl;
	}
}
int main()
{
	test57();
	test057();
	system("pause");
	return 0;
}
