#include <iostream>
#include <string>
using namespace std;
int main()
{
	//��ֵ�����
	// =
	int a = 10;
	a = 100;
	std::cout << "a = " << a << std::endl;//100
	// +=
	a = 10;
	a += 2;//�ȼ��� a = a + 2;
	std::cout << "a = " << a << std::endl;//12
	// -=
	a = 10;
	a -= 2;//�ȼ��� a = a -2;
	std::cout << "a = " << a << std::endl;//8
	// *=
	a = 10;
	a *= 2;//�ȼ��� a = a * 2;
	std::cout << "a = " << a << std::endl;//20
	// /=
	a = 10;
	a /= 2;//�ȼ��� a = a / 2;
	std::cout << "a = " << a << std::endl;//5
	// %=
	a = 10;
	a %= 2;//�ȼ��� a = a % 2;
	std::cout << "a = " << a << std::endl;//0
	system("pause");
	return 0;
}
