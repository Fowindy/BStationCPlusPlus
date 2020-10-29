#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
//38_set容器_查找和统计
void test38()
{
	set<int> s1;
	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	//查找元素
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "找到元素:" << *pos << endl;//30
	}
	else
	{
		cout << "没有找到元素" << endl;
	}
}
int main()
{
	test38();
	system("pause");
	return 0;
}
