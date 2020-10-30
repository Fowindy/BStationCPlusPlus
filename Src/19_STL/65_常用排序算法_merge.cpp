#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//65_常用排序算法_merge_合并有序
void myPrint65(int val)
{
	cout << val << " ";
}
void test65()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	cout << "------------------合并之前打印:----------------" << endl;
	for_each(v1.begin(), v1.end(), myPrint65);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint65);
	cout << endl;
	//目标容器
	vector<int>vTarget;
	//提前给目标容器分配空间
	vTarget.resize(v1.size() + v2.size());
	//合并
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	cout << "------------------合并之后打印:----------------" << endl;
	for_each(vTarget.begin(), vTarget.end(), myPrint65);
	cout << endl;
}
int main65()
{
	test65();
	system("pause");
	return 0;
}
