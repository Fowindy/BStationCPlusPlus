#include <iostream>
#include <string>
using namespace std;
int* func()
{
	//利用new关键字,可以将数据开辟到堆区
	//指针本质也是一个局部变量,放在栈上,
	int* p = new int(10);//用指针接收堆区开辟数据的地址,指针保存的数据是放在了堆区
	return p;
}
int main03()
{
	//在堆区开辟数据
	int *p = func();
	cout << *p << endl;//10
	cout << *p << endl;//10
	system("pause");
	return 0;
}
