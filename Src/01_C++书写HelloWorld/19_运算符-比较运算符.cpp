#include <iostream>
#include <string>
using namespace std;
int main19()
{
	//±È½ÏÔËËã·û
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
