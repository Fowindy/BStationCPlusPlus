#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "speechManager.h"
using namespace std;
int main()
{
	//创建管理类的对象
	speechManager sm;
	//显示菜单
	sm.show_Menu();
	system("pause");
	return 0;
}
