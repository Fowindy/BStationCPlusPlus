#include <iostream>
#include <string>
using namespace std;
int main14()
{
	//作用:用于从键盘获取数据
	//关键字 : cin
	//语法 : cin >> 变量

	//1、整型
	int a = 0;
	std::cout<<"请给整型变量a赋值:"<<std::endl;
	std::cin>>a;
	std::cout<<"整型变量a = "<<a<<std::endl;
	//2、浮点型
	float f = 3.1415926f;
	std::cout<<"请给浮点型变量f赋值:"<<std::endl;
	std::cin>>f;
	std::cout<<"浮点型变量f = "<<f<<std::endl;
	//3、字符型
	char ch = 'a';
	std::cout<<"请给字符型变量赋值ch:"<<std::endl;
	std::cin>>ch;
	std::cout<<"字符型变量ch = "<<ch<<std::endl;
	//4、字符串型
	string str = "";//C++字符串类型不能初始化成NULL
	std::cout<<"请给字符串型变量str赋值:"<<std::endl;
	std::cin>>str;
	std::cout<<"字符串型变量str = "<<str<<std::endl;
	//5、布尔类型
	bool flag = true;
	std::cout<<"请给布尔类型变量flag赋值:"<<std::endl;
	std::cin>>flag;
	std::cout<<"布尔类型变量flag = "<<flag<<std::endl;//输出1或者0;1代表真,0代表假;非0数值字符为真,其余为假
	system("pause");
	return 0;
}
