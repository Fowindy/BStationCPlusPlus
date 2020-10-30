#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <map>
using namespace std;
#define 策划 0
#define 美术 1
#define 研发 2
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
void SetGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3;//0~2
		//将员工插入到分组中
		//key代表部门的编号,value代表员工
		m.insert(make_pair(deptId, *it));
	}
}
void ShowWorkerByGroup(multimap<int, Worker>& m)
{
	//0 A B C 1 D E 2 F G...
	cout << "策划部员工:" << endl;
	multimap<int, Worker>::iterator pos = m.find(策划);
	int count = m.count(策划);//统计策划部门具体人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "  工资:" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "美术部员工:" << endl;
	pos = m.find(美术);
	count = m.count(美术);//统计策划部门具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "  工资:" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "研发部员工:" << endl;
	pos = m.find(研发);
	count = m.count(研发);//统计策划部门具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "  工资:" << pos->second.m_Salary << endl;
	}
}
int main48()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建员工
	vector<Worker>vWorker;
	CreateWorker(vWorker);
#pragma region 创建员工测试
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "姓名:" << it->m_Name << "  工资:" << it->m_Salary << endl;
	//}
#pragma endregion

	//2.员工分组
	multimap<int, Worker>mWorker;
	SetGroup(vWorker, mWorker);

	//3.分组显示员工
	ShowWorkerByGroup(mWorker);
	system("pause");
	return 0;
}
