#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//51_谓词_二元谓词:返回值为bool,两个参数的仿函数
class MyCompare51
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;//降序
	}
};
void PrintVector51(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test51()
{
	vector<int>v;
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);
	v.push_back(50);
	cout << "------------------升序之前:----------------" << endl;
	PrintVector51(v);//30 20 40 10 50
	cout << "------------------升序之后:----------------" << endl;
	//sort默认为升序,需添加algorithm头文件
	sort(v.begin(), v.end());
	PrintVector51(v);//10 20 30 40 50
	//使用函数对象改变算法策略,排序改为降序
	//MyCompare51()为匿名函数
	sort(v.begin(), v.end(), MyCompare51());
	cout << "------------------降序之后:----------------" << endl;
	PrintVector51(v);//50 40 30 20 10
}
int main51()
{
	test51();
	system("pause");
	return 0;
}
