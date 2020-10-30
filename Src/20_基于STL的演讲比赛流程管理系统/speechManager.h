#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
#include <vector>
#include <map>
#include "Speaker.h"
using namespace std;	//使用标准命名空间

//设计演讲比赛管理类
class SpeechManager
{
public:
	SpeechManager();	//构造函数
#pragma region 成员属性
	//第一轮比赛选手容器:12人
	vector<int>v1;
	//第二轮比赛选手容器:6人
	vector<int>v2;
	//决胜局比赛选手容器:3人
	vector<int>vVictory;
	//存放编号以及对应选手的容器
	map<int, Speaker> m_Speaker;
	//记录比赛轮数
	int m_Index;
	//记录文件是否存在
	bool fileIsEmpty;
#pragma endregion
#pragma region 成员函数
	void show_Menu();	//菜单功能
	void creatSpeaker();	//创建12名选手
	void startSpeech();	//比赛流程
	void speechContest();	//比赛
	void speechDraw();	//抽签
	void showScore();	//显示得分
	void saveRecord();	//保存记录
	void loadRecord();	//加载记录
	void exit_System();	//退出系统 
	void InitSpeech();	//初始化容器和属性
#pragma endregion

	~SpeechManager();	//析构函数
};