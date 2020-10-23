#include <iostream>
#include <string>
using namespace std;
//函数重载
//可以让函数名相同,提高复用性
//函数重载满足的条件
//1.同一个作用域下(全局作用域)
//2.函数名称相同
//3.函数参数类型不同或者个数不同,或者顺序不同
void func()//第一个
{
	cout<<"func的调用"<<endl;
}
void func(int a)//第二个
{
	cout<<"func(int a)的调用"<<endl;
}
void func(double a)//第三个
{
	cout << "func(double a)的调用" << endl;
}
void func(int a, double b)//第四个
{
	cout << "func(int double)的调用" << endl;
}
void func(double a, int b)//第五个
{
	cout << "func(double int)的调用" << endl;
}
//注意事项
//1.函数的返回值不可以作为函数重载的条件,因为函数有返回值,可以不需要接受函数返回值的变量
//int void func(double a, int b)//错误
//{
//	cout << "func(double int)的调用" << endl;
//}
int main13()
{
	func();//调用第一个
	func(10);//调用第二个
	func(3.14);//调用第三个
	func(10, 3.14);//调用第四个
	func(3.14, 10);//调用第五个
	system("pause");
	return 0;
}
