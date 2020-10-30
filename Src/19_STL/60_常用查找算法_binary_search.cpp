#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//60_常用查找算法_binary_search_查找是否存在_必须有序序列
void test60()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);//有序序列
	}
	//**强制为无序序列
	v.push_back(2);
	//查找9是否存在
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "找到元素" << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
		//**无须序列则会报未找到
	}
}
int main()
{
	test60();
	system("pause");
	return 0;
}
