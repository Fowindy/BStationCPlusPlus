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
		cout << str[i] << " ";
	}
	cout << endl;
}
int main()
{
	test09();
	system("pause");
	return 0;
}
