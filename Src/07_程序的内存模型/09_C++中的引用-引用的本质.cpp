#include <iostream>
#include <string>
using namespace std;
//引用的本质
//发现是引用,自动转换为:int* const ref = &a;
void func(int& ref)
{
	//ref是引用,自动解引用为:*ref = 100;
	ref = 100;
}
int main09()
{
	int a = 10;
	//发现是引用,则自动转换为:int* const ref = &a;指针常量是指针不可以改,也即引用为什么不可改
	int& ref = a;
	//内部发现ref是引用,自动帮我们转换为解引用:*ref = 20
	ref = 20;
	cout<<"a = "<<a<<endl;//20
	cout<<"ref = "<<ref<<endl;//20
	func(a);
	cout << "a = " << a << endl;//100
	cout << "ref = " << ref << endl;//100
	system("pause");
	return 0;
}
