#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//58_常用查找算法_find_if
//1.查找内置数据类型
//定义查找谓词
class GreaterSix
{
public:
	bool operator()(int val)
	{
		return val > 6;//大于6返回true
	}
};
void test58()
{
	vector<int>v;
	//添加数据
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找大于6的数
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterSix());
	if (it != v.end())
	{
		cout << "找到大于6的元素:" << *it << endl;
		//找到大于6的元素:7
	}
}
int main()
{
	test58();
	system("pause");
	return 0;
}
