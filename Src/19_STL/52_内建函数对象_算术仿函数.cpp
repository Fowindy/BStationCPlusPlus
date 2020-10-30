#include <iostream>
#include <string>
#include <functional>//内建仿函数头文件
using namespace std;
//52_内建函数对象_算术仿函数
//negate 取反 一元
void test52()
{
	negate<int>n;
	cout << n(50) << endl;//-50
}
//plus 相加 二元
void test052()
{
	plus<int>p;
	cout << p(10, 45) << endl;//55
}
int main52()
{
	test52();
	test052();
	system("pause");
	return 0;
}
