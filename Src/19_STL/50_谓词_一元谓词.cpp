#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//谓词:返回值为bool的仿函数为谓词
//一元谓词:一个参数的谓词称为一元谓词
class GreaterFive
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}
};
void test50()
{
	vector<int>v1;
	//加载数据
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//查找容器中,有没有大于5的数字
	//find_if需包含algorithm头文件
	//GreaterFive() 匿名函数对象
	vector<int>::iterator it = find_if(v1.begin(), v1.end(), GreaterFive());
	if (it == v1.end())
	{
		cout << "未找到大于5的数字!" << endl;
	}
	else
	{
		cout << "找到大于5的数字为:" << *it << endl;//找到大于5的数字为:6
	}
}
int main50()
{
	test50();
	system("pause");
	return 0;
}
