#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间

class ComputerRoom
{
public:
#pragma region 成员函数
	ComputerRoom();	//构造函数
	~ComputerRoom();	//析构函数  
#pragma endregion

#pragma region 成员属性
	int m_RoomId;//机房号
	int m_MaxNum;//机房最大容量
#pragma endregion

};