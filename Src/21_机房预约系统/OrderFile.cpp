using namespace std;
#include "OrderFile.h"
#include <iostream>
#include <string>
#include <vector>
#include<sstream>
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
#pragma region 读取文件_txt方式
//	//读取文件_txt方式
//	while (ifs >> date && ifs >> interval && ifs >> room && ifs >> stuId && ifs >> stuName && ifs >> status)
//	{
//#pragma region 测试代码
//		//cout << date << endl;
//		//cout << interval << endl;
//		//cout << stuId << endl;
//		//cout << stuName << endl;
//		//cout << room << endl;
//		//cout << status << endl;
//#pragma endregion
//#pragma region 截取每一条预定信息存储到map容器
//		map<string, string>m;
//		SnapStr(date, m);
//		SnapStr(interval, m);
//		SnapStr(room, m);
//		SnapStr(stuId, m);
//		SnapStr(stuName, m);
//		SnapStr(status, m);
//#pragma endregion
//		//将每一笔预约信息map小容器加载进预约大容器中
//		m_OrderData.insert(make_pair(this->m_Size, m));
//		//循环一次预约条数加一条
//		this->m_Size++;
//	}
#pragma endregion
#pragma region 读取文件_csv方式_可与txt逗号方式兼容
	string data;
	map<string, string>m;
	while (getline(ifs, data)) //读取一行
	{
		istringstream iss(data);
		string col;
		while (getline(iss, col, ',')) //读取每行逗号分割的每一段
		{
			//将每一段用:号分割存入map容器
			SnapStr(col, m);
		}
		//将每一笔预约信息map小容器加载进预约大容器中
		m_OrderData.insert(make_pair(this->m_Size, m));
		//循环一次预约条数加一条
		this->m_Size++;
	}

#pragma endregion

#pragma region 测试代码_读取大容器中所有信息
	for (map<int, map<string, string>>::iterator mit = m_OrderData.begin(); mit != m_OrderData.end(); mit++)
	{
		cout << "第" << mit->first + 1 << "条预定信息如下:" << endl;
		for (map<string, string>::iterator it = mit->second.begin(); it != mit->second.end(); it++)
		{
			cout << "key = " << it->first
				<< "\tvalue = " << it->second << "\t";
		}
		cout << endl;
	}
#pragma endregion
	//读取完毕,关闭流
	ifs.close();
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

