#include <iostream>
#include <string>
#include <map>
using namespace std;
//47_map容器_排序
void PrintMap47(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}
void test47()
{
	//map默认排序:按照key值升序
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	PrintMap47(m);
}
int main()
{
	test47();
	system("pause");
	return 0;
}
