#include <iostream>
#include <string>
using namespace std;
int main()
{
	//程序流程控制-选择结构_多条件的if语句
	//输入一个考试分数, 如果大于600分, 视为考上一本大学, 在屏幕输出
	//1、用户输入分数
	std::cout << "请输入你的高考分数:";
	int score = 0;
	std::cin >> score;
	//2、打印用户输入的分数
	std::cout << "你输入的分数是:" << score << std::endl;
	//3、大于600,考上一本大学,屏幕输出
	if (score > 600)
	{
		std::cout<<"恭喜你!考上一本大学"<<std::endl;
	}
	//4、大于500, 视为考上二本大学, 屏幕输出
	else if (score > 500)
	{
		std::cout<<"恭喜你!考上二本大学"<<std::endl;
	}
	//5、大于400, 视为考上三本大学, 屏幕输出
	else if (score > 400)
	{
		std::cout<<"恭喜你!考上三本大学"<<std::endl;
	}
	//6、小于等于400分,视为未考上本科,屏幕上输出
	else
	{
		std::cout<<"很遗憾!没有考上大学"<<std::endl;
	}
	system("pause");
	return 0;
}
