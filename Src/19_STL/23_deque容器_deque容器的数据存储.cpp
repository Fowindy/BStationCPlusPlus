#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
//23_deque容器_deque容器的数据存储
void test23()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(30);
	d1.push_front(40);
	//使用[]方式获取元素
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";//40 30 10 20
	}
	cout << endl;
}
int main()
{
	test23();
	system("pause");
	return 0;
}
