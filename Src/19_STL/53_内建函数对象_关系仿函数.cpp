#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//53_内建函数对象_关系仿函数
//greater 大于 二元
class MyCompare53
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;//降序
	}
};
void PrintVector53(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test53()
{
	vector<int>v;
	v.push_back(30);
	v.push_back(50);
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	cout << "------------------升序前:----------------" << endl;
	PrintVector53(v);//30 50 10 40 20
	//使用sort默认升序
	sort(v.begin(), v.end());
	cout << "------------------升序后:----------------" << endl;
	PrintVector53(v);//10 20 30 40 50
	//自定义仿函数降序
	cout << "-----------------自定义仿函数降序-----------------" << endl;
	sort(v.begin(), v.end(), MyCompare53());
	PrintVector53(v);//50 40 30 20 10
}
int main()
{
	test53();
	system("pause");
	return 0;
}
