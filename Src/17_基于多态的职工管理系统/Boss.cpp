#include <iostream>
#include <string>
#include "Boss.h"
#include <iomanip>
using namespace std;
Boss::Boss(int id, string name, string sex, int age, int deptId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Sex = sex;
	this->m_Age = age;
	this->m_DeptId = deptId;
}
void Boss::ShowWorkerInfo()
{
	cout << "职工编号:" << setw(4) << setfill('0') << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t职工性别:" << this->m_Sex
		<< "\t职工年龄:" << this->m_Age
		<< "\t职工部门编号:" << setw(4) << setfill('0') << this->m_DeptId
		<< "\t职工职位:" << this->getDeptName()
		<< "\t岗位职责:管理公司所有事务"
		<< endl;
}
string Boss::getDeptName()
{
	return string("总裁");
}
Boss::~Boss()
{

}
