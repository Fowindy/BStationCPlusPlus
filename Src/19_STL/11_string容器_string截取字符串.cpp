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
//案例:截取邮箱用户名
void test011()
{
	string email = "lisi@sina.com";
	int pos = email.find('@');
	string userName = email.substr(0, pos);
	cout << "userName = " << userName << endl;//userName = lisi
}
int main()
{
	test11();
	test011();
	system("pause");
	return 0;
}
