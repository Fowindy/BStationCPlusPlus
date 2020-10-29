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
	//头删
	d1.pop_front();
	PrintDeque22(d1);//30 10
}
void test022()
{
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	//头插
	d1.push_front(30);
	d1.push_front(40);
	PrintDeque22(d1);//40 30 10 20
	//insert方式:头插
	d1.insert(d1.begin(), 100);
	PrintDeque22(d1);//100 40 30 10 20
	//insert方式:头插n个元素
	d1.insert(d1.begin(), 3, 666);
	PrintDeque22(d1);//666 666 666 100 40 30 10 20

	//按照区间的方式插入
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	PrintDeque22(d1);//1 2 3 666 666 666 100 40 30 10 20
}
void test0022()
{
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	//头插
	d1.push_front(30);
	d1.push_front(40);
	//删除第二个元素
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	PrintDeque22(d1);//40 10 20
}
int main()
{
	test22();
	test022();
	test0022();
	system("pause");
	return 0;
}
