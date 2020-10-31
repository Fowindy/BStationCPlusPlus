#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间

class Identity
{
public:
	Identity();	//构造函数
#pragma region 成员属性
	string m_Name;//姓名
	string m_Pwd;//密码
#pragma endregion
#pragma region 成员函数
	//操作菜单纯虚函数
	virtual void operMenu() = 0;
	//注销登录
	void SignOut(Identity* identity);
#pragma endregion

	~Identity();	//析构函数
};