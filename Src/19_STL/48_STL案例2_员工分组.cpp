#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/
class Worker
{
public:
	string m_Name;//姓名
	int m_Salary;//工资
};
void CreateWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;//10000~19999
		v.push_back(worker);
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建员工
	vector<Worker>vWorker;
	CreateWorker(vWorker);
#pragma region 创建员工测试
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "姓名:" << it->m_Name << "  工资:" << it->m_Salary << endl;
	}
#pragma endregion
	system("pause");
	return 0;
}
