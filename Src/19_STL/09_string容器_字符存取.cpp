#include <iostream>
#include <string>
using namespace std;
//string字符存取
void test09()
{
	string str = "hello";
	cout << "str = " << str << endl;//hello
	//1.通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";//h e l l o
	}
	cout << endl;
	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";//h e l l o
	}
	cout << endl;
	//3.修改单个字符
	str[0] = 'x';
	cout << "str = " << str << endl;//str = xello
}
int main()
{
	test09();
	system("pause");
	return 0;
}
