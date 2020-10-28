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
	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素的地址
	vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个位置
}
int main()
{
	system("pause");
	return 0;
}
