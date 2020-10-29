#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
using namespace std;
//32_list容器_数据存取
void test32()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//L1[0] 不可用[]访问list容器中的元素
}
int main()
{
	system("pause");
	return 0;
}
