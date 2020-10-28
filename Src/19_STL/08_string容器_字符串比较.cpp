#include <iostream>
#include <string>
using namespace std;
//字符串比较
void test08()
{
	string str1 = "Hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)//str1和str2(标准)比
	{
		cout << "str1等于str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1大于str2" << endl;
	}
	else
	{
		cout << "str1小于str2" << endl;
	}
}
int main08()
{
	test08();
	system("pause");
	return 0;
}
