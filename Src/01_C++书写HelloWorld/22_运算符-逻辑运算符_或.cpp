#include <iostream>
#include <string>
using namespace std;
int main22()
{
	// 逻辑运算符_或(||)
	int a = 10;
	int b = 10;
	cout << (a || b) << endl;//1

	a = 0;
	b = 10;
	cout << (a || b) << endl;//1

	a = 0;
	b = 0;
	cout << (a || b) << endl;//0

	//同假为假,其余为真
	system("pause");
	return 0;
}
