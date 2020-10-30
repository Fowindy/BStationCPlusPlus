#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "SpeechManager.h"
using namespace std;
int main()
{
	//创建管理类的对象
	SpeechManager sm;
#pragma region 测试代码
#pragma region 测试创建选手
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "选手ID:" << it->first << "\t选手姓名:" << it->second.m_Name << "\t选手成绩:" << it->second.m_Score[0] << endl;
	//}
#pragma endregion

#pragma endregion
	//用于存储用户的输入
	int choice = 0;
	while (true)
	{
		//显示菜单
		sm.show_Menu();
		cout << "请输入您的选择(0~3):" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届比赛记录
			//sm.loadRecord();
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出系统
			sm.exit_System();
			break;
		default:
			system("cls");//清屏
			break;
		}
	}
	system("pause");
	return 0;
}
