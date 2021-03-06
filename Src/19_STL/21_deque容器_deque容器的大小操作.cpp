﻿#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
//21_deque容器_deque容器的大小操作
void PrintDeque21(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test21()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque21(d1);//0 1 2 3 4 5 6 7 8 9
	//判断deque容器是否为空
	if (d1.empty())
	{
		cout << "容器为空!" << endl;
	}
	else
	{
		cout << "容器不为空!" << endl;
		//获取deque容器的大小
		cout << "d1的大小为:" << d1.size() << endl;//10
		//deque容器没有容量的概念
	}
	//重新指定容器大小(长,默认填0)
	d1.resize(15);
	PrintDeque21(d1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0
	//重新指定容器大小(长, 默认填指定)
	d1.resize(18, 99);
	PrintDeque21(d1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 99 99 99
	//重新指定容器大小(短, 尾删)
	d1.resize(5);//0 1 2 3 4
	PrintDeque21(d1);
}
int main21()
{
	test21();
	system("pause");
	return 0;
}
