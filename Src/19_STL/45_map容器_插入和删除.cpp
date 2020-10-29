#include <iostream>
#include <string>
#include <map>
using namespace std;
//45_map容器_插入和删除
void PrintMap45(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}
void test45()
{
	map<int, int>m;
	//插入_第一种
	m.insert(pair<int, int>(1, 10));
	//插入_第二种
	m.insert(make_pair(2, 20));
	//插入_第三种
	m.insert(map<int, int>::value_type(3, 30));
	//插入_第四种_不建议 []不建议插入,用途 可以利用key访问到value
	m[4] = 40;
	//原因:原本没创建5,结果会自己创建默认值为0的
	cout << m[5] << endl;//0
	PrintMap45(m);

	cout << "------------------删除:----------------" << endl;
	//删除
	m.erase(m.begin());
	PrintMap45(m);
	cout << "------------------按照key删除----------------" << endl;
	//按照key删除
	m.erase(3);
	PrintMap45(m);
	//按照区间删除
	m.erase(m.begin(), m.end());
	PrintMap45(m);
	//清空
	m.clear();
	PrintMap45(m);

}
int main45()
{
	test45();
	system("pause");
	return 0;
}
