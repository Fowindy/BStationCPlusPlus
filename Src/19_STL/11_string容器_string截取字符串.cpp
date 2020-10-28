#include <iostream>
#include <string>
using namespace std;
//11_string容器_string截取字符串
void test11()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;//subStr = bcd
}
int main()
{
	test11();
	system("pause");
	return 0;
}
