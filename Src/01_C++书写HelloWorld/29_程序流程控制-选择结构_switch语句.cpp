#include <iostream>
#include <string>
using namespace std;
int main29()
{
	//switch语句
	//给电影进行打分
	//10~9经典
	//8~7非常好
	//6~5一般
	//5以下 烂片
	std::cout << "请给电影打分(0-10):" << std::endl;
	int score = 0;
	std::cin >> score;
	std::cout << "您给电影打的评分为:" << score << std::endl;
	switch (score)
	{
	case 10:
	case 9:
		std::cout<<"经典电影"<<std::endl;
		break;//退出当前分支(break一定要)
	case 8:
	case 7:
		std::cout<<"非常好的电影"<<std::endl;
		break;
	case 6:
	case 5:
		std::cout<<"一般的电影"<<std::endl;
		break;
	default:
		std::cout<<"烂片"<<std::endl;
		break;
	}
	//注意1: case里如果没有break, 那么程序会一直向下执行
	//if和switch区别:
	//switch缺点:判断时候只能是整型或者字符型枚举型,不可以是一个区间
	//switch优点:结构清晰,执行效率高
	system("pause");
	return 0;
}
