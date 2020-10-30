#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//73_常用集合算法_set_intersection
void MyPrint73(int val)
{
	cout << val << " ";
}
void test73()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	cout << "------------------未找交集前:----------------" << endl;
	for_each(v1.begin(), v1.end(), MyPrint73);//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint73);//5 6 7 8 9 10 11 12 13 14
	cout << endl;
	//目标容器
	vector<int>vTarget;
	//目标容器需提前开辟空间
	//最特殊的情况,大容器包含小容器,开辟空间,取小容器的size即可
	vTarget.resize(min(v1.size(), v2.size()));
	//寻找交集
	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	cout << "------------------找交集后:----------------" << endl;
	for_each(vTarget.begin(), it, MyPrint73);//5 6 7 8 9
	cout << endl;
}
int main73()
{
	test73();
	system("pause");
	return 0;
}
