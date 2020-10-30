#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//57_常用查找算法_find
//1.查找 内置数据类型
void test57()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it != v.end())
	{
		cout << "找到元素:" << *it << endl;//找到元素:5
	}
	else
	{
		cout << "未找到元素!" << endl;
	}
}
int main()
{
	test57();
	system("pause");
	return 0;
}
