#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//62_常用查找算法_count_if
//1.统计内置数据类型
//定义查找谓词
class MyCount
{
public:
	bool operator()(int val)
	{
		return val >= 30;//大于等于30
	}
};
void test62()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(20);
	v.push_back(30);
	int num = count_if(v.begin(), v.end(), MyCount());
	cout << "大于等于30的数个数为:" << num << endl;
	//大于等于30的数个数为:5
}
void test062()
{

}
//2.统计自定义数据类型
int main()
{
	test62();
	system("pause");
	return 0;
}
