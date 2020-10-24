#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间
#include "Worker.h"

class WorkerManager
{
public:
	WorkerManager();	//构造函数
	void ShowMenu();	//显示菜单
	void ExitSystem();	//退出系统
	int m_EmpNum;	//记录文件中的人数
	Worker** m_EmpArray;	//员工数组的指针
	void Add_Emp();	//添加员工的成员函数
	void Save();	//保存数据到文件函数
	bool m_IsFileEmpty;//标志文件是否为空
	int get_EmpNum();//读文件获取人数
	void show_Emp();//显示职工信息函数
	void Init_Emp();//初始化员工函数
	int IsEmpExist(int id);//判断员工是否存在,存在返回员工编号,不存在返回-1
	void Del_Emp();//根据员工id删除离职员工
	void ModifyEmp();//根据员工id修改员工
	void FindEmp();//查找员工
	void Sort_Emp();//按编号排序
	~WorkerManager();	//析构函数
};