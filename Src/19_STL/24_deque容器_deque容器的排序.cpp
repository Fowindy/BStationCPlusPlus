#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
//24_deque容器_deque容器的排序
void PrintDeque24(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test24()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	cout << "------------------升序前:----------------" << endl;
	PrintDeque24(d1);//300 200 100 10 20 30
	//sort排序 默认规则 从小到大 升序
	//对于支持随机访问的迭代器容器,都可以利用sort算法直接对其进行排序
	//vector容器也可以利用sort进行排序
	sort(d1.begin(), d1.end());
	cout << "------------------升序后:----------------" << endl;
	PrintDeque24(d1);//10 20 30 100 200 300
}
int main()
{
	test24();
	system("pause");
	return 0;
}
