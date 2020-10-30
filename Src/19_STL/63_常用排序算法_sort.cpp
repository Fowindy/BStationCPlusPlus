#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//63_常用排序算法_sort
void myPrint63(int val)
{
	cout << val << " ";
}
void test63()
{
	vector<int>v;
	v.push_back(100);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(60);
	cout << "------------------排序前:----------------" << endl;
	for_each(v.begin(), v.end(), myPrint63);//100 20 30 10 60
	cout << endl;
	//利用sort默认升序排序
	sort(v.begin(), v.end());
	cout << "------------------升序后:----------------" << endl;
	for_each(v.begin(), v.end(), myPrint63);//10 20 30 60 100
	cout << endl;
	cout << "------------------使用内建函数降序后:----------------" << endl;
	sort(v.begin(), v.end(), greater<int>());//100 60 30 20 10
	for_each(v.begin(), v.end(), myPrint63);
	cout << endl;
}
int main()
{
	test63();
	system("pause");
	return 0;
}
