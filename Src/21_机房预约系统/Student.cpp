using namespace std;
#include "Student.h"
#include <iostream>
#include <string>
#include "GlobalFile.h"
#include "computerRoom.h"
//构造函数
Student::Student()
{

}

//有参构造 参数:学号,姓名,密码
Student::Student(int id, string name, string pwd)
{
#pragma region 初始化属性
	this->m_id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;
#pragma endregion

#pragma region 获取机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	//创建机房对象
	ComputerRoom com;
	while (ifs >> com.m_RoomId && ifs >> com.m_MaxNum)
	{
		//将读取的机房对象加载到机房容器中
		vCom.push_back(com);
	}
	//读取完毕,关闭资源
	ifs.close();
#pragma endregion
}

//菜单界面
//************************************
// Method:    operMenu
// Access:    virtual public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 11:47
//************************************
void Student::operMenu()
{
	cout << "欢迎学生代表：" << this->m_Name << "登录！" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          1.申请预约              |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          2.查看我的预约          |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          3.查看所有预约          |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          4.取消预约              |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          0.注销登录              |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "请选择您的操作： " << endl;
}

//申请预约
void Student::applyOrder()
{

}

//查看我的预约
void Student::showMyOrder()
{

}

//查看所有预约
void Student::showAllOrder()
{

}

//取消预约
void Student::cancelOrder()
{

}

//析构函数
Student::~Student()
{

}



