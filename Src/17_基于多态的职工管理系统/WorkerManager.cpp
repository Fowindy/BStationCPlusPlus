#include <iostream>
#include <string>
#include "WorkerManager.h"
#include "Employee.h"
#include "Boss.h"
#include "Manager.h"
#include <fstream>
#define FILENAME "empFile.txt"
using namespace std;
WorkerManager::WorkerManager()
{
	//程序运行时，读文件
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//文件不存在---!ifs.is_open();文件存在,并且没有记录---ifs.eof()
	//文件存在,并且没有记录
	char ch;
	//ifs中读取第一个字符
	ifs >> ch;
	//如果第一个字符为文件结尾符,则为空
	if (!ifs.is_open() || ifs.eof())
	{
		cout << "文件不存在" << endl;//测试输出
		//在WorkerManager构造函数中初始化属性
		//初始化人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//文件是否为空:是
		this->m_IsFileEmpty = true;
		ifs.close();//关闭文件
		return;
	}
	else
	{
		int num = this->get_EmpNum();
		cout << "读取到的职工个数为:" << num << endl;//测试代码
		//更新成员数目属性
		this->m_EmpNum = num;
	}
}
//展示菜单
void WorkerManager::ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}
//添加员工
void WorkerManager::Add_Emp()
{
	//提示用户输入需要添加员工的数量
	cout << "请输入需要添加职工的数量:" << endl;
	//添加员工数量的变量
	int _addNum = 0;
	//存储用户输入的员工数
	cin >> _addNum;
	//判断输入的员工数
	if (_addNum > 0)//输入的员工数大于0才添加
	{
		//计算新增员工后的空间需求
		int _newSize = this->m_EmpNum + _addNum;
		//使用新的空间开辟员工数组
		Worker** newSpace = new Worker*[_newSize];
		//将原空间下内容存放到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//输入新数据
		for (int i = 0; i < _addNum; i++)
		{
#pragma region 定义需要输入内容的变量
			int _id;
			string _name;
			string _sex;
			int _age;
			int _deptId;
#pragma endregion
			//定义选项变量
			int _select;
			cout << "请输入第" << i + 1 << "个新职工的编号:" << endl;
			cin >> _id;
			cout << "请输入第" << i + 1 << "个新职工的姓名:" << endl;
			cin >> _name;
			cout << "请选择第" << i + 1 << "个新职工的性别:" << endl;
			cout << "1、男" << endl;
			cout << "2、女" << endl;
		A: cin >> _select;
			switch (_select)
			{
			case 1:
				_sex = "男";
				break;
			case 2:
				_sex = "女";
				break;
			default:
				cout << "输入错误!请重新输入!" << endl;
				goto A;
			}
			_select = 0;
			cout << "请输入第" << i + 1 << "个新职工的年龄:" << endl;
			cin >> _age;
			cout << "请输入第" << i + 1 << "个新职工的部门编号:" << endl;
			cin >> _deptId;
			cout << "请选择第" << i + 1 << "个新职工的岗位:" << endl;
			cout << "1、普通员工" << endl;
			cout << "2、经理" << endl;
			cout << "0、老板" << endl;
			cin >> _select;
			Worker* worker = NULL;
			switch (_select)
			{
			case 1://普通员工
				worker = new Employee(_id, _name, _sex, _age, _deptId);
				break;
			case 2://经理
				worker = new Manager(_id, _name, _sex, _age, _deptId);
				break;
			case 0://老板
				worker = new Boss(_id, _name, _sex, _age, _deptId);
				break;
			default:
				break;
			}
			//把每次加的员工加入员工数组中
			newSpace[this->m_EmpNum + i] = worker;
		}
		//释放原有的员工数组空间
		delete[] this->m_EmpArray;
		//更改新空间的指向
		this->m_EmpArray = newSpace;
		//更新新增员工后的总人数
		this->m_EmpNum = _newSize;
		//更新标志文件是否为空:否
		this->m_IsFileEmpty = false;
		//提示用户添加成功
		cout << "成功添加" << _addNum << "名新员工" << endl;
		//保存数据到文本文件
		this->Save();
	}
	else//否则提示用户输入错误
	{
		cout << "输入错误!" << endl;
	}
	system("pause");
	system("cls");//清屏
}
void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "\t"
			<< this->m_EmpArray[i]->m_Name << "\t"
			<< this->m_EmpArray[i]->m_Sex << "\t"
			<< this->m_EmpArray[i]->m_Age << "\t"
			<< this->m_EmpArray[i]->m_DeptId << "\t"
			<< endl;
	}
	ofs.close();
}
//读文件获取人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
#pragma region 定义需要的变量
	int _id;
	string _name;
	string _sex;
	int _age;
	int _deptId;
#pragma endregion
	//定义读取到的人数变量
	int num = 0;
	//流提取符>>会跳过输入流里的空格
	while (ifs >> _id && ifs >> _name && ifs >> _sex && ifs >> _age && ifs >> _deptId)
	{
		//记录人数
		num++;
	}
	ifs.close();
	return num;
}
//退出系统
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用!" << endl;
	system("pause");
	exit(0);//退出
}
WorkerManager::~WorkerManager()
{
	//调用完WorkerManager类对象后释放资源
	if (this->m_EmpArray != NULL)
	{
		delete this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
