#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间
#include "Worker.h"

class Manager :public Worker
{
public:
	Manager(int id, string name, string sex, int age, int deptId);	//构造函数
	//显示职工信息---纯虚函数
	virtual void ShowWorkerInfo();
	//获取岗位名称
	virtual string getDeptName();
	~Manager();	//析构函数
};