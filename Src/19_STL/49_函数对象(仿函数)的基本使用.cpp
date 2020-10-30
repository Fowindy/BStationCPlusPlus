#include <iostream>
#include <string>
using namespace std;
//函数对象(仿函数)
/*
* 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 函数对象可以作为参数传递
*/
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string text)
	{
		cout << text << endl;
		this->count++;
	}
	int count;//内部状态
};
//1.函数对象在使用的时候,可以像普通函数那样调用,可以有参数,可以有返回值
void test49()
{
	MyAdd myAdd;//不是一个真正的函数,而是一个类对象
	cout << myAdd(10, 10) << endl;//20
}
//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
void test049()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "myPrint调用的次数为:" << myPrint.count << endl;//4
}
int main()
{
	test49();
	test049();
	system("pause");
	return 0;
}
