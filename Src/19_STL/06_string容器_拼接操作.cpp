#include <iostream>
#include <string>
using namespace std;
//06_string容器_拼接操作
/*
string& operator+=(const char* str);                   //重载+=操作符
string& operator+=(const char c);                         //重载+=操作符
string& operator+=(const string& str);                //重载+=操作符
string& append(const char *s);                                //把字符串s连接到当前字符串结尾
string& append(const char *s, int n);                 //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);                           //同operator+=(const string& str)
string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾
*/
void test06()
{
#pragma region +=号的字符串拼接
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;//str1 = 我爱玩游戏
	str1 += ':';
	cout << "str1 = " << str1 << endl;//我爱玩游戏:
	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;//str1 = 我爱玩游戏:LOL DNF
#pragma endregion
#pragma region append的字符串拼接
	string str3 = "I ";
	str3.append("Love ");
	cout << "str3 = " << str3 << endl;//str3 = I Love
	str3.append("game aaddd", 5);
	cout << "str3 = " << str3 << endl;//str3 = I Love game
	str3.append(str2, 4, 3);//只截取DNF, 参数2从哪个位置开始截取,参数3截取字符个数
	cout << "str3 = " << str3 << endl;//str3 = I Love game DNF
	str3.append(str2, 0, 3);
	cout << "str3 = " << str3 << endl;//str3 = I Love game DNFLOL
#pragma endregion

}
int main06()
{
	test06();
	system("pause");
	return 0;
}
