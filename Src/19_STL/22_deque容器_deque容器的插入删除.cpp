#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
//22_deque容器_deque容器的插入删除
void PrintDeque22(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//两端操作
void test22()
{
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	//头插
	d1.push_front(30);
	d1.push_front(40);
	PrintDeque22(d1);//40 30 10 20
	//尾删
	d1.pop_back();
	PrintDeque22(d1);//40 30 10
}
int main()
{
	test22();
	system("pause");
	return 0;
}
