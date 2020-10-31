using namespace std;
#include "Administrator.h"
#include <iostream>
#include <string>
#include "GlobalFile.h"
#include <fstream>
#include <algorithm>
//构造函数
Administrator::Administrator()
{

}

Administrator::Administrator(string name, string pwd)
{
	//初始化管理员信息
	this->m_Name = name;
	this->m_Pwd = pwd;
	//调用初始化容器
	this->initVector();
}

//添加账号
void Administrator::addAccount()
{
	cout << "请输入添加账号的类型:" << endl;
	cout << "1、添加学生" << endl;
	cout << "2、添加老师" << endl;
	string fileName;//操作文件名
	string tip;//提示id号
	string checkStr;//检测提示语句
	ofstream ofs;//文件写入对象
	int select = 0;
	GlobalFile::LimitedInputNumber(select, 1, 2);//接收用户选项
	switch (select)
	{
	case 1://添加的是学生
		fileName = STUDENT_FILE;
		tip = "请输入你的学号:";
		//初始化检测语句
		checkStr = "添加失败:学号重复!请重新输入:";
		break;
	case 2://添加的是老师
		fileName = TEACHER_FILE;
		tip = "请输入您的职工号:";
		//初始化检测语句
		checkStr = "添加失败:职工号重复!请重新输入:";
		break;
	}
	//准备写入的内容
	int id;//学号或职工号
	string name;//姓名
	string pwd;//密码
	cout << tip;
	//限定用户输入id区间
A:GlobalFile::LimitedInputNumber(id, 0, 99999999);
	while (true)
	{
		//拿到id先查重
		if (this->checkRepeat(id, select))
		{
			cout << checkStr;
			goto A;
		}
		else
		{
			break;
		}
	}
	cout << "请输入姓名:";
	cin >> name;
	cout << "请输入密码:";
	cin >> pwd;
	//以追加的方式写入文件
	ofs.open(fileName, ios::app | ios::out);
	//写入的格式
	ofs << id << " " << name << " " << pwd << " " << endl;
	//添加成功提示
	cout << "添加成功" << endl;
	//写完释放资源
	ofs.close();
	//调用初始化容器接口,重新获取文件中的数据
	this->initVector();
	//按任意键继续
	system("pause");
	//清屏
	system("cls");
}
//学生打印函数_仿函数
class printStudent
{
public:
	bool operator()(Student& stu)
	{
		cout << "学号:" << stu.m_id << "\t姓名:" << stu.m_Name << "\t密码:" << stu.m_Pwd << endl;
		return true;
	}
};
//教师打印函数
void printTeacher(Teacher& tea)
{
	cout << "职工号:" << tea.m_EmpId << "\t姓名:" << tea.m_Name << "\t密码:" << tea.m_Pwd << endl;
}
//查看账号
//************************************
// Method:    showAccount
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 10:32
//************************************
void Administrator::showAccount()
{
	cout << "请选择查看内容:" << endl;
	cout << "1、查看所有学生" << endl;
	cout << "2、查看所有老师" << endl;
	//接收用户选择
	int select = 0;
	GlobalFile::LimitedInputNumber(select, 1, 2);
	switch (select)
	{
	case 1:
	{
		//查看学生
		cout << "所有学生信息如下:" << endl;
		//采用for_each循环_仿函数
		for_each(vStu.begin(), vStu.end(), printStudent());
	}
	break;
	case 2:
	{
		//查看教师
		cout << "所有老师信息如下:" << endl;
		//采用for_each循环_函数
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}
	break;
	}
	cout << "显示完毕!" << endl;
	system("pause");
}
void printComputerRoom(ComputerRoom& com)
{
	cout << "机房号:" << com.m_RoomId << "\t机房容量:" << com.m_MaxNum << endl;
}
//************************************
// Method:    showComputerRoom(查看机房信息)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 11:27
//************************************
void Administrator::showComputerRoom()
{
	//查看机房
	cout << "所有机房信息如下:" << endl;
	//采用for_each循环_函数
	for_each(vCom.begin(), vCom.end(), printComputerRoom);
	cout << "显示完毕!" << endl;
}

