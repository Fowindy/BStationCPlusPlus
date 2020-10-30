#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
#include "Identity.h"
using namespace std;	//使用标准命名空间

class Administrator :public Identity
{
public:
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
};