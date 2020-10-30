#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "speechManager.h"
using namespace std;
int main()
{
	//创建管理类的对象
	speechManager sm;
	//显示菜单
	sm.show_Menu();
	//用于存储用户的输入
	int choice = 0;
	cout << "请输入您的选择:" << endl;
	cin >> choice;
	while (true)
	{
		sm.show_Menu();
		switch (choice)
		{
		case 1://开始比赛
			break;
		case 2://查看往届比赛记录
			break;
		case 3://清空比赛记录
			break;
		case 0://退出系统
			break;
		default:
			system("cls");//清屏
			break;
		}
	}
	system("pause");
	return 0;
}
