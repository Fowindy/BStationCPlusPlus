#include <iostream>
using namespace std;
//利用sizeof关键字可以统计数据类型所占内存的大小
int main8()
{
	//整型: short(2)	 int(4) long(4) long long(8)
	short num1 = 10;
	std::cout<<"short占用的内存空间为:"<<sizeof(num1)<<std::endl;
	int num2 = 10;
	std::cout<<"int占用的内存空间为:"<<sizeof(num2)<<std::endl;
	long num3 = 10;
	std::cout<<"long占用的内存空间为:"<<sizeof(num3)<<std::endl;
	long long num4 = 10;
	std::cout<<"long long 占用的内存空间为:"<<sizeof(num4)<<std::endl;

	//整型结论: short <int <= long <= long long
	system("pause");
	return 0;
}
