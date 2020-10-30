#include <iostream>
#include <string>
#include "SpeechManager.h"
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
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
// Method:    startSpeech(比赛流程)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 16:51
//************************************
void SpeechManager::startSpeech()
{
	//第一轮比赛
	//1、抽签
	this->speechDraw();
	//2、比赛
	this->speechContest();
	//3、显示晋级结果

	//第二轮比赛

	//1、抽签

	//2、比赛

	//3、显示最终结果

	//4、保存分数
}

//************************************
// Method:    speechContest(比赛)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 17:11
//************************************
void SpeechManager::speechContest()
{
	cout << "------------------第" << this->m_Index << "轮比赛正式开始----------------" << endl;
	//准备临时容器,存放小组成绩
	multimap<double, int, greater<double>> groupScore;
	int num = 0;//记录人员个数 6人一组
	vector<int>v_Src;//比赛选手容器
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//评委打分容器
		deque<double>d;
		//cout << "------------------选手" << *it << "得分如下:----------------" << endl;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//60.0~100.0
			//显示该选手10个分数
			//cout << score << "\t";
			//将该选手10个分数存入容器
			d.push_back(score);
		}
		//cout << endl;
		//将该选手10个分数进行降序排列
		sort(d.begin(), d.end(), greater<double>());
		//去除最高分
		d.pop_front();
		//去除最低分
		d.pop_back();
		//该选手累加总分
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		//该选手的平均分
		double avg = sum / (double)d.size();
		//将平均分放入到map容器中
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;
		//打印平均分
		//cout << "选手编号:" << *it << "\t选手姓名:" << this->m_Speaker[*it].m_Name << "\t选手平均分:" << this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
		//将打分数据,放到临时小组容器中
		groupScore.insert(make_pair(avg, *it));//key是得分,value是具体选手编号
		//每6人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次如下:" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "选手编号:" << it->second << "\t选手姓名:" << this->m_Speaker[it->second].m_Name << "\t选手平均分:" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}
			//取出前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();
		}
	}
	cout << "------------------第" << this->m_Index << "轮比赛完毕----------------" << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

//************************************
// Method:    speechDraw(抽签)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/30 16:53
//************************************
void SpeechManager::speechDraw()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	cout << "第<< " << this->m_Index << " >>轮选手正在抽签" << endl;
	cout << "----------------------------------" << endl;
	cout << "抽签后演讲顺序如下:" << endl;
	if (this->m_Index == 1)
	{
		//第一轮比赛
		random_shuffle(this->v1.begin(), this->v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//第二轮比赛
		random_shuffle(this->v2.begin(), this->v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "----------------------------------" << endl;
	system("pause");
	cout << endl;
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
