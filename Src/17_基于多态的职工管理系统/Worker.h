#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间
//职工抽象类
class Worker
{
public:
	Worker();	//构造函数
	//显示职工信息---纯虚函数
	virtual void ShowWorkerInfo() = 0;
	//获取岗位名称
	virtual string getDeptName() = 0;
	~Worker();	//析构函数
protected:
	int m_Id;	//职工编号
	string m_Name;	//职工姓名
	string m_Sex;	//职工性别
	int m_Age;		//职工年龄
	int m_DeptId;	//职工所在部门编号
};