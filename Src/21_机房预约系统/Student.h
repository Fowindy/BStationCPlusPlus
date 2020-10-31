#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
#include "Identity.h"
using namespace std;	//使用标准命名空间

class Student :public Identity
{
public:
#pragma region 成员函数
	//构造函数(默认构造)
	Student();

	//有参构造 参数:学号,姓名,密码
	Student(int id, string name, string pwd);

	//菜单界面
	virtual void operMenu();

	//申请预约
	void applyOrder();

	//查看我的预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	//析构函数
	~Student();
#pragma endregion

#pragma region 成员属性
	//学生学号
	int m_id;
#pragma endregion



};