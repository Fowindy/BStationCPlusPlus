#include <iostream>
#include <string>
using namespace std;
int main37()
{
	//打印正三角的乘法口诀表
	for (int i = 1; i <= 9; i++)//行
	{
		for (int j = 1; j <= i; j++)//列
		{
			std::cout<<j<<" * "<<i<<" = "<<j*i<<"\t";
		}
		std::cout<<std::endl;
	}
	system("pause");
	return 0;
}
