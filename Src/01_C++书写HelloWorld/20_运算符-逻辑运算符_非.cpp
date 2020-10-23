#include <iostream>
#include <string>
using namespace std;
int main20()
{
	//逻辑运算符非!
	int a = 10;
	//在C++中除了0都为真
	cout << !a << endl;//0
	cout << !!a << endl;//1
	//总结:真变假,假变真
	system("pause");
	return 0;
}
