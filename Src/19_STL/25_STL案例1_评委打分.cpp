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
	Player(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	string m_Name;
	int m_Age;
};
int main()
{
	system("pause");
	return 0;
}
