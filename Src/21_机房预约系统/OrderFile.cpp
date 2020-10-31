using namespace std;
#include "OrderFile.h"
#include <iostream>
#include <string>
//构造函数
OrderFile::OrderFile()
{
	//创建读取流对象
	ifstream ifs;
	//打开读取预定文件
	ifs.open(ORDER_FILE, ios::in);

#pragma region 定义临时存储读取的变量
	string date;	//日期
	string interval;	//时间段
	string room;	//机房编号
	string stuId;	//学生编号
	string stuName;	//学生姓名
	string status;	//预约状态
#pragma endregion

	this->m_Size = 0;//预约条数初始化为0
	//读取文件
	while (ifs >> date && ifs >> interval && ifs >> room && ifs >> stuId && ifs >> stuName && ifs >> status)
	{
		//循环一次预约条数加一条
		this->m_Size++;
#pragma region 测试代码
		//cout << date << endl;
		//cout << interval << endl;
		//cout << stuId << endl;
		//cout << stuName << endl;
		//cout << room << endl;
		//cout << status << endl;
#pragma endregion
#pragma region 截取每一条预定信息存储到map容器
		map<string, string>m;
		SnapStr(date, m);
		SnapStr(interval, m);
		SnapStr(room, m);
		SnapStr(stuId, m);
		SnapStr(stuName, m);
		SnapStr(status, m);
#pragma endregion
		//将每一笔预约信息加载进预约容器
		m_OrderData.insert(make_pair(this->m_Size, m));
		m.clear();
	}
}

void OrderFile::SnapStr(string str, map<string, string>& m)
{
	//date:1
	//分割 key和value
	int pos = str.find(":");
	string key;
	string value;
	if (pos != -1)
	{
		key = str.substr(0, pos);
		value = str.substr(pos + 1, str.size() - pos - 1);
		m.insert(make_pair(key, value));
	}
}

//析构函数
OrderFile::~OrderFile()
{

}

//************************************
// Method:    updateOrder
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 15:36
//************************************
void OrderFile::updateOrder()
{

}

