#include <iostream>
#include <string>
using namespace std;
//05_string容器_赋值操作
/*
string& operator=(const char* s);             //char*类型字符串 赋值给当前的字符串
string& operator=(const string &s);         //把字符串s赋给当前的字符串
string& operator=(char c);                          //字符赋值给当前的字符串
string& assign(const char *s);                  //把字符串s赋给当前的字符串
string& assign(const char *s, int n);     //把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s);              //把字符串s赋给当前字符串
string& assign(int n, char c);                  //用n个字符c赋给当前字符串
*/
void test05()
{
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;//str1 = hello world

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;//str2 = hello world

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;//str3 = a

	string str4;
	str4.assign("hello C++");
	cout << "str4 = " << str4 << endl;//str4 = hello C++

	string str5;
	str5.assign("hello java", 5);
	cout << "str5 = " << str5 << endl;//str5 = hello

	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;//str6 = hello

	string str7;
	str7.assign(10, 'f');
	cout << "str7 = " << str7 << endl;//str7 = ffffffffff
}
int main06()
{
	test05();
	system("pause");
	return 0;
}
