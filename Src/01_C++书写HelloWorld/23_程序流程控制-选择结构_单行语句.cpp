#include <iostream>
#include <string>
using namespace std;
int main23()
{
	//选择结构单行if语句
	//用户输入分数,如果分数大于600,视为考上一本大学,在屏幕上输出
	//1、用户输入分数
	std::cout << "请输入你的高考分数:";
	int score = 0;
	std::cin >> score;
	//2、打印用户输入的分数
	std::cout<<"你输入的分数是:"<<score<<std::endl;
	//3、判断分数是否大于600,如果大于,那么输出
	//注意事项, if条件后面不要加分号
	if(score > 600)
		std::cout<<"恭喜你!考上了一本"<<std::endl;
	system("pause");
	return 0;
}
