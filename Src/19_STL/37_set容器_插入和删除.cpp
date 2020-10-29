#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
//36_set容器_插入和删除
void PrintSet37(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test37()
{
	set<int> s1;
	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	//遍历
	PrintSet37(s1);//10 20 30 40
	//删除头元素
	s1.erase(s1.begin());
	PrintSet37(s1);//20 30 40
	//删除指定元素
	s1.erase(30);//20 40
	PrintSet37(s1);
	//删除所有元素erase
	s1.erase(s1.begin(), s1.end());
	PrintSet37(s1);
	//清空
	s1.clear();
}
int main()
{
	test37();
	system("pause");
	return 0;
}
