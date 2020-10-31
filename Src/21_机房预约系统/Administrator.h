#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
#include "Identity.h"
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "computerRoom.h"
using namespace std;	//使用标准命名空间

class Administrator :public Identity
{
public:
#pragma region 成员函数
	Administrator();	//构造函数
	~Administrator();	//析构函数

	//菜单界面
	virtual void operMenu() override;

	//有参构造
	Administrator(string name, string pwd);

	//添加账号
	void addAccount();

	//查看账号
	void showAccount();

	//查看机房信息
	void showComputerRoom();

	//清空预约记录
	void cleanFile();

	//初始化容器
	void initVector();

	//检查重复
	//************************************
	// Method:    checkRepeat
	// Access:    public 
	// Returns:   bool
	// Author: 	  Fowindy
	// Parameter: int id(对象id号)
	// Parameter: int type(对象类型)
	// Created:   2020/10/31 9:13
	//************************************
	bool checkRepeat(int id, int type);
#pragma endregion
#pragma region 成员属性
	//学生容器
	vector<Student>vStu;
	//教师容器
	vector<Teacher>vTea;
	//机房容器
	vector<ComputerRoom>vCom;
#pragma endregion

};