#include <iostream>
#include <string>
using namespace std;
//time系统时间头文件包含
#include <ctime>
int main31()
{
	//添加随机数种子作用利用当前系统时间生成随机数,防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1、系统生成随机数
	int num = rand() % 100 + 1;//rand() % 100 + 1生成0+1~99+1的随机数(注意:此时为伪随机数)
	//2、玩家进行清测
	int guess = 0;//玩家输入的数字
	while (1)
	{
		std::cout << "请输入你猜测的数字(1~100):" << std::endl;
		std::cin >> guess;
		//3、判断玩家的猜测
		if (guess == num)//猜对 退出游戏
		{
			std::cout << "恭喜你!猜对了" << std::endl;
			break;//break,可以利用此关键字来退出当前循环
		}
		else if (guess > num)//猜错 提示猜的结果过大或者过小 重新返回第2步
		{
			std::cout << "大了" << std::endl;
		}
		else
		{
			std::cout << "小了" << std::endl;
		}
	}
	system("pause");
	return 0;
}
