#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <set>
using namespace std;
//36_set容器_大小和交换
void PrintSet36(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test36()
{
	set<int>s1;
	//插入数据,只有insert方式
	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	//遍历容器
	//set容器的特点:所有元素插入时会自动排序;有重复值只会保留一个
	PrintSet36(s1);//10 20 30 40

	//判断容器是否为空
	if (s1.empty())
	{
		cout << "容器为空!" << endl;
	}
	else
	{
		cout << "容器不为空!" << endl;
		cout << "s1容器大小为:" << s1.size() << endl;//4
	}

	set<int>s2;
	//插入数据,只有insert方式
	s2.insert(400);
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(300);
	cout << "------------------交换前:----------------" << endl;
	PrintSet36(s1);//10 20 30 40
	PrintSet36(s2);//100 200 300 400

	//交换
	s1.swap(s2);
	cout << "------------------交换后:----------------" << endl;
	PrintSet36(s1);//100 200 300 400
	PrintSet36(s2);//10 20 30 40
}
int main36()
{
	test36();
	system("pause");
	return 0;
}
