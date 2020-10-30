#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//72_常用算术生成算法_fill
class MyPrint72
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test72()
{
	vector<int>v;
	//分配空间则默认填充0
	v.resize(10);
	cout << "------------------未替换填充前:----------------" << endl;
	for_each(v.begin(), v.end(), MyPrint72());//0 0 0 0 0 0 0 0 0 0
	cout << endl;
	cout << "------------------替换填充后:----------------" << endl;
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), MyPrint72());//100 100 100 100 100 100 100 100 100 100
	cout << endl;
}
int main()
{
	test72();
	system("pause");
	return 0;
}
