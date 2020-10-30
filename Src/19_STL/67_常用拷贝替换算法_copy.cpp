#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//67_常用拷贝替换算法_copy
using namespace std;
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test67()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v1;
	v1.resize(v.size());
	copy(v.begin(), v.end(), v1.begin());
	//MyPrint为仿函数
	for_each(v1.begin(), v1.end(), MyPrint());//0 1 2 3 4 5 6 7 8 9
	cout << endl;
}
int main67()
{
	test67();
	system("pause");
	return 0;
}
