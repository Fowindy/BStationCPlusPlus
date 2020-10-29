#include <iostream>
#include <string>
#include <vector>
using namespace std;
//18_vector容器_vector容器的预留空间
void test18()
{
	vector<int>v1;
	//利用reserve预留空间
	v1.reserve(100000);
	//统计开辟空间的次数
	int num = 0;
	int *p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		//如果p指针指向的不是首地址
		if (p != &v1[0])
		{
			//则把首地址给p
			p = &v1[0];
			//开辟次数+1
			num++;
		}
	}
	//利用系统开辟空间的次数:30
	cout << "v1开辟空间的次数为:" << num << endl;
	cout << "v1的容量:" << v1.capacity() << endl;//v1的容量:138255
	cout << "v1的大小:" << v1.size() << endl;//v1的大小:100000
	//利用reserve预留空间后开辟空间的次数:1
	cout << "v1开辟空间的次数为:" << num << endl;
	cout << "v1的容量:" << v1.capacity() << endl;//v1的容量:100000
	cout << "v1的大小:" << v1.size() << endl;//v1的大小:100000
}
int main18()
{
	test18();
	system("pause");
	return 0;
}
