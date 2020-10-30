#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//74_常用集合算法_set_union_并集
void MyPrint74(int val)
{
	cout << val << " ";
}
void test74()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	cout << "------------------未找并集前:----------------" << endl;
	for_each(v1.begin(), v1.end(), MyPrint74);//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint74);//5 6 7 8 9 10 11 12 13 14
	cout << endl;
	//目标容器
	vector<int>vTarget;
	//目标容器需提前开辟空间
	//最特殊的情况,两个容器没有交集,并集就是两个容器size相加
	vTarget.resize(v1.size() + v2.size());
	//寻找交集
	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	cout << "------------------找并集后:----------------" << endl;
	for_each(vTarget.begin(), it, MyPrint74);//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
	cout << endl;
}
int main()
{
	test74();
	system("pause");
	return 0;
}
