#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
using namespace std;
//案例描述:
//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。

//选手类
class Player
{
public:
	Player() {}
	Player(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;//姓名
	int m_Score;//平均分
};
void CreatePlayer(vector<Player>& v)
{
	string nameSeed = "ABCDE";
	int score = 0;
	for (int i = 0; i < v.size(); i++)
	{
		string name = "选手";
		//定义选手名字
		name += nameSeed[i];
		//实例化选手
		Player p(name, score);
		//将创建的选手对象放入容器中
		v[i] = p;
	}
}
//打分
void SetScore(vector<Player>& v)
{
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的打分放入deque容器中
		deque<int> score;
		//十个评委
		score.resize(10);
		//评委打分
		cout << "姓名:" << it->m_Name << "\t";
		for (int i = 0; i < score.size(); i++)
		{
			score[i] = rand() % 41 + 60;//60-100分钟随机数
			cout << score[i] << "\t";
		}
		cout << endl;
		//排序---升序
		sort(score.begin(), score.end());
		//去除最低分
		score.pop_front();
		//去除最高分
		score.pop_back();
		//求平均分
		int sum = 0;
		for (int i = 0; i < score.size(); i++)
		{
			sum += score[i];
		}
		//把平均分赋值到选手对象属性上
		(*it).m_Score = sum / score.size();
	}
}
void ShowScore(vector<Player>& v)
{
	cout << "选手平均分如下:" << endl;
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名:" << (*it).m_Name << "\t分数:" << (*it).m_Score << endl;
	}
}
void test25()
{
	//1.创建5名选手
	vector<Player> v;//存放选手的容器
	v.resize(5);
	CreatePlayer(v);
#pragma region 创建选手测试
	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << "姓名:" << v[i].m_Name << "\t" << "打分:" << v[i].m_Score << endl;
	//}
#pragma endregion

	//2.给5名选手打分
	SetScore(v);
#pragma region 打分测试
	//cout << "选手平均分如下:" << endl;
	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << "姓名:" << v[i].m_Name << "\t分数:" << v[i].m_Score << endl;
	//}
#pragma endregion

	//3.显示最后得分
	ShowScore(v);
}
int main25()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	test25();
	system("pause");
	return 0;
}
