#include <iostream>
#include <string>
#include "SpeechManager.h"
using namespace std;
//构造函数
SpeechManager::SpeechManager()
{
	//在构造函数中调用初始化容器和属性
	this->InitSpeech();
	//在构造函数中调用创建选手
	this->creatSpeaker();
}

//************************************
// Method:    show_Menu(显示菜单)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 15:16
//************************************
void SpeechManager::show_Menu()
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
// Method:    creatSpeaker(创建12名选手)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 16:09
//************************************
void SpeechManager::creatSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		//实例化选手
		Speaker sp;
		//选手的名字
		string name = "选手";
		name += nameSeed[i];
		sp.m_Name = name;
		//选手的分数
		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}
		//选手的编号
		int id = 10001 + i;
		//将选手编号加载到第一轮选手容器中
		this->v1.push_back(id);
		//将编号和选手加载到map容器中
		this->m_Speaker.insert(make_pair(id, sp));
	}
}
//************************************
// Method:    exit_System(退出系统)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 15:28
//************************************
void SpeechManager::exit_System()
{
	cout << "欢迎下次使用!" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::InitSpeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	//初始化比赛轮数为1
	this->m_Index = 1;
}

//析构函数
SpeechManager::~SpeechManager()
{

}
