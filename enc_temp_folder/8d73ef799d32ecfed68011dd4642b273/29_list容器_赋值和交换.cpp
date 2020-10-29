#include <iostream>
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
	list<int>L2;
	L2 = L1;//operator= 赋值
	PrintList29(L2);//10 20 30 40

	//assign(区间赋值)
	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	PrintList29(L3);//10 20 30 40

	//assign(n个element赋值)
	list<int>L4;
	L4.assign(10, 100);
	PrintList29(L4);//100 100 100 100 100 100 100 100 100 100
}
void test029()
{
	list<int>L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	cout << "交换前:" << endl;
	PrintList29(L1);//10 20 30 40

	list<int>L2;
	L2.assign(10, 100);
	PrintList29(L2);

	//交换
	L1.swap(L2);
	PrintList29(L1);//10 20 30 40
	PrintList29(L2);
}
int main()
{
	test29();
	test029();
	system("pause");
	return 0;
}
