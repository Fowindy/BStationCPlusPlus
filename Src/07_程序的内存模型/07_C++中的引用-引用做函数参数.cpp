#include <iostream>
#include <string>
using namespace std;
//交换函数
//1.值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递
void mySwap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main07()
{
	int a = 10;
	int b = 20;
	cout << "交换前:a = " << a << ";b = " << b << endl;//10 20
	mySwap01(a, b);//值传递:形参发生改变不会修饰实参
	cout << "值传递_交换后:a = " << a << ";b = " << b << endl;//10 20
	mySwap02(&a, &b);//地址传递:形参发生变化会修饰实参
	cout << "地址传递_交换后:a = " << a << ";b = " << b << endl;//20 10
	mySwap03(a, b);//引用传递:形参发生变化会修饰实参
	cout << "引用传递_交换后:a = " << a << ";b = " << b << endl;//10 20
	system("pause");
	return 0;
}
