#include <iostream>
#include <string>
using namespace std;
//字符串插入和删除
void test10()
{
	string str = "hello";
	//1.字符串插入
	str.insert(1, "111");
	cout << "str = " << str << endl;//str = h111ello
	//2.字符串删除
	str.erase(1, 3);
	cout << "str = " << str << endl;//str = hello
}
int main()
{
	test10();
	system("pause");
	return 0;
}
