#include <iostream>
#include <string>
using namespace std;
//04_string容器_构造函数

//string();        					//创建一个空的字符串 例如: string str;(无参构造)
//string(const char* s); 	        //使用字符串s初始化(有参构造)
//string(const string& str);		//使用一个string对象初始化另一个string对象(拷贝构造)
//string(int n, char c);			//使用n个字符c初始化
void test04()
{
	string s1;//无参构造
	const char* str = "hello world";
	string s2(str);//有参构造:和下面等价
	//string s2("helloworld");
	cout << "s2 = " << s2 << endl;

	string s3(s2);//拷贝构造
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}
int main04()
{
	test04();
	system("pause");
	return 0;
}
