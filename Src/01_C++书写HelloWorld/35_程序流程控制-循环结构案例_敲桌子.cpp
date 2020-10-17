#include <iostream>
#include <string>
using namespace std;
int main()
{
	//案例描述:从1开始数到数字100如果数字个位含有7,或者数字十位含有7,或者该数字是7的倍数,我们打印
	//敲桌子, 其余数字直接打印输出。
	for (int i = 1; i <= 100; i++)
	{
		if (i%10==7 || i/10==7 || i%7==0)
		{
			std::cout<<"i = "<<i<<";敲桌子"<<std::endl;
		}
		else
		{
			std::cout<<"i = "<<i<<std::endl;
		}
	}
	system("pause");
	return 0;
}
