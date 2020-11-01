using namespace std;
#include "Student.h"
#include <iostream>
#include <string>
#include "GlobalFile.h"
#include "OrderFile.h"
#include <process.h>
//构造函数
Student::Student()
{

}

//有参构造 参数:学号,姓名,密码
Student::Student(int id, string name, string pwd)
{
#pragma region 初始化属性
	this->m_id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;
#pragma endregion

#pragma region 获取机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	//创建机房对象
	ComputerRoom com;
	while (ifs >> com.m_RoomId && ifs >> com.m_MaxNum)
	{
		//将读取的机房对象加载到机房容器中
		vCom.push_back(com);
	}
	//读取完毕,关闭资源
	ifs.close();
#pragma endregion
}

//菜单界面
//************************************
// Method:    operMenu
// Access:    virtual public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 11:47
//************************************
void Student::operMenu()
{
	cout << "欢迎学生代表：" << this->m_Name << "登录！" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          1.申请预约              |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          2.查看我的预约          |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          3.查看所有预约          |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          4.取消预约              |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          0.注销登录              |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "请选择您的操作： " << endl;
}

//申请预约
//************************************
// Method:    applyOrder
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 14:50
//************************************
void Student::applyOrder()
{
	cout << "机房开放时间为周一至周五！" << endl;
	cout << "请输入申请预约的时间:" << endl;
	cout << "1、周一" << endl;
	cout << "2、周二" << endl;
	cout << "3、周三" << endl;
	cout << "4、周四" << endl;
	cout << "5、周五" << endl;
	//周几
	int date = 0;
	//上午/下午
	int interval = 0;
	//机房
	int room = 0;
	//预定状态
	int status = 0;
	GlobalFile::LimitedInputNumber(date, 1, 5);
	cout << "请输入申请预约的时间段：" << endl;
	cout << "1、上午" << endl;
	cout << "2、下午" << endl;
	GlobalFile::LimitedInputNumber(interval, 1, 2);
	cout << "请选择机房：" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_RoomId << "号机房容量：" << vCom[i].m_MaxNum << endl;
	}
	GlobalFile::LimitedInputNumber(room, 1, 3);
	cout << "预约成功!审核中..." << endl;
	status = 1;
	//上传预约信息
	ofstream ofs(ORDER_FILE, ios::app | ios::out);
#pragma region txt方式写入
	//ofs << "date:" << date << " "
	//	<< "interval:" << interval << " "
	//	<< "roomId:" << room << " "
	//	<< "stuId:" << this->m_id << " "
	//	<< "stuName:" << this->m_Name << " "
	//	<< "status:" << status
	//	<< endl;
#pragma endregion
#pragma region csv方式写入_可与txt逗号方式兼容
	ofs << "date:" << date << ","
		<< "interval:" << interval << ","
		<< "roomId:" << room << ","
		<< "status:" << status << ","
		<< "stuId:" << this->m_id << ","
		<< "stuName:" << this->m_Name
		<< endl;
#pragma endregion
	//写入完毕关闭文件流
	ofs.close();
	system("pause");
	system("cls");//清屏
}

