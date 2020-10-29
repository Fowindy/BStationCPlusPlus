#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
using namespace std;
//30_list容器_大小操作
void PrintList30(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test30()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	PrintList30(L1);//10 20 30 40
	//判断list容器是否为空,不为空输出元素个数
	if (L1.empty())
	{
		cout << "L1为空!" << endl;
	}
	else
	{
		cout << "L1不为空!" << endl;
		cout << "L1元素个数为:" << L1.size() << endl;//4
	}
}
int main()
{
	test30();
	system("pause");
	return 0;
}
