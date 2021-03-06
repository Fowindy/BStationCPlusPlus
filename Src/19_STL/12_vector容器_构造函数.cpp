﻿#include <iostream>
#include <string>
using namespace std;
#include <vector>
//vector容器构造
//打印容器函数
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test12()
{
	vector<int> v1;//默认构造,无参构造
	//为容器赋值
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//打印容器
	PrintVector(v1);//0 1 2 3 4 5 6 7 8 9
	//2.通过区间方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	PrintVector(v2);//0 1 2 3 4 5 6 7 8 9
	//3.n个element方式构造
	vector<int>v3(10, 100);//100 100 100 100 100 100 100 100 100 100
	PrintVector(v3);
	//4.拷贝构造
	vector<int>v4(v3);//100 100 100 100 100 100 100 100 100 100
	PrintVector(v4);
}
int main12()
{
	test12();
	system("pause");
	return 0;
}
