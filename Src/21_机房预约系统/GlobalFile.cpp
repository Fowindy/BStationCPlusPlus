using namespace std;
#include "GlobalFile.h"
#include <iostream>
#include <string>
//构造函数
GlobalFile::GlobalFile()
{

}
//析构函数
GlobalFile::~GlobalFile()
{

}

//************************************
// Method:    LimitedInputNumber(限定输入数字)
// Access:    public static 
// Returns:   void
// Author: 	  Fowindy
// Parameter: int & select(引用的选项)
// Parameter: int numStart(区间头)
// Parameter: int numEnd(区间尾)
// Created:   2020/10/31 6:41
//************************************
void GlobalFile::LimitedInputNumber(int& select, int numStart, int numEnd)
{
	while (true)
	{
		while (!(cin >> select))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}//跳过错误输入
			cout << "输入错误,请输入数字(" << numStart << "~" << numEnd << ")：";
		}
		if (select < numStart || select > numEnd)
		{
			cout << "指令错误,请输入正确数字(" << numStart << "~" << numEnd << ")：";
		}
		else
		{
			break;
		}
	}
}

