#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
#include "Identity.h"
using namespace std;	//使用标准命名空间

class Teacher :public Identity
{
public:
	Teacher();	//构造函数
	//有参构造
	Teacher(int empId, string name, string pwd);
	//菜单界面
	virtual void operMenu() override;
	//查看所有预约
	void showAllOrder();
	//审核预约
	void validOrder();
	~Teacher();	//析构函数
};