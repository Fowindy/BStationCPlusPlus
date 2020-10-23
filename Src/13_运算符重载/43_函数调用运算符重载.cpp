#include <iostream>
#include <string>
using namespace std;
//函数调用运算符重载
class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};
void text43()
{
	MyPrint myPrint;
	myPrint("hello world");//1.函数运算符的重载_string
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
