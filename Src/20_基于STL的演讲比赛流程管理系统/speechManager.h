#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间

//设计演讲比赛管理类
class speechManager
{
public:
	speechManager();	//构造函数
	void show_Menu();	//菜单功能
	void exit_System();	//退出系统
	~speechManager();	//析构函数
};