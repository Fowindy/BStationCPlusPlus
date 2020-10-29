#include <iostream>
#include <string>
#include <map>
using namespace std;
//44_map容器_大小和交换
void PrintMap44(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}
void test44()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	//判断m是否为空及大小
	if (m.empty())
	{
		cout << "m为空" << endl;
	}
	else
	{
		cout << "m不为空" << endl;
		cout << "m的大小为:" << m.size() << endl;//4
	}
}
//交换
void test044()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	map<int, int>m1;
	m1.insert(pair<int, int>(5, 50));
	m1.insert(pair<int, int>(6, 60));
	m1.insert(pair<int, int>(7, 70));
	m1.insert(pair<int, int>(8, 80));
	cout << "------------------交换前:----------------" << endl;
	PrintMap44(m);
	PrintMap44(m1);
	//交换
	m.swap(m1);
	cout << "------------------交换后:----------------" << endl;
	PrintMap44(m);
	PrintMap44(m1);
}
int main()
{
	test44();
	test044();
	system("pause");
	return 0;
}
