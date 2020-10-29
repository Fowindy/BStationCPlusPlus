#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
using namespace std;
//32_list容器_数据存取
void test32()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//L1[0] 不可用[]访问list容器中的元素
	//L1.at(0) 不可用at方式访问list容器中的元素
	//原因是list本质上是链表,不是用连续线性空间存储数据,迭代器是不支持随机访问的
	//访问第一个和最后元素
	cout << "第一个元素为:" << L1.front() << endl;//10
	cout << "最后一个元素为:" << L1.back() << endl;//40
}
int main()
{
	test32();
	system("pause");
	return 0;
}
