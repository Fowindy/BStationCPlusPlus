#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Identity.h"
#include "GlobalFile.h"
#include "Student.h"
#include <fstream>
#include "Teacher.h"
#include "Administrator.h"
using namespace std;

void administartorMenu(Identity* &identity);//管理员菜单函数声明;
void studentMenu(Identity* identity);//学生菜单函数声明
void teacherMenu(Identity* identity);//教师菜单函数声明
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
		GlobalFile::LimitedInputNumber(id, 0, 9999);
		//cin >> id;
	}
	else if (type == 2)//教师身份
	{
		cout << "请输入您的职工号:" << endl;
		GlobalFile::LimitedInputNumber(id, 0, 9999);
		//cin >> id;
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
				studentMenu(person);
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
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员身份验证
		string fName;//从文件中读取name
		string fpwd;//从文件中读取pwd
		while (ifs >> fName && ifs >> fpwd)
		{
			if (fName == name && fpwd == pwd)
			{
				cout << "管理员验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Administrator(name, pwd);
				//进入管理员子菜单
				administartorMenu(person);
				return;
			}
		}
	}
	cout << "验证身份失败!" << endl;
	system("pause");
	system("cls");
	return;
}
//进入管理员子菜单界面
//************************************
// Method:    administartorMenu
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: Identity *  & identity
// Created:   2020/10/31 5:32
//************************************
void administartorMenu(Identity* &identity)//父类指针传管理员进来
{
	while (true)
	{
		//调用管理员子菜单
		identity->operMenu();//多态,父类指针创建子类对象,调用共同的接口(子类重写的纯虚函数)

		//目前父类的指针只能调用公共的接口,要想调用子类的接口,
		//需将父类指针转为子类指针,可以调用子类里其他接口
		Administrator* admin = (Administrator*)identity;
		//定义选择变量接受用户选择
		int select = 0;
		//接收用户的选择
		//限定用户输入指定区间数字,不为数字则提示
		GlobalFile::LimitedInputNumber(select, 0, 4);
		//采用if---else if结构代替switch(但最好用switch,这里只是复习的需要)
		if (select == 1)//添加账号
		{
			//cout << "添加账号" << endl;
			admin->addAccount();
		}
		else if (select == 2)//查看账号
		{
			//cout << "查看账号" << endl;
			admin->showAccount();
		}
		else if (select == 3)//查看机房
		{
			//cout << "查看机房" << endl;
			admin->showComputerRoom();
		}
		else if (select == 4)//清空预约
		{
			//cout << "清空预约" << endl;
			admin->cleanFile();
		}
		else if (select == 0)//注销登录
		{
			admin->SignOut(identity);
			return;
		}
	}
}
//************************************
// Method:    studentMenu
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: Identity * identity
// Created:   2020/10/31 11:45
//************************************
void studentMenu(Identity* identity)//父类指针传学生进来
{
	while (true)
	{
		//1.调用学生菜单
		identity->operMenu();//多态,父类指针创建子类对象,调用共同的接口(子类重写的纯虚函数)
		//2.父类指针强转子类指针
		Student* stu = (Student*)identity;
		//用于接收用户输入的变量
		int select = 0;
		//限定用户范围输入
		GlobalFile::LimitedInputNumber(select, 0, 4);
		//根据用户选择子流程
		switch (select)
		{
		case 1://申请预约
			stu->applyOrder();
			break;
		case 2://查看我的预约
			stu->showMyOrder();
			break;
		case 3://查看所有预约
			stu->showAllOrder();
			break;
		case 4://取消预约
			stu->cancelOrder();
			break;
		case 0://注销登录
			stu->SignOut(identity);
			return;
		}
	}
}
//************************************
// Method:    teacherMenu
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Parameter: Identity * identity
// Created:   2020/11/01 17:01
//************************************
void teacherMenu(Identity* identity)//父类指针传教师进来
{
	while (true)
	{
		//1.调用老师菜单
		identity->operMenu();
		//2.定义选择变量
		int select = 0;
		//3.接受用户选择
		GlobalFile::LimitedInputNumber(select, 0, 2);
		//4.父类指针强转子类指针
		Teacher* tea = (Teacher*)identity;
		//5.根据用户选择进入相应教师操作流程
		switch (select)
		{
		case 1://查看所有预约
			tea->showAllOrder();
			break;
		case 2://审核预约
			tea->validOrder();
			break;
		case 0://注销登录
			tea->SignOut(identity);
			return;
		}
	}
}
int main()
{
	int select = 0;//用于接收用户的选择
	while (true)
	{
		Show_Menu();
		//接收用户选择
		GlobalFile::LimitedInputNumber(select, 0, 3);
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
