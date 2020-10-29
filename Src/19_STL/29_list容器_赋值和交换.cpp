﻿#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
using namespace std;
//list容器的赋值和交换
//1.赋值
void PrintList29(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test29()
{
	list<int>L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	PrintList29(L1);//10 20 30 40
}
int main()
{
	test29();
	system("pause");
	return 0;
}
