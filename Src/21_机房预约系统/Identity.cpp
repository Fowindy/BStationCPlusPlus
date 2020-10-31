using namespace std;
#include "Identity.h"
#include <iostream>
#include <string>
//构造函数
Identity::Identity()
{

}

void Identity::SignOut(Identity* identity)
{
	delete identity;//销毁掉堆区对象
	cout << "注销成功!" << endl;
	system("pause");
	system("cls");//清屏
}

//析构函数
Identity::~Identity()
{

}


