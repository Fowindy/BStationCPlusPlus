#include <iostream>
#include <string>
using namespace std;
int main57()
{
	//指针所占的内存空间
	int a = 10;
	int *p = &a;
	//在32位开发平台:任何类型的指针占用4个字节空间
	//在64位开发平台:任何类型的指针占用8个字节空间
	std::cout << "sizeof(p) = " << sizeof(p) << std::endl;//4
	std::cout << "sizeof(int *) = " << sizeof(int *) << std::endl;//4
	std::cout << "sizeof(double *) = " << sizeof(double *) << std::endl;//4
	std::cout << "sizeof(float *) = " << sizeof(float *) << std::endl;//4
	std::cout << "sizeof(char *) = " << sizeof(char *) << std::endl;//4
	system("pause");
	return 0;
}
