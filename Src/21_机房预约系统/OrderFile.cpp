using namespace std;
#include "OrderFile.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
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
		//每一条预约进大容器后,清空小容器
		m.clear();
	}
#pragma endregion

#pragma region 测试代码_读取大容器中所有信息
	//for (map<int, map<string, string>>::iterator it = m_OrderData.begin(); it != m_OrderData.end(); it++)
	//{
	//	cout << "第" << it->first + 1 << "条预定信息如下:" << endl;
	//	for (map<string, string>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
	//	{
	//		cout << "key = " << mit->first
	//			<< "\tvalue = " << mit->second << "\t";
	//	}
	//	cout << endl;
	//}
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
// Method:    updateOrder(更新预约记录)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 15:36
//************************************
void OrderFile::updateOrder()
{
	if (this->m_Size == 0)
	{
		return;//预约记录为0条,直接return
	}
	//创建写入流对象_以重写的方式写入
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	for (int i = 0; i < this->m_Size; i++)
	{
		for (map<string, string>::iterator mit = this->m_OrderData[i].begin(); mit != this->m_OrderData[i].end(); mit++)
		{
			ofs << mit->first << ":" << mit->second << ",";
		}
		ofs << endl;
	}
}

