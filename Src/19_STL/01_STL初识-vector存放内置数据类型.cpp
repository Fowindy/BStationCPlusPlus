#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//vector容器存放内置数据类型
void myPrint(int val)
{
	cout << val << endl;
}
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
	//vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素的地址
	//vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个位置
	////第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;//接引用获取迭代器指针中的内容
	//	itBegin++;//迭代器指针右移
	//}
	////第二种遍历方式:for循环
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}
	//第三种遍历方式:利用STL提供的for_each遍历算法 头文件 algorithm
	for_each(v.begin(), v.end(), myPrint);
}
int main01()
{
	test01();
	system("pause");
	return 0;
}
