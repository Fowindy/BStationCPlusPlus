#include <iostream>
#include <string>
using namespace std;
//函数调用运算符重载_伪函数
class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};
class MyAdd
{
public:
	//2.函数运算符重载_int
	//伪函数非常灵活,没有固定写法
	//加法
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void text43()
{
	MyPrint myPrint;
	myPrint("hello world");//1.函数运算符的重载_string
	MyAdd myAdd;
	cout << myAdd(10, 26) << endl;
	//3._匿名函数对象:当前行执行完毕立即释放
	cout << MyAdd()(20, 45) << endl;
}
void myPrint(string text)
{
	cout << text << endl;
}
int main()
{
	text43();
	myPrint("hello world");//函数实现
	system("pause");
	return 0;
}
