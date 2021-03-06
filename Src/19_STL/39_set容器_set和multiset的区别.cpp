﻿#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
//39_set容器_set和multiset的区别
void test39()
{
	set<int>s1;
	//set插入两次相同数据的结果
	pair<set<int>::iterator, bool> ret = s1.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功!" << endl;//第一次插入成功!
	}
	else
	{
		cout << "第一次插入失败!" << endl;
	}
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "第二次插入成功!" << endl;
	}
	else
	{
		cout << "第二次插入失败!" << endl;//第二次插入失败!
	}

	multiset<int>ms;
	//multiset允许重复插入,会显示重复的值
	multiset<int>::iterator ret1 = ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";//10 10
	}
	cout << endl;
}
int main39()
{
	test39();
	system("pause");
	return 0;
}
