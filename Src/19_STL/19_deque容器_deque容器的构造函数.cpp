#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
//19_deque容器_deque容器的构造函数
void PrintDeque(deque<int> d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test19()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	//deque容器赋值和打印基本操作
	PrintDeque(d1);//0 1 2 3 4 5 6 7 8 9
}
int main()
{
	test19();
	system("pause");
	return 0;
}
