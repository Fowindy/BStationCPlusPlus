#include <iostream>
#include <string>
using namespace std;
int main()
{
	//选择结构-多行if语句
	//输入考试分数,如果分数大于600,视为考上一本大学,在屏幕上输出
	//如果没考上一本大学,打印未考上一本大学
	//1、用户输入分数
	std::cout << "请输入你的高考分数:";
	int score = 0;
	std::cin >> score;
	//2、打印用户输入的分数
	std::cout << "你输入的分数是:" << score << std::endl;
	//3、判断如果大于600,打印考上一本,否则打印未考上一本
	if (score > 600)//大于600分执行下面大括号中的内容,,
	{
		std::cout<<"恭喜你!考上一本"<<std::endl;
	}
	else//不大于600分,执行else后大括号中的内容
	{
		std::cout<<"很遗憾!没有考上一本"<<std::endl;
	}
	system("pause");
	return 0;
}
