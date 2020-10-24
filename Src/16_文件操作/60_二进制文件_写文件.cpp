#include <iostream>
#include <string>
using namespace std;
#include <fstream>
//60_二进制文件_写文件.cpp
//二进制可以读写自定义类文件
class Person60
{
public:
	char m_Name[64];//姓名
	string m_sex;//性别
	int m_Age;//年龄
};
void test60()
{
	//1.包含头文件
	//2.创建流对象
	ofstream ofs;
	//3.打开文件
	ofs.open("person.txt", ios::out | ios::binary);//ios::out | ios::binary---以二进制的方式写
	//4.写文件

	//5.关闭文件
}
int main()
{
	system("pause");
	return 0;
}
