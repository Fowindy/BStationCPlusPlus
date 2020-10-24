#include <iostream>
#include <string>
using namespace std;
#include "WorkerManager.h"
//#include "Worker.h"
//#include "Employee.h"
//#include "Manager.h"
//#include "Boss.h"
int main()
{
#pragma region 测试代码
	//cout << "------------------员工类测试----------------" << endl;
	//Worker* worker = new Employee(1001, "张三", "男", 18, 1000);
	//worker->ShowWorkerInfo();
	//delete worker;
	//cout << "------------------经理类测试----------------" << endl;
	//Worker* worker1 = new Manager(0011, "李四", "男", 28, 0000);
	//worker1->ShowWorkerInfo();
	//delete worker1;
	//cout << "------------------经理类测试----------------" << endl;
	//Worker* worker0 = new Boss(0001, "马云", "男", 38, 0000);
	//worker0->ShowWorkerInfo();
	//delete worker0;
#pragma endregion
#pragma region 正式代码
	//实例化管理类的对象
	WorkerManager workerManager;
	while (true)
	{
		//调用展示菜单的成员函数
		workerManager.ShowMenu();
		//提示用户输入选项
		cout << "请输入您的选择(0-9):" << endl;
		//用来存储用户选项
		int _choice = 0;
		//接收用户的选项
		cin >> _choice;
		//switch执行选项分支
		switch (_choice)
		{
		case 0:	//退出系统
			workerManager.ExitSystem();
			break;
		case 1:	//增加职工
			workerManager.Add_Emp();
			break;
		case 2:	//显示职工
			workerManager.show_Emp();
			break;
		case 3:	//删除职工
			workerManager.Del_Emp();
			break;
		case 4:	//修改职工
			workerManager.ModifyEmp();
			break;
		case 5:	//查找职工
			break;
		case 6:	//排序职工
			break;
		case 7:	//清空文档
			break;
		default:
			system("cls");	//任何其他选择都清空屏幕再显示(刷新屏幕)
			break;
		}
	}
#pragma endregion

	system("pause");
	return 0;
}
