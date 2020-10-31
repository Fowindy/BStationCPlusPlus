using namespace std;
#include "Student.h"
#include <iostream>
#include <string>
#include "GlobalFile.h"
#include "OrderFile.h"
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
	ofs << "date:" << date << " "
		<< "interval:" << interval << " "
		<< "roomId:" << room << " "
		<< "stuId:" << this->m_id << " "
		<< "stuName" << this->m_Name << " "
		<< "status:" << status
		<< endl;
	//写入完毕关闭文件流
	ofs.close();
	system("pause");
	system("cls");//清屏
}

//查看我的预约
void Student::showMyOrder()
{
	OrderFile of;
}

//查看所有预约
void Student::showAllOrder()
{

}

//取消预约
void Student::cancelOrder()
{

}

//析构函数
Student::~Student()
{

}