//************************************
// Method:    cleanFile(清空预约)
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 11:34
//************************************
void Administrator::cleanFile()
{
	//ios::trunc  覆盖存在的文件 即如果原来文件中有数据原来的数据就被清空
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "预约清空完毕!" << endl;
	system("pause");
	system("cls");
}

//************************************
// Method:    initVector
// Access:    public 
// Returns:   void
// Author: 	  Fowindy
// Created:   2020/10/31 9:45
//************************************
void Administrator::initVector()
{
	//创建读取流对象
	ifstream ifs;
	//清空容器
	vStu.clear();
	vTea.clear();
	vCom.clear();
#pragma region 读取学生文件信息
	//以读取的方式打开学生文件
	ifs.open(STUDENT_FILE, ios::in);
	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "学生文件读取失败:文件不存在!" << endl;
		return;
	}
	//创建学生对象
	Student stu;
	//读取学生文件中所有学生对象
	while (ifs >> stu.m_id && ifs >> stu.m_Name && ifs >> stu.m_Pwd)
	{
		//将读取到的学生对象加载到学生容器中
		vStu.push_back(stu);
	}
	cout << "当前学生数量为:" << vStu.size() << endl;
	//读取完毕关闭资源
	ifs.close();
#pragma endregion
#pragma region 读取教师文件信息
	//以读取方式打开教师文件
	ifs.open(TEACHER_FILE, ios::in);
	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "教师文件读取失败:文件不存在!" << endl;
		return;
	}
	//创建教师对象
	Teacher tea;
	//读取教师文件中的信息赋值给教师对象
	while (ifs >> tea.m_EmpId && ifs >> tea.m_Name && ifs >> tea.m_Pwd)
	{
		//将读取到的教师对象加载到教师容器
		vTea.push_back(tea);
	}
	//输出教师数
	cout << "当前教师数量为:" << vTea.size() << endl;
	//读取完毕关闭资源
	ifs.close();
#pragma endregion
#pragma region 读取机房信息
	//以读取方式打开机房文件
	ifs.open(COMPUTER_FILE, ios::in);
	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "机房文件读取失败:文件不存在!" << endl;
		return;
	}
	//创建机房对象
	ComputerRoom com;
	//读取机房文件中的信息赋值给机房对象
	while (ifs >> com.m_RoomId && ifs >> com.m_MaxNum)
	{
		//将读取到的机房对象加载到机房容器
		vCom.push_back(com);
	}
	//输出机房数
	cout << "当前机房数量为:" << vCom.size() << endl;
	//读取完毕关闭资源
	ifs.close();
#pragma endregion
}

//************************************
// Method:    checkRepeat
// Access:    public 
// Returns:   bool
// Author: 	  Fowindy
// Parameter: int id
// Parameter: int type
// Created:   2020/10/31 9:38
//************************************
bool Administrator::checkRepeat(int id, int type)
{
	if (type == 1)//检测学生
	{
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (it->m_id == id)
			{
				return true;//有重复:返回true
			}
		}
	}
	else if (type == 2)//检测教师
	{
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (it->m_EmpId == id)
			{
				return true;//有重复:返回true
			}
		}
	}
	return false;//没有重复:返回false
}

//析构函数
Administrator::~Administrator()
{

}

//菜单界面
void Administrator::operMenu()
{
	cout << "欢迎管理员：" << this->m_Name << "登录！" << endl;
	cout << "\t\t ---------------------------------\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          1.添加账号            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          2.查看账号            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          3.查看机房            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          4.清空预约            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          0.注销登录            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t ---------------------------------\n";
	cout << "请选择您的操作： " << endl;
}

