#include <iostream>
#include <string>
#include <vector>
using namespace std;
//17_vector容器_vector容器的互换
void PrintVector17(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//交换的实际用途:巧用swap可以收缩空间
void test017()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为:" << v.capacity() << endl;//138255
	cout << "v的大小为:" << v.size() << endl;//100000
	v.resize(999);
	cout << "v的容量为:" << v.capacity() << endl;//138255
	cout << "v的大小为:" << v.size() << endl;//999
	//巧用swap可以收缩空间
	vector<int>(v).swap(v);
	cout << "v的容量为:" << v.capacity() << endl;//999
	cout << "v的大小为:" << v.size() << endl;//999
}
void test17()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << endl;
	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	cout << endl;
	cout << "------------------交换前:----------------" << endl;
	PrintVector17(v1);//0 1 2 3 4 5 6 7 8 9
	PrintVector17(v2);//10 9 8 7 6 5 4 3 2 1
	//交换
	v1.swap(v2);
	cout << "------------------交换后:----------------" << endl;
	PrintVector17(v1);//10 9 8 7 6 5 4 3 2 1
	PrintVector17(v2);//0 1 2 3 4 5 6 7 8 9
}
int main17()
{
	test17();
	test017();
	system("pause");
	return 0;
}
