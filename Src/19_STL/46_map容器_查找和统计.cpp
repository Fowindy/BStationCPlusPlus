#include <iostream>
#include <string>
#include <map>
using namespace std;
//46_map容器_查找和统计
void test46()
{
	//1.查找
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "找到元素:key = " << (*pos).first << ";value = " << (*pos).second << endl;
	}
	else
	{
		cout << "没有找到元素" << endl;
	}
	//2.统计:map不允许插入重复key值,返回值为0或者为1;multimap的count统计可以大于1
	int num = m.count(3);
	cout << "num = " << num << endl;
}
int main46()
{
	test46();
	system("pause");
	return 0;
}
