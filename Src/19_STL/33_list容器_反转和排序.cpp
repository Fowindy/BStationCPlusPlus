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
}
int main()
{
	test33();
	system("pause");
	return 0;
}
