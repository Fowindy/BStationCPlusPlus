#include <iostream>
#include <string>
using namespace std;
int main19()
{
	//比较运算符
	// == 
	int a = 10;
	int b = 20;
	std::cout << (a == b) << std::endl;//0
	// !=
	std::cout << (a != b) << std::endl;//1

	// >
	std::cout << (a < b) << std::endl;//1

	// <
	std::cout << (a > b) << std::endl;//0

	// >=
	std::cout << (a >= b) << std::endl;//0

	// <=
	std::cout << (a <= b) << std::endl;//1

	system("pause");
	return 0;
}
