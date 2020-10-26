#include <iostream>
#include <string>
using namespace std;
//函数模板的注意事项
template<typename T>//typename可以替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1.自动类型推导,必须推导出一致的数据类型T才可以使用
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);//正确!
	//mySwap(a, c);//错误!推导不出一致的T类型
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2.模板必须要确定出T的数据类型,才可使用
template<class T>
void func()
{
	cout << "func调用" << endl;
}
void test002()
{
	//func();/错误!模板实现中必须含有T
	func<int>();//正确!
}
int main02()
{
	test02();
	test002();
	system("pause");
	return 0;
}
