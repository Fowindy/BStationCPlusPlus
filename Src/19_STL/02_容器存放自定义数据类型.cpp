#include <iostream>
#include <string>
using namespace std;
#include <vector>
//容器存放自定义数据类型
class Person01
{
	friend void test02();
public:
	Person01(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	string m_Name;
	int m_Age;
};
//存放自定义类型的对象
void test02()
{
	//定义容器
	vector<Person01> v;
	//定义自定义数据变量
	Person01 p1("aaa", 10);
	Person01 p2("bbb", 20);
	Person01 p3("ccc", 30);
	Person01 p4("ddd", 40);
	Person01 p5("eee", 50);
	//向容器中插入数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//遍历容器中的数据
	for (vector<Person01>::iterator it = v.begin(); it != v.end(); it++)
	{
		//通过解引用对象.的方式访问属性
		cout << "姓名:" << (*it).m_Name << ";年龄:" << (*it).m_Age << endl;
		//通过指针->的方式访问属性
		cout << "姓名:" << it->m_Name << ";年龄:" << it->m_Age << endl;
	}
}
int main()
{
	test02();
	system("pause");
	return 0;
}
