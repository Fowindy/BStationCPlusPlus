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
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.打开文件
	//ofs.open("person.txt", ios::out | ios::binary);//ios::out | ios::binary---以二进制的方式写
	//4.写文件
	Person60 p{ "张三","男",23 };
	ofs.write((const char*)&p, sizeof(p));//二进制写入的方式,打开可能为乱码
	//5.关闭文件
	ofs.close();
}
int main()
{
	test60();
	system("pause");
	return 0;
}
