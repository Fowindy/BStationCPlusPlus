using namespace std;
#include "Teacher.h"
#include <iostream>
#include <string>
#include "Student.h"
#include "OrderFile.h"
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

//************************************
// Method:    validOrder(审核预约)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/11/01 17:22
//************************************
void Teacher::validOrder()
{
	//1.创建预约文件对象
	OrderFile of;
	//定义当前列表编号
	int index = 0;
	//定义当前列表和文件列表编号映射容器
	map<int, int>m_Index;
	//提示教师可审核的预约如下:
	cout << "当前预约列表如下:" << endl;
	for (int i = 0; i < of.m_Size; i++)
	{
		//限定预约状态:审核中(1)
		if (atoi(of.m_OrderData[i]["status"].c_str()) == 1)
		{
			cout << ++index << "、";
			//建立映射关系
			m_Index[index] = i;
			cout << "学号:" << of.m_OrderData[i]["stuId"] << "\t";
			cout << "姓名:" << of.m_OrderData[i]["stuName"] << "\t";
			cout << "星期:周" << of.m_OrderData[i]["date"] << "\t";
			cout << "时段:" << (of.m_OrderData[i]["roomId"] == "1" ? "上午" : "下午") << "\t";
			cout << "机房:" << of.m_OrderData[i]["roomId"] << "号机房" << "\t";
			cout << "状态:" << "审核中" << endl;
		}
	}
	if (index == 0)
	{
		cout << "当前没有需要审批的预约!" << endl;
		system("pause");
		system("cls");
		return;
	}
	//提示用户输入选择
	cout << "请选择要审核的序号(0:返回上一级):";
	//定义选择变量
	int select;
	//调用限定输入函数
	GlobalFile::LimitedInputNumber(select, 0, index);
	if (select == 0)
	{
		cout << "返回上一级" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		//定义审批选择变量
		int validSelect = 0;
		//提示用户输入审核结果:
		cout << "请输入审核结果" << endl;
		cout << "1、通过" << endl;
		cout << "2、不通过" << endl;
		//调用限定输入函数
		GlobalFile::LimitedInputNumber(validSelect, 1, 2);
		//执行对应审批操作
		switch (validSelect)
		{
		case 1://通过
			of.m_OrderData[m_Index[select]]["status"] = "2";
			break;
		case 2://不通过
			of.m_OrderData[m_Index[select]]["status"] = "-1";
			break;
		}
		//更新状态
		of.updateOrder();
		cout << "审核完毕!" << endl;
	}
	system("pause");
	system("cls");
	return;
}

//析构函数
Teacher::~Teacher()
{

}


