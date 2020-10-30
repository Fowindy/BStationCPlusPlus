#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//68_常用拷贝替换算法_replace
class MyPrint68
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test68()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	cout << "------------------替换前:----------------" << endl;
	for_each(v.begin(), v.end(), MyPrint68());//10 20 30 20 50 10 20
	cout << endl;
	cout << "------------------替换后:----------------" << endl;
	replace(v.begin(), v.end(), 20, 999);
	for_each(v.begin(), v.end(), MyPrint68());//10 999 30 999 50 10 999
	cout << endl;
}
int main()
{
	test68();
	system("pause");
	return 0;
}
