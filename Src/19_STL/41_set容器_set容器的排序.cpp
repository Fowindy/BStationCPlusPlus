#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
//41_set容器_set容器的排序
class MyCompare
{
public:
	bool operator()(int v1, int v2)//注意:此处为()重载
	{
		return v1 > v2;//降序,前面大于后面
	}
};
void test41()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";//10 20 30 40 50
	}
	cout << endl;
	//改变默认排序规则,改为从大到小
	//仿函数技术:仿函数本质上是类,仿的是回调函数
	set<int, MyCompare>s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(50);
	s2.insert(30);
	s2.insert(20);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";//50 40 30 20 10
	}
	cout << endl;
}
int main()
{
	test41();
	system("pause");
	return 0;
}
