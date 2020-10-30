#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//55_常用遍历算法_for_each
void print01(int val)
{
	cout << val << " ";
}
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test55()
{
	vector<int>v;
	//加载数据
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//遍历算法_普通函数_传入函数名即可
	for_each(v.begin(), v.end(), print01);//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	//遍历算法_仿函数_传入匿名对象
	for_each(v.begin(), v.end(), print02());//0 1 2 3 4 5 6 7 8 9
	cout << endl;
}
int main55()
{
	test55();
	system("pause");
	return 0;
}
