#include <iostream>
#include <string>
using namespace std;
int main()
{
	//考试成绩统计:
	//案例描述:有三名同学(张三, 李四, 王五), 在一次考试中的成绩分别如下表, 请分别输出三名同学的总成绩
	//分数数组
	int scores[3][4] =
	{
		{100,100,100,98},
		{90,50,100,78},
		{60,70,80,77}
	};
	//名称数组
	string names[] = { "张三", "李四", "王五" };
	for (int i = 0; i < sizeof(scores)/sizeof(scores[0]) ; i++)
	{
		int sum = 0;
		for (int j = 0; j < sizeof(scores[0])/sizeof(scores[0][0]) ; j++)
		{
			sum += scores[i][j];
		}
		std::cout<<names[i]<<"的总分为:"<<sum<<std::endl;
	}
	system("pause");
	return 0;
}
