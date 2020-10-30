#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间

class speaker
{
public:
	speaker();	//构造函数
	string m_Name;//姓名
	double m_Score[2];//分数 最多有两轮的得分
	~speaker();	//析构函数
};