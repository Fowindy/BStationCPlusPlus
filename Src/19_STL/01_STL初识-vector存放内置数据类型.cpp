#include <iostream>
#include <string>
#include <vector>
using namespace std;
//vector容器存放内置数据类型
void test01()
{
	//创建了一个vector容器,可以理解为数组
	vector<int> v;
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
}
int main()
{
	system("pause");
	return 0;
}
