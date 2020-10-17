#include <iostream>
#include <string>
using namespace std;
int main27()
{
	//三只小猪称体重，按重到轻排序
#pragma region 定义三只小猪的体重变量
	double weightA = 0;
	double weightB = 0;
	double weightC = 0;
#pragma endregion
	cout << "请输入小猪A的体重:" << endl;
	cin >> weightA;
	cout << "请输入小猪B的体重" << endl;
	cin >> weightB;
	cout << "请输入小猪C的体重" << endl;
	cin >> weightC;
	cout << "小猪A的体重为:" << weightA << endl;
	cout << "小猪B的体重为:" << weightB << endl;
	cout << "小猪C的体重为:" << weightC << endl;
	//3、判断哪只小猪最重
	if (weightA >= weightB)//A>B
	{
		if (weightB >= weightC)//B>C
		{
			std::cout << "小猪A最重" << std::endl;
			std::cout << "小猪体重排序为：小猪A>小猪B>小猪C" << std::endl;
		}
		else if (weightA >= weightC)//A>C
		{
			std::cout << "小猪A最重" << std::endl;
			std::cout << "小猪体重排序为：小猪A>小猪C>小猪B" << std::endl;
		}
		else
		{
			std::cout << "小猪C最重" << std::endl;
			std::cout << "小猪体重排序为：小猪C>小猪A>小猪B" << std::endl;
		}
	}
	else//B>A
	{
		if (weightA >= weightC)
		{
			std::cout << "小猪B最重" << std::endl;
			std::cout << "小猪体重排序为：小猪B>小猪A>小猪C" << std::endl;
		}
		else
		{
			if (weightB >= weightC)
			{
				std::cout << "小猪B最重" << std::endl;
				std::cout << "小猪体重排序为：小猪B>小猪C>小猪A" << std::endl;
			}
			else
			{
				std::cout << "小猪C最重" << std::endl;
				std::cout << "小猪体重排序为：小猪C>小猪B>小猪A" << std::endl;
			}
		}
	}
	system("pause");
	return 0;
}
