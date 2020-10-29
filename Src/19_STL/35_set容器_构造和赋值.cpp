#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <set>
using namespace std;
void test35()
{
	set<int>s1;
	//插入数据,只有insert方式
	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
}
int main()
{
	system("pause");
	return 0;
}
