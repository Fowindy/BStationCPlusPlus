#include <iostream>
#include <string>
#include <vector>
using namespace std;
//14_vector容器_vector容器的容量
void printVector14(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test14()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector14(v1);//0 1 2 3 4 5 6 7 8 9
	if (v1.empty())//为真代表容器为空
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为:" << v1.capacity() << endl;//13
		cout << "v1的大小为:" << v1.size() << endl;//10
	}
	//重新指定大小,如果重新指定的比原来长了,默认用0填充新的位置
	v1.resize(15, 100);//利用重载的版本,可以指定默认填充值,参数2,
	printVector14(v1);//0 1 2 3 4 5 6 7 8 9 100 100 100 100 100
	cout << "v1的容量为:" << v1.capacity() << endl;//19
	cout << "v1的大小为:" << v1.size() << endl;//15
	v1.resize(5, 100);//如果重新指定的比原来短了,删除多余的元素
	printVector14(v1);//0 1 2 3 4
	cout << "v1的容量为:" << v1.capacity() << endl;//19
	cout << "v1的大小为:" << v1.size() << endl;//5
}
int main14()
{
	test14();
	system("pause");
	return 0;
}
