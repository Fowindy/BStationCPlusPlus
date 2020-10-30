#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//61_常用查找算法_count_统计
//1.统计内置数据类型
void test61()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	v.push_back(10);
	v.push_back(10);
	int num = count(v.begin(), v.end(), 10);
	cout << "容器中该元素的个数为:" << num << endl;//容器中该元素的个数为:4
}
//2.统计自定义数据类型
class Person61
{
public:
	Person61(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//自定义数据类型需要告诉算法查找规则(重载==)
	//此处参数必须用const修饰,因为查找算法要求参数进来后不可修改
	bool operator==(const Person61& p)
	{
		//年龄是否相等
		return this->m_Age == p.m_Age;
	}
	string m_Name;
	int m_Age;
};
void test061()
{
	vector<Person61>v;
	//实例化人员对象
	Person61 p1("刘备", 35);
	Person61 p2("关羽", 35);
	Person61 p3("张飞", 35);
	Person61 p4("赵云", 30);
	Person61 p5("曹操", 25);
	//将对象插入容器
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//查找目标
	Person61 p("诸葛亮", 35);
	//查找
	int num = count(v.begin(), v.end(), p);
	cout << "和诸葛亮同岁的人员个数为:" << num << endl;
	//和诸葛亮同岁的人员个数为:3
}
int main61()
{
	test61();
	test061();
	system("pause");
	return 0;
}
