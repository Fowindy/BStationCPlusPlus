#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间
#include "GlobalFile.h"
#include <fstream>
#include <map>

class OrderFile
{
public:
#pragma region 成员函数
	//构造函数
	OrderFile();

	//截取key和value并存放到map
	void SnapStr(string str, map<string, string>& m);

	//析构函数
	~OrderFile();
	//更新预约记录
	void updateOrder();
#pragma endregion
#pragma region 成员属性
	//记录预约条数
	int m_Size;
	//记录所有预约信息的容器 key记录条数 value 每一条所有键值对信息
	map<int, map<string, string>>m_OrderData;
#pragma endregion

};