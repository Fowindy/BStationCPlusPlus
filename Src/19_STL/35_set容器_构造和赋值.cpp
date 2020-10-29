#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <set>
using namespace std;
void PrintSet35(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test35()
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
	PrintSet35(s1);//10 20 30 40
}
int main()
{
	test35();
	system("pause");
	return 0;
}
