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
}
int main()
{
	test30();
	system("pause");
	return 0;
}
