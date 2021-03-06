﻿#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
//20_deque容器_deque容器的赋值操作
void PrintDeque20(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test20()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque20(d1);//0 1 2 3 4 5 6 7 8 9
	//operator= 赋值
	deque<int> d2;
	d2 = d1;
	PrintDeque20(d2);//0 1 2 3 4 5 6 7 8 9
	//assign赋值(区间)
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	PrintDeque20(d3);//0 1 2 3 4 5 6 7 8 9
	//assign赋值(n个element)
	deque<int> d4;
	d4.assign(10, 100);
	PrintDeque20(d4);//100 100 100 100 100 100 100 100 100 100
}
int main20()
{
	test20();
	system("pause");
	return 0;
}
