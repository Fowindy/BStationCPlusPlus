#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
//54_内建函数对象_逻辑仿函数
//逻辑非
void PrintVector54(const vector<bool>& v)
{
	for (vector<bool>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test54()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);
	PrintVector54(v);//1 0 0 1
	//利用逻辑非 将容器v搬运到容器v2中,并执行取反操作
	vector<bool>v2;
	//使用v空间给v2分配空间
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	PrintVector54(v2);//0 1 1 0
}
int main54()
{
	test54();
	system("pause");
	return 0;
}
