#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
using namespace std;
//33_list容器_反转和排序
void PrintList33(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test33()
{
	list<int>L1;
	L1.push_back(30);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(20);
	L1.push_back(40);
	cout << "------------------反转前:----------------" << endl;
	PrintList33(L1);//30 10 50 20 40
	L1.reverse();
	cout << "------------------反转后:----------------" << endl;
	PrintList33(L1);//40 20 50 10 30

	//排序
	//所有不支持随机访问迭代器的容器,不可以用标准算法
	//不支持随机访问送代器的容器,内部会提供对应一些算法
	//sort (L1. begin0), L1. end());
	cout << "------------------升序前:----------------" << endl;
	PrintList33(L1);//40 20 50 10 30
	L1.sort();//默认排序 从小到大 升序
	cout << "------------------升序后:----------------" << endl;
	PrintList33(L1);//10 20 30 40 50
}
int main()
{
	test33();
	system("pause");
	return 0;
}
