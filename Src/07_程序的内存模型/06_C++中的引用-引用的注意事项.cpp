#include <iostream>
#include <string>
using namespace std;
int main06()
{
	//引用的注意事项
	//1.引用必须要初始化
	int a = 10;
	//int &b;//错误,引用未初始化
	int &b = a;//正确,有初始化
	//2.引用一旦初始化后,就不可以再引用(改变)
	int c = 20;
	b = c;//赋值操作,而不是更改引用
	cout << "a = " << a << endl;//20
	cout << "b = " << b << endl;//20
	cout << "c = " << c << endl;//20
	system("pause");
	return 0;
}