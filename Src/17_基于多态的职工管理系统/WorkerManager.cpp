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
		//cout << "文件不存在" << endl;//测试输出
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
		//cout << "读取到的职工个数为:" << num << endl;//测试代码
		//更新成员数目属性
		this->m_EmpNum = num;
		//根据职工数创建员工数组
		this->m_EmpArray = new Worker*[this->m_EmpNum];
		//初始化职工
		this->Init_Emp();
#pragma region 读取的员工信息输出测试代码
		//全部输出读取到的员工信息(测试代码)
		//for (int i = 0; i < this->m_EmpNum; i++)
		//{
		//	cout << "职工编号:" << this->m_EmpArray[i]->m_Id << "\t"
		//		<< "职工名字:" << this->m_EmpArray[i]->m_Name << "\t"
		//		<< "职工性别:" << this->m_EmpArray[i]->m_Sex << "\t"
		//		<< "职工年龄:" << this->m_EmpArray[i]->m_Age << "\t"
		//		<< "职工性别:" << this->m_EmpArray[i]->m_DeptId << "\t"
		//		<< endl;
		//}
#pragma endregion

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
			cout << "请选择第" << i + 1 << "个新职工的部门编号:" << endl;
			cout << "1、普通员工" << endl;
			cout << "2、经理" << endl;
			cout << "0、老板" << endl;
			cin >> _deptId;
			Worker* worker = NULL;
			switch (_deptId)
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
//初始化员工
void WorkerManager::Init_Emp()
{
	//读取文件
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
#pragma region 定义需要的变量
	int _id;
	string _name;
	string _sex;
	int _age;
	int _deptId;
#pragma endregion
	int index = 0;
	//流提取符>>会跳过输入流里的空格
	while (ifs >> _id && ifs >> _name && ifs >> _sex && ifs >> _age && ifs >> _deptId)
	{
		Worker* worker = NULL;
		//根据不同的部门Id创建不同类型的员工对象
		switch (_deptId)
		{
		case 1:
			worker = new Employee(_id, _name, _sex, _age, _deptId);
			break;
		case 2:
			worker = new Manager(_id, _name, _sex, _age, _deptId);
			break;
		case 0:
			worker = new Boss(_id, _name, _sex, _age, _deptId);
			break;
		}
		//存放到员工数组中
		this->m_EmpArray[index] = worker;
		index++;
	}
}
//显示职工信息函数
void WorkerManager::show_Emp()
{
	//判断文件是否存在或者记录为空
	if (this->m_IsFileEmpty)
	{
		cout << "文件不存在或记录为空!" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//利用多态调用接口
			this->m_EmpArray[i]->ShowWorkerInfo();
		}
	}
	system("pause");
	system("cls");//清屏
}
//判断员工是否存在,存在返回员工编号,不存在返回-1
int WorkerManager::IsEmpExist(int _id)
{
	int index = -1;
	//3.根据职工编号判断职工是否存在
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == _id)
		{
			index = i;
			break;
		}
	}
	return index;
}
void WorkerManager::Del_Emp()
{
	//判断文件是否存在或者记录为空
	if (this->m_IsFileEmpty)
	{
		cout << "文件不存在或记录为空!" << endl;
	}
	else
	{
		//1.提示用户输入要删除员工的编号
		cout << "请输入要删除员工的编号:" << endl;
		//2.定义记录输入编号的变量
		int _id;
		cin >> _id;
		//3.判断员工是否存在
		int index = this->IsEmpExist(_id);
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->m_IsFileEmpty = this->m_EmpNum == 0 ? true : false;
			//删除后数据同步更新保存到文件中
			this->Save();
			cout << "删除成功!" << endl;
		}
		else
		{
			cout << "删除失败,查无此人!" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkerManager::ModifyEmp()
{
	//判断文件是否存在或者记录为空
	if (this->m_IsFileEmpty)
	{
		cout << "文件不存在或记录为空!" << endl;
	}
	else
	{
		cout << "请输入要修改职工的编号：" << endl;
		int id;
		cin >> id;
		int ret = this->IsEmpExist(id);
		if (ret != -1)
		{
			//查找到编号的职工
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			string newSex = "";
			int newAge = 0;
			int select = 0;
			cout << "查到:" << id << "号的职工,请输入新职工号:" << endl;
			cin >> newId;

			cout << "请输入新姓名:" << endl;
			cin >> newName;

		A: cout << "请选择新性别:" << endl;
			cout << "1、男" << endl;
			cout << "2、女" << endl;
			cin >> select;
			switch (select)
			{
			case 1:
				newSex = "男";
				break;
			case 2:
				newSex = "女";
				break;
			default:
				cout << "输入错误!请重新输入!" << endl;
				system("pause");
				goto A;
			}
			select = -1;

			cout << "请输入新年龄:" << endl;
			cin >> newAge;

		B: cout << "请选择新职位:" << endl;
			cout << "1、普通员工" << endl;
			cout << "2、经理" << endl;
			cout << "0、老板" << endl;
			cin >> select;
			Worker* worker = NULL;
			switch (select)
			{
			case 1:
				worker = new Employee(newId, newName, newSex, newAge, select);
				break;
			case 2:
				worker = new Manager(newId, newName, newSex, newAge, select);
				break;
			case 0:
				worker = new Boss(newId, newName, newSex, newAge, select);
				break;
			default:
				cout << "输入错误!请重新输入!" << endl;
				system("pause");
				goto B;
			}
			//更改数据 到数组中
			this->m_EmpArray[ret] = worker;

			cout << "修改成功！" << endl;

			//保存到文件中
			this->Save();
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}
	//按任意键 清屏
	system("pause");
	system("cls");
}
//查找员工
void WorkerManager::FindEmp()
{
	//判断文件是否存在或者记录为空
	if (this->m_IsFileEmpty)
	{
		cout << "文件不存在或记录为空!" << endl;
	}
	else
	{
	C:cout << "请输入查找的方式：" << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按姓名查找" << endl;
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1://按职工编号查找
		{
			cout << "请输入要查询的职工编号:" << endl;
			int id = -1;
			cin >> id;
			int index = IsEmpExist(id);
			if (index != -1)
			{
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					if (this->m_EmpArray[i]->m_Id == id)
					{
						this->m_EmpArray[i]->ShowWorkerInfo();
					}
				}
			}
			else
			{
				cout << "查询失败，查无此人" << endl;
			}
		}
		break;
		case 2:
		{
			cout << "请输入要查询的姓名:" << endl;
			string name;
			cin >> name;
			int index = 0;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					this->m_EmpArray[i]->ShowWorkerInfo();
					index++;
				}
			}
			if (index == 0)
			{
				cout << "查询失败，查无此人" << endl;
			}
		}
		break;
		default:
			cout << "输入错误!请重新输入!" << endl;
			select = select == 0 ? 9 : select;
			system("pause");
			goto C;
		}
	}
	//按任意键 清屏
	system("pause");
	system("cls");
}
//按编号排序
void WorkerManager::Sort_Emp()
{
	//判断文件是否存在或者记录为空
	if (this->m_IsFileEmpty)
	{
		cout << "文件不存在或记录为空!" << endl;
	}
	else
	{
	D:cout << "请选择排序方式： " << endl;
		cout << "1、按职工号进行升序" << endl;
		cout << "2、按职工号进行降序" << endl;
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1://按职工号进行升序
		{
			for (int i = 0; i < this->m_EmpNum - 1; i++)
			{
				for (int j = 0; j < this->m_EmpNum - 1 - i; j++)
				{
					if (this->m_EmpArray[j]->m_Id > this->m_EmpArray[j + 1]->m_Id)
					{
						Worker* temp = this->m_EmpArray[j];
						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
						this->m_EmpArray[j + 1] = temp;
					}
				}
			}
		}
		break;
		case 2://按职工号进行降序
		{
			for (int i = 0; i < this->m_EmpNum - 1; i++)
			{
				for (int j = 0; j < this->m_EmpNum - 1 - i; j++)
				{
					if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[j + 1]->m_Id)
					{
						Worker* temp = this->m_EmpArray[j];
						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
						this->m_EmpArray[j + 1] = temp;
					}
				}
			}
		}
		break;
		default:
			cout << "输入错误!请重新输入!" << endl;
			system("pause");
			goto D;
		}
		this->Save();
		this->show_Emp();
	}
	//按任意键 清屏
	system("cls");
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
