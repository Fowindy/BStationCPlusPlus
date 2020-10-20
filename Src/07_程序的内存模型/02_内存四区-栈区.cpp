#include <iostream>
#include <string>
using namespace std;
//栈区的注意事项:
//1.存放函数的参数值,局部变量等;由编译器自动分配释放;
//2.不要返回局部变量的地址,栈区开辟的数据由编译器自动释放;
int* func(int b)//形参数据也会放在栈区
{
	int a = 10;//局部变量,存放在栈区,栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量的地址
}
int main02()
{
	//接受func函数的返回值
	int* p = func(100);
	cout << *p << endl;//10---为什么第一次的数据没有清空,是因为编译器做了一个保留,也就是只保留一次;
	cout << *p << endl;//2073672672---第二次这个数据就不再保留了;为了确保数据不出错,不要返回局部变量的地址
	system("pause");
	return 0;
}
