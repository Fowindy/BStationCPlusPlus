#include <iostream>
#include <string>
#include "speechManager.h"
using namespace std;
//构造函数
speechManager::speechManager()
{

}

//************************************
// Method:    show_Menu(显示菜单)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 15:16
//************************************
void speechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//************************************
// Method:    exit_System(退出系统)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 15:28
//************************************
void speechManager::exit_System()
{
	cout << "欢迎下次使用!" << endl;
	system("pause");
	exit(0);
}

//析构函数
speechManager::~speechManager()
{

}
