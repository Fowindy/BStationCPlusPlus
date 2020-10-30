#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//56_常用遍历算法_transform
//打印仿函数
class Print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//转换仿函数
class Transform
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};
void test56()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "------------------未搬运前打印原容器:----------------" << endl;
	for_each(v.begin(), v.end(), Print());//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	//创建目标容器
	vector<int>vTarget;
	//为目标容器分配原容器一样的空间
	vTarget.resize(v.size());
	//转换
	transform(v.begin(), v.end(), vTarget.begin(), Transform());
	//打印转换后的目标容器
	cout << "------------------打印转换后的目标容器----------------" << endl;
	for_each(vTarget.begin(), vTarget.end(), Print());//100 101 102 103 104 105 106 107 108 109
	cout << endl;
}
int main()
{
	test56();
	system("pause");
	return 0;
}
