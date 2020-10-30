using namespace std;
#include "Administrator.h"
#include <iostream>
#include <string>
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

void Administrator::addAccount()
{

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

