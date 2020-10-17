#include <iostream>
#include <string>
using namespace std;
int main()
{
	// 逻辑运算符_与(&&)
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;//1

	a = 0;
	b = 10;
	cout << (a && b) << endl;//0

	a = 0;
	b = 0;
	cout << (a && b) << endl;//0

	//同真为真,其余为假
	system("pause");
	return 0;
}