//查看我的预约
void Student::showMyOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}
	//记录编号
	int index = 0;
	for (int i = 0; i < of.m_Size; i++)
	{
		// string 转int
		// string利用.c-str()转const char *
		//利用atoi ( const char *)转int
		if (atoi(of.m_OrderData[i]["stuId"].c_str()) == this->m_id)//查找自身预约
		{
			cout << "第" << ++index << "条" << "\t";
			cout << "星期:周" << of.m_OrderData[i]["date"] << "\t";
			cout << "时段:" << (of.m_OrderData[i]["roomId"] == "1" ? "上午" : "下午") << "\t";
			cout << "机房:" << of.m_OrderData[i]["roomId"] << "号机房" << "\t";
			string status = "状态:";//0:取消预约;1:审核中;2:已预约;-1:预约失败
			int statusIndex = atoi(of.m_OrderData[i]["status"].c_str());
			switch (statusIndex)
			{
			case 0://取消预约
				status += "已取消";
				break;
			case 1://审核中
				status += "审核中";
				break;
			case 2://已预约
				status += "已预约";
				break;
			case -1://预约失败
				status += "预约失败:审核不通过";
				break;
			default://状态不明
				status += "状态不明,请检查预约文件是否有误!";
				break;
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
	return;
}

//查看所有预约
void Student::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << "第" << i + 1 << "条" << "\t";
		cout << "学号:" << of.m_OrderData[i]["stuId"] << "\t";
		cout << "姓名:" << of.m_OrderData[i]["stuName"] << "\t";
		cout << "星期:周" << of.m_OrderData[i]["date"] << "\t";
		cout << "时段:" << (of.m_OrderData[i]["roomId"] == "1" ? "上午" : "下午") << "\t";
		cout << "机房:" << of.m_OrderData[i]["roomId"] << "号机房" << "\t";
		string status = "状态:";//0:取消预约;1:审核中;2:已预约;-1:预约失败
		int statusIndex = atoi(of.m_OrderData[i]["status"].c_str());
		switch (statusIndex)
		{
		case 0://取消预约
			status += "已取消";
			break;
		case 1://审核中
			status += "审核中";
			break;
		case 2://已预约
			status += "已预约";
			break;
		case -1://预约失败
			status += "预约失败";
			break;
		default://状态不明
			status += "状态不明,请检查预约文件是否有误!";
			break;
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
	return;
}

//取消预约
void Student::cancelOrder()
{
	//创建预约文件对象
	OrderFile of;
	//判断预约对象中存储的条数是否为0,为0提示退出
	if (of.m_Size == 0)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}
	//提示用户输入取消的标号
	cout << "请输入需要取消的序号(0代表返回):" << endl;
	//记录取消的编号
	int index = 0;
	//定义用户选择
	int select = 0;
	//建立文件编号和取消编号的映射关系容器
	map<int, int>mIndex;
	//取消自己预约成功或审核中的预约
	//遍历所有预约
	for (int i = 0; i < of.m_Size; i++)
	{
		//1.限定自己
		if (atoi(of.m_OrderData[i]["stuId"].c_str()) == this->m_id)
		{
			//2.限定状态为预约成功:1或审核:2的预约
			if (atoi(of.m_OrderData[i]["status"].c_str()) == 1 || atoi(of.m_OrderData[i]["status"].c_str()) == 2)
			{
				cout << ++index << "、";
				//将映射关系加载进容器
				mIndex[index] = i;
				//将可取消的预约显示给用户选择
				cout << "星期:周" << of.m_OrderData[i]["date"] << "\t";
				cout << "时段:" << (of.m_OrderData[i]["roomId"] == "1" ? "上午" : "下午") << "\t";
				cout << "机房:" << of.m_OrderData[i]["roomId"] << "号机房" << "\t";
				string status = "状态:";//0:取消预约;1:审核中;2:已预约;-1:预约失败
				int statusIndex = atoi(of.m_OrderData[i]["status"].c_str());
				switch (statusIndex)
				{
				case 1://审核中
					status += "审核中";
					break;
				case 2://已预约
					status += "已预约";
					break;
				}
				cout << status << endl;
				//取消预约:将状态置为取消状态:0
				//of.m_OrderData[i]["status"] = "0";
			}
		}
	}
	//限定用户选择
	GlobalFile::LimitedInputNumber(select, 0, index);
	if (select == 0)
	{
		cout << "返回上一级" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		//根据映射取消预约
		of.m_OrderData[mIndex[select]]["status"] = "0";
		//提示
		cout << "取消成功!" << endl;
	}
	//更新预约状态
	of.updateOrder();
	system("pause");
	system("cls");
	return;
}

//析构函数
Student::~Student()
{

}



