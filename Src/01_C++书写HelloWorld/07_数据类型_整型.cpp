#include <iostream>
using namespace std;
//数据类型存在意义:
//给变量分配合适的内存空间
int main()
{
	// 整型
	//1、短整型(-32768~32767)
	short num1 = 10;
	//2、整型
	int num2 = 10;
	//3、长整型
	long num3 = 10;
	// 4、长长整型
	long long num4 = 10;
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;
	std::cout << num4 << std::endl;
	system("pause");
	return 0;
}
