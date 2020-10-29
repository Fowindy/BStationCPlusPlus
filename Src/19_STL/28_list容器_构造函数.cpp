#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
using namespace std;
//list容器的构造
void PrintList28(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test28()
{
	//创建list容器_默认构造
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//遍历容器
	PrintList28(L1);//10 20 30 40
	//按照区间方式构造
	list<int> L2(L1.begin(), L1.end());
	PrintList28(L2);//10 20 30 40
	//拷贝构造
	list<int>L3(L2);
	PrintList28(L3);//10 20 30 40
	//n个element构造
	list<int>L4(10, 100);
	PrintList28(L4);//100 100 100 100 100 100 100 100 100 100
}
int main28()
{
	test28();
	system("pause");
	return 0;
}
