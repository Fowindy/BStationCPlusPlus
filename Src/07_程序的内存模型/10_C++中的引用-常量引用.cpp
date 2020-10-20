#include <iostream>
#include <string>
using namespace std;
//加入const避免误修改
void showValue(const int& val)
{
	//val = 1000;//加入const后为只读,不可修改
	cout<<"val = "<<val<<endl;
}
int main10()
{
	//常量引用
	//使用场景:用来修饰形参,防止误操作
	int a = 10;
	//int& ref = a;//合法
	//int& ref = 10;//引用必须引一块合法的内存空间
	//加上const之后,编译器将代码修改 int temp = 10;const int& ref = temp;
	const int& ref = 10;
	//ref = 20;//加入const之后变为只读,不可以修改

	int b = 100;
	showValue(b);//val = 1000
	cout << "b = " << b << endl;//b = 1000

	system("pause");
	return 0;
}
