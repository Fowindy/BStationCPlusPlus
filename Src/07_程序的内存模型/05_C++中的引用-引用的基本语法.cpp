#include <iostream>
#include <string>
using namespace std;
int main05()
{
	//引用的基本语法
	//数据类型 &别名 = 原名;
	int a = 10;
	//定义引用
	int &b = a;
	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//10
	b = 100;
	cout << "a = " << a << endl;//100
	cout << "b = " << b << endl;//100
	system("pause");
	return 0;
}
