#include <iostream>
#include <string>
#include <map>
using namespace std;
//47_map容器_排序
class compareMap
{
public:
	bool operator()(int v1, int v2)
	{
		//降序
		return v1 > v2;
	}
};
void PrintMap47(const map<int, int, compareMap>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}
void test47()
{
	//map默认排序:按照key值升序
	map<int, int, compareMap>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	//改变map的默认排序为降序(仿函数)
	PrintMap47(m);
}
int main()
{
	test47();
	system("pause");
	return 0;
}
