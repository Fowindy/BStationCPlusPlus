#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//59_常用查找算法_adjacent_find_相邻重复
//相邻重复
void test59()
{
	vector<int>v;
	//创建数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(40);
	v.push_back(50);
	v.push_back(50);
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it != v.end())
	{
		cout << "找到相邻重复元素:" << *it << endl;
		//找到相邻重复元素:40
	}
	else
	{
		cout << "未找到相邻重复元素!" << endl;
	}
}
int main()
{
	test59();
	system("pause");
	return 0;
}
