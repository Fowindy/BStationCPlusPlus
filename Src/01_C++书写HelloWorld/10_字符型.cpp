#include <iostream>
using namespace std;
int main10()
{
	//C和c++中字符型变量只占用1个字节
	//字符型变量并不是把实符本身放到内存中存储, 而是将对应的ASCCI编码放入到存储单元
	//1、字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;
	//2、字符型变量所占内存大小
	std::cout<<"char字符型变量所占内存为:"<<sizeof(ch)<<std::endl;
	//3、字符型变量常见错误
	//char ch2 = "b";//创建字符型变量的时候要使用单引号
	//char ch3 = 'abcd123';//创建字符型变量的时候,单引号内只能有一个字符
	//4、字符型变量对应ASCII编码
	//a-97
	//A-65
	system("pause");
	return 0;
}
