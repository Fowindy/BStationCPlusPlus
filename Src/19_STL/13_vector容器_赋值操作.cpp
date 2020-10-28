#include <iostream>
#include <string>
#include <vector>
using namespace std;
//13_vector容器_赋值操作
void PrintVector1(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test13()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	PrintVector1(v1);//0 1 2 3 4 5 6 7 8 9
	//赋值 operator=
	vector<int> v2;
	v2 = v1;
	PrintVector1(v2);//0 1 2 3 4 5 6 7 8 9
	//赋值 assign
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	PrintVector1(v3);//0 1 2 3 4 5 6 7 8 9
	//n个element方式赋值
	vector<int> v4;
	v4.assign(10, 100);
	PrintVector1(v4);//100 100 100 100 100 100 100 100 100 100
}
int main()
{
	test13();
	system("pause");
	return 0;
}
