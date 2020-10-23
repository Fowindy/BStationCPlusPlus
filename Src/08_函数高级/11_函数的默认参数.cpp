#include <iostream>
#include <string>
using namespace std;
//函数的默认参数
//语法:返回值类型 函数名(形参=默认值)
//如果我们自己传入数据,就用自己的数据,如果没有,那么就用默认值
int add(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
//注意事项1:如果某个位置已经有默认参数,那么这个位置往后,从左到右都必须有默认值
//int add1(int a, int b = 20, int c)//c必须给出默认值
//{
//	return a + b + c;
//}

//注意事项2:如果函数的声明有默认参数,函数实现就不能有默认参数
//声明和实现只能有一个有默认参数
int add2(int a, int b = 20, int c = 30);
int add2(int a, int b, int c)
{
	return a + b + c;
}
int main11()
{
	cout << add(10) << endl;//60
	cout << add(10,-10) << endl;//30
	cout << add(10, -10, -5) << endl;//-5
	cout << add2(10, -10, -5) << endl;//-5
	system("pause");
	return 0;
}
