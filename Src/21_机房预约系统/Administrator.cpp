using namespace std;
#include "Administrator.h"
#include <iostream>
#include <string>
#include "GlobalFile.h"
//构造函数
Administrator::Administrator()
{

}

Administrator::Administrator(string name, string pwd)
{
	//初始化管理员信息
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//添加账号
void Administrator::addAccount()
{
	cout << "请输入添加账号的类型:" << endl;
	cout << "1、添加学生" << endl;
	cout << "2、添加老师" << endl;
	int select = 0;
	GlobalFile::LimitedInputNumber(select, 1, 2);
}

void Administrator::showAccount()
{

}

void Administrator::showComputerRoom()
{

}

void Administrator::cleanFile()
{

}

//析构函数
Administrator::~Administrator()
{

}

//菜单界面
void Administrator::operMenu()
{
	cout << "欢迎管理员：" << this->m_Name << "登录！" << endl;
	cout << "\t\t ---------------------------------\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          1.添加账号            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          2.查看账号            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          3.查看机房            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          4.清空预约            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          0.注销登录            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t ---------------------------------\n";
	cout << "请选择您的操作： " << endl;
}

