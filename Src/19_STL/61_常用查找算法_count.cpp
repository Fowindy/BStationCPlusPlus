#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//61_常用查找算法_count_统计
//1.统计内置数据类型
void test61()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	v.push_back(10);
	v.push_back(10);
	int num = count(v.begin(), v.end(), 10);
	cout << "容器中该元素的个数为:" << num << endl;//容器中该元素的个数为:4
}
//2.统计自定义数据类型
int main()
{
	test61();
	system("pause");
	return 0;
}
