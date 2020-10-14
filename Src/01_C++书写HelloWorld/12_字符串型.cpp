#include <iostream>
#include <string>//用C++风格字符串时候，要包含这个头文件
using namespace std;
int main12()
{
	//字符串型:用于表示一串字符
	//1.C风格字符串：
	char chs[] = "字符串值";
	//注意事项1:char 字符串名[]
	//注意事项2:等号后面要用双引号包含起来字符串
	char str1[] = "C风格字符串:helloWorld";
	std::cout<<str1<<std::endl;
	//2.C++风格字符串:
	//包含一个头文件	#include <string>
	string str2 = "C++风格字符串:helloWorld";
	std::cout<<str2<<std::endl;
	system("pause");
	return 0;
}
