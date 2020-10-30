#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
//71_常用算术生成算法_accumulate
void test71()
{
	vector<int>v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	//参数3:起始累加值,如不需要写0就好
	int total = accumulate(v.begin(), v.end(), 1000);
	cout << "total = " << total << endl;//total = 6050
}
int main()
{
	test71();
	system("pause");
	return 0;
}
