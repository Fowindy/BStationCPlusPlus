#include <iostream>
#include <string>
#include <vector>
using namespace std;
//vector容器 数据存取
void test16()
{
	vector<int>v1;
	//赋值
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//利用[]的方式访问数组中的元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";//0 1 2 3 4 5 6 7 8 9
	}
	cout << endl;
	//利用at访问数组中的元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";//0 1 2 3 4 5 6 7 8 9
	}
	cout << endl;
}
int main()
{
	test16();
	system("pause");
	return 0;
}
