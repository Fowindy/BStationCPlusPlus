#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间

class WorkerManager
{
public:
	WorkerManager();	//构造函数
	void ShowMenu();	//显示菜单
	~WorkerManager();	//析构函数
};