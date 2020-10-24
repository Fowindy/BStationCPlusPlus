#include <iostream>
#include <string>
using namespace std;
#include "WorkerManager.h"
int main()
{
	//实例化管理类的对象
	WorkerManager workerManager;
	//调用展示菜单的成员函数
	workerManager.ShowMenu();
	system("pause");
	return 0;
}
