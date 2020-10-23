#include <iostream>
#include <string>
using namespace std;
int main38()
{
	//break的使用时机
	//1.出现在switch与剧中
	std::cout<<"请选择副本的难度:"<<std::endl;
	std::cout<<"1.普通"<<std::endl;
	std::cout<<"2.中等"<<std::endl;
	std::cout<<"3.困难"<<std::endl;
	int select = 0;//创建选择结果变量
	std::cin>>select;//等待用户输入选择变量
	switch (select)
	{
	case 1:
		std::cout<<"您选择的是普通难度"<<std::endl;
		break;
	case 2:
		std::cout << "您选择的是中等难度" << std::endl;
		break;
	case 3:
		std::cout << "您选择的是困难难度" << std::endl;
		break;
	}
	//2.出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		//如果i等于5,退出循环,不再打印
		if (i==5)
		{
			break;//退出循环
		}
		std::cout<<i<<std::endl;
	}
	//3.出现在嵌套循环语句中
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	system("pause");
	return 0;
}
