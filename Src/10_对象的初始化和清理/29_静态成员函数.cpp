#include <iostream>
#include <string>
using namespace std;
//静态成员函数
//1.所有的对象共享同一个函数
//2.静态成员函数只能访问静态成员变量
class Person9
{
public:
	//静态成员函数
	static void func()
	{
		cout<<"static void func()的调用"<<endl;
	}
};
//静态成员函数有两种访问方式
void test9()
{
	//1.通过对象访问调用
	Person9 p;
	p.func();
	//2.通过类名调用
	Person9::func();
}
int main()
{
	test9();
	system("pause");
	return 0;
}
