using namespace std;
#include "Teacher.h"
#include <iostream>
#include <string>
#include "Student.h"
//构造函数
Teacher::Teacher()
{

}

//************************************
// Method:    Teacher
// Access:    public 
// Returns:   
// Author: 	  Fowindy
// Parameter: int empId
// Parameter: string name
// Parameter: string pwd
// Created:   2020/11/01 16:55
//************************************
Teacher::Teacher(int empId, string name, string pwd)
{
	//初始化属性
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//************************************
// Method:    operMenu(教师菜单)
// Access:    virtual public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/11/01 16:53
//************************************
void Teacher::operMenu()
{
	cout << "欢迎教师：" << this->m_Name << "登录！" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.查看所有预约          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.审核预约              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.注销登录              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "请选择您的操作： " << endl;
}

//************************************
// Method:    showAllOrder
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/11/01 17:22
//************************************
void Teacher::showAllOrder()
{
	//创建学生对象
	Student stu;
	//调用学生显示所有预约的接口
	stu.showAllOrder();
}

void Teacher::validOrder()
{

}

//析构函数
Teacher::~Teacher()
{

}


