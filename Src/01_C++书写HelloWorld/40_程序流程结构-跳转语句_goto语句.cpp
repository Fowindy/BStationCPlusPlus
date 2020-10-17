#include <iostream>
#include <string>
using namespace std;
int main()
{
	std::cout << "1.xxxxxxx" << std::endl;
	std::cout << "2.xxxxxxx" << std::endl;
	goto FLAG;
	std::cout << "3.xxxxxxx" << std::endl;
	std::cout << "4.xxxxxxx" << std::endl;
	FLAG:
	std::cout << "5.xxxxxxx" << std::endl;
	system("pause");
	return 0;
}
