#include <iostream>
#include <string>
using namespace std;
#include <fstream>
//59_文本文件_读文件.cpp
void test59()
{
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件并且判断是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	else
	{
		cout << "文件打开成功" << endl;
	}
	//4.读数据
#pragma region 1.第一种读取方式_buf数组
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
#pragma endregion
#pragma region 2.第二种读取方式_getLine
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
#pragma endregion
#pragma region 3.第三种读取方式_getLine(函数)
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}
#pragma endregion
#pragma region 4.第四种读取方式_get(单字符读取,不推荐)
	char c;
	while ((c = ifs.get()) != EOF)//EOF end of file
	{
		cout << c;
	}
#pragma endregion
	//5.关闭文件
	ifs.close();
}
int main59()
{
	test59();
	system("pause");
	return 0;
}
