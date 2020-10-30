#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Identity.h"
#include "GlobalFile.h"
#include "Student.h"
#include <fstream>
#include "Teacher.h"
using namespace std;
//************************************
// Method:    Show_Menu(显示菜单)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 0:12
//************************************
void Show_Menu()
{
	cout << "======================  欢迎来到传智播客机房预约系统  ====================="
		<< endl;
	cout << endl << "请输入您的身份" << endl;
	cout << "\t\t -------------------------------\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          1.学生代表           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          2.老    师           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          3.管 理 员           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          0.退    出           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t -------------------------------\n";
	cout << "输入您的选择(0~3): ";
}
//************************************
// Method:    LoginIn(登录功能)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: string fileName(操作者文件名)
// Parameter: int type(操作者身份类型)
// Created:   2020/10/31 0:13
//************************************
void LoginIn(string fileName, int type)
{
	//创建父类指针,用于指向子类对象
	Identity* person = NULL;

	//读文件
	ifstream ifs;
	//打开文件
	ifs.open(fileName, ios::in);
	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在!" << endl;
		ifs.close();
		return;
	}
	//文件存在,准备接受用户信息
	int id = 0;
	string name;
	string pwd;
	//判断身份
	if (type == 1)//学生身份
	{
		cout << "请输入你的学号:" << endl;
		cin >> id;
	}
	else if (type == 2)//教师身份
	{
		cout << "请输入您的职工号:" << endl;
		cin >> id;
	}
	cout << "请输入用户名:" << endl;
	cin >> name;
	cout << "请输入密码:" << endl;
	cin >> pwd;
	if (type == 1)
	{
		//学生身份验证
		int fId;//从文件中读取的id
		string fName;//从文件中读取的name
		string fPwd;//从文件中读取的pwd
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//与用户输入的信息做对比
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "学生验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//进入到学生身份的子菜单
				return;
			}
		}
	}
	else if (type == 2)
	{
		//教师身份验证
		int fId;//从文件中读取的id
		string fName;//从文件中读取的name
		string fPwd;//从文件中读取的pwd
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//与老师输入的信息作对比
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "老师验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//进入到教师身份子菜单
				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员身份验证
	}
	cout << "验证身份失败!" << endl;
	system("pause");
	system("cls");
	return;
}
int main()
{
	int select = 0;//用于接收用户的选择
	while (true)
	{
		Show_Menu();
		cin >> select;//接收用户选择
		switch (select)
		{
		case 1://学生身份
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://老师身份
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://管理员身份
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0://退出系统
			cout << "欢迎下次使用!" << endl;
			system("pause");
			return 0;
			break;
		default://输入有误
			cout << "输入有误,请重新选择!" << endl;
			system("pause");//按任意键继续
			system("cls");//清屏
			break;
		}
	}
	system("pause");
	return 0;
}
