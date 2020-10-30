#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//69_常用拷贝替换算法_replace_if
class MyPrint69
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//自定义谓词
class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};
void test69()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	//将大于等于30 替换成3000
	cout << "------------------替换前:----------------" << endl;
	for_each(v.begin(), v.end(), MyPrint69());//20 30 20 40 50 10 20
	cout << endl;
	cout << "------------------替换后:----------------" << endl;
	replace_if(v.begin(), v.end(), Greater30(), 3000);
	for_each(v.begin(), v.end(), MyPrint69());//20 3000 20 3000 3000 10 20
	cout << endl;
}
int main69()
{
	test69();
	system("pause");
	return 0;
}
