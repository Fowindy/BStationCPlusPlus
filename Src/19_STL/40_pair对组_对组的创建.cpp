#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
using namespace std;
//40_pair对组_对组的创建
void test40()
{
	//pair对组创建的第一种方式
	pair<string, int>p("Tom", 20);
	cout << "姓名:" << p.first << "  年龄:" << p.second << endl;//姓名:Tom  年龄:20
	//pair对组创建的第二种方式
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "姓名:" << p2.first << "  年龄:" << p2.second << endl;//姓名:Jerry  年龄:30
}
int main40()
{
	test40();
	system("pause");
	return 0;
}
