#pragma once	//防止头文件重复包含
#include <iostream>	//包含输入输出流的头文件
using namespace std;	//使用标准命名空间

//管理员文件
#define ADMIN_FILE "admin.txt"
//学生文件
#define STUDENT_FILE "student.txt"
//教师文件
#define TEACHER_FILE "teacher.txt"
//机房文件
#define	COMPUTER_FILE "computerRoom.txt"
//订单文件
#pragma region txt方式
#define ORDER_FILE "order.txt"  
#pragma endregion


class GlobalFile
{
public:
	GlobalFile();	//构造函数
	~GlobalFile();	//析构函数
	static void LimitedInputNumber(int& select, int numStart, int numEnd);	//限定输入数字
};