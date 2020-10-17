#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main33()
{
	//案例描述:水仙花数是指一个3位数, 它的每个位上的数字的3次幕之和等于它本身
	//例a : 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
	//请利用do...while语句,求出所有3位数中的水仙花数
	int num = 100;
	do
	{
		if (pow(num / 100, 3) + pow(num % 100 / 10, 3) + pow(num % 10, 3) == num)
		{
			std::cout<<"水仙花数:"<<num<<std::endl;
		}
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}
