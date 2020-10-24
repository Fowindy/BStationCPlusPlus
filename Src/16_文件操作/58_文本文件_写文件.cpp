#include <iostream>
#include <string>
using namespace std;
#include <fstream>
//58_文本文件_写文件
void test58()
{
	//1.包含头文件
	//2.创建写入流对象
	ofstream ofs;
	//3.指定打开目录,打开方式
	ofs.open("test.txt", ios::out);//文件输出位置在当前cpp所在目录
	//4.写内容
	ofs << "姓名:张三" << endl;
	ofs << "性别:男" << endl;
	ofs << "年龄:19" << endl;
	//5.关闭写入流
	ofs.close();
}
int main()
{
	test58();
	system("pause");
	return 0;
}
