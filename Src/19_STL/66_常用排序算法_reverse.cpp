#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//66_常用排序算法_reverse
void myPrint66(int val)
{
	cout << val << " ";
}
void test66()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	v.push_back(60);
	cout << "------------------反转前:----------------" << endl;
	for_each(v.begin(), v.end(), myPrint66);//10 30 50 20 40 60
	cout << endl;
	cout << "------------------反转后:----------------" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint66);//60 40 20 50 30 10
	cout << endl;
}
int main66()
{
	test66();
	system("pause");
	return 0;
}
