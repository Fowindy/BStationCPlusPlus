#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//75_常用集合算法_set_difference_差集
void MyPrint75(int val)
{
	cout << val << " ";
}
void test75()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	cout << "------------------未找差集前:----------------" << endl;
	for_each(v1.begin(), v1.end(), MyPrint75);//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint75);//5 6 7 8 9 10 11 12 13 14
	cout << endl;
	//目标容器
	vector<int>vTarget;
	//最特殊情况 两个容器没有交集 取两个容器中大的size作为目标容器开辟空间
	vTarget.resize(max(v1.size(), v2.size()));
	//返回目标容器的最后一个元素的迭代器地址
	cout << "v1与v2的差集为： " << endl;
	vector<int>::iterator itEnd =
		set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint75);//0 1 2 3 4
	cout << endl;
	cout << "v2与v1的差集为： " << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint75);//10 11 12 13 14
	cout << endl;
}
int main()
{
	test75();
	system("pause");
	return 0;
}
