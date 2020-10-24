#include <iostream>
#include <string>
using namespace std;
#include <fstream>
//61_二进制文件_读文件
class Person61
{
public:
	char m_Name[64];
	char m_sex[4];
	int m_Age;
};
void test61()
{
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件 并判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);//ios::in | ios::binary---以二进制的方式读
	if (ifs.is_open())
	{
		cout << "文件打开成功!" << endl;
	}
	else
	{
		cout << "文件打开失败!" << endl;
		return;
	}
	//4.读文件
	Person61 p;
	ifs.read((char *)&p, sizeof(Person61));
	cout << "姓名:" << p.m_Name << "性别:" << p.m_sex << "年龄:" << p.m_Age << endl;
	//5.关闭文件
	ifs.close();
}
int main()
{
	test61();
	system("pause");
	return 0;
}
