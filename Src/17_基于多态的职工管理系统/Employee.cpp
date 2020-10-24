#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
Employee::Employee(int id, string name, string sex, int age, int deptId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Sex = sex;
	this->m_Age = age;
	this->m_DeptId = deptId;
}
void Employee::ShowWorkerInfo()
{
	cout << "职工编号:" << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t职工性别:" << this->m_Sex
		<< "\t职工年龄:" << this->m_Age
		<< "\t职工部门编号:" << this->m_DeptId
		<< "\t职工职位:" << this->getDeptName()
		<< "\t岗位职责:完成经理交给的任务"
		<< endl;
}
string Employee::getDeptName()
{
	return string("员工");
}
Employee::~Employee()
{

}
