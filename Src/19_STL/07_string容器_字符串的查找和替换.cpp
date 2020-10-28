#include <iostream>
#include <string>
using namespace std;
//07_string容器_字符串的查找和替换
//1.查找
void test07()
{
	string str1 = "abcdefgde";
	int position = str1.find("de");//没有找到返回-1,找到返回index
	if (position != -1)
	{
		cout << "找到字符串!" << "position = " << position << endl;//position = 3
	}
	else
	{
		cout << "没有找到字符串!" << endl;
	}
	//rfind和find的区别
	//rfind从右往左查找 find从左往右查找
	position = str1.rfind("de");
	cout << "position = " << position << endl;//position = 7
}
//2.替换
void test007()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//参数1:替换起始位;参数2:使用目标字符替代的位数
	cout << "str1 = " << str1 << endl;//str1 = a1111efg
}
int main07()
{
	test07();
	test007();
	system("pause");
	return 0;
}
