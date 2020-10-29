#include <iostream>
#include <string>
#include <map>
using namespace std;
//43_map容器_构造和赋值
void PrintMap43(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}
void test43()
{
	//创建map容器
	map<int, int>m;
	//写入数据
	m.insert(pair<int, int>(1, 50));
	m.insert(pair<int, int>(2, 40));
	m.insert(pair<int, int>(5, 10));
	m.insert(pair<int, int>(4, 20));
	m.insert(pair<int, int>(3, 30));
	PrintMap43(m);
	cout << "------------------拷贝构造----------------" << endl;
	//拷贝构造
	map<int, int>m1(m);
	PrintMap43(m1);
	cout << "------------------赋值构造----------------" << endl;
	//赋值构造
	map<int, int>m2;
	m2 = m1;
	PrintMap43(m2);
}
int main43()
{
	test43();
	system("pause");
	return 0;
}
