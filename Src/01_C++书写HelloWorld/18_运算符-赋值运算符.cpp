#include <iostream>
#include <string>
using namespace std;
int main18()
{
	//赋值运算符
	// =
	int a = 10;
	a = 100;
	std::cout << "a = " << a << std::endl;//100
	// +=
	a = 10;
	a += 2;//等价于 a = a + 2;
	std::cout << "a = " << a << std::endl;//12
	// -=
	a = 10;
	a -= 2;//等价于 a = a -2;
	std::cout << "a = " << a << std::endl;//8
	// *=
	a = 10;
	a *= 2;//等价于 a = a * 2;
	std::cout << "a = " << a << std::endl;//20
	// /=
	a = 10;
	a /= 2;//等价于 a = a / 2;
	std::cout << "a = " << a << std::endl;//5
	// %=
	a = 10;
	a %= 2;//等价于 a = a % 2;
	std::cout << "a = " << a << std::endl;//0
	system("pause");
	return 0;
}
