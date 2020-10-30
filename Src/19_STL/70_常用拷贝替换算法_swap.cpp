#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//70_常用拷贝替换算法_swap
class MyPrint70
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test70()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	cout << "------------------交换前:----------------" << endl;
	for_each(v1.begin(), v1.end(), MyPrint70());//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint70());//100 101 102 103 104 105 106 107 108 109
	cout << endl;
	cout << "------------------交换后:----------------" << endl;
	v1.swap(v2);
	for_each(v1.begin(), v1.end(), MyPrint70());//100 101 102 103 104 105 106 107 108 109
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint70());//0 1 2 3 4 5 6 7 8 9
	cout << endl;
}
int main()
{
	test70();
	system("pause");
	return 0;
}
