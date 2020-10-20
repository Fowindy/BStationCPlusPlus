#include <iostream>
#include <string>
using namespace std;
//引用做函数的返回值
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;
	return a;
}
//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10;//static修饰成静态变量提升局部变量生命周期,由栈区提到全局区,全局区的数据在程序结束后系统释放
	return a;
}
int main08()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;//10---第一次结果正确,是因为编译器做了保留
	cout << "ref = " << ref << endl;//2073672672---第二次结果错误,因为a的内存已经释放
	cout<<"----------------------------------"<<endl;
	int& ref1 = test02();
	cout << "ref1 = " << ref1 << endl;//10
	cout << "ref1 = " << ref1 << endl;//10
	//函数的调用可以作为左值
	//test02()返回的就是a的引用,再赋值1000,相当于就等价于a = 1000
	//ref2就是a的别名,所以ref也等于1000
	test02() = 1000;//如果函数的返回值是引用,这个函数调用可以作为左值
	cout << "ref1 = " << ref1 << endl;//1000
	cout << "ref1 = " << ref1 << endl;//1000
	system("pause");
	return 0;
}
