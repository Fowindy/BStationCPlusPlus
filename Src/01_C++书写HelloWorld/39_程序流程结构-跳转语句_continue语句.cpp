#include <iostream>
#include <string>
using namespace std;
int main39()
{
	//continue语句的用途
	//案例:奇数输出偶数不输出
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//可以筛选条件,执行到此就不再向下执行,执行下一次循环
			//break会退出循环,而continue不会
		}
		std::cout << i << std::endl;
	}
	system("pause");
	return 0;
}
