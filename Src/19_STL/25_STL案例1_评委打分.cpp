#include <iostream>
#include <string>
#include <vector>
#include <deque>
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
void test25()
{
	//1.创建5名选手
	vector<Player> v;//存放选手的容器
	v.resize(5);
	CreatePlayer(v);
#pragma region 创建选手测试
	for (int i = 0; i < v.size(); i++)
	{
		cout << "姓名:" << v[i].m_Name << "\t" << "打分:" << v[i].m_Score << endl;
	}
#pragma endregion

	//2.给5名选手打分
	//3.显示最后得分
}
int main()
{
	test25();
	system("pause");
	return 0;
}
