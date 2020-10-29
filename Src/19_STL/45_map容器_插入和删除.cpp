#include <iostream>
#include <string>
#include <map>
using namespace std;
//45_map容器_插入和删除
void test45()
{
	map<int, int>m;
	//插入_第一种
	m.insert(pair<int, int>(1, 10));
	//插入_第二种
	m.insert(make_pair(2, 20));
}
int main()
{
	system("pause");
	return 0;
}
