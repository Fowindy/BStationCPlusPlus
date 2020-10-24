#include <iostream>
#include <string>
#include "Manager.h"
#include <iomanip>
using namespace std;
Manager::Manager(int id, string name, string sex, int age, int deptId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Sex = sex;
	this->m_Age = age;
	this->m_DeptId = deptId;
}
void Manager::ShowWorkerInfo()
{
	cout << "职工编号:" << setw(4) << setfill('0') << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t职工性别:" << this->m_Sex
		<< "\t职工年龄:" << this->m_Age
		<< "\t职工部门编号:" << setw(4) << setfill('0') << this->m_DeptId
		<< "\t职工职位:" << this->getDeptName()
		<< "\t岗位职责:完成老板交给的任务,并下发任务给员工"
		<< endl;
}
string Manager::getDeptName()
{
	return string("经理");
}
Manager::~Manager()
{

}
