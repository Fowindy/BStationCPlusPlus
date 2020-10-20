#include <iostream>
#include <string>
using namespace std;
//new操作符
//1.new的基本语法
int* func()
{
	//在堆区创建整型数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}
void test01()
{
	int *p = func();
	cout << *p << endl;//10
	cout << *p << endl;//10
	cout << *p << endl;//10
	//堆区的数据,由程序员管理开辟,程序员管理释放
	//如果想释放堆区的数据,利用关键字delete
	delete p;
	//cout<<*p<<endl;//内存已经被释放,再次发那个问就是非法操作,会报错
}
//2.在堆区利用new开辟数组
void test02()
{
	//创建10个整型数据的数组,在堆区
	int* arr = new int[10];//10代表数组有10个元素
	//数组赋值操作
	for (int i = 0; i < 10 ; i++)
	{
		arr[i] = i + 100;//给10个元素赋值 100~109
	}
	//打印数组
	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<endl;
	}
	//释放堆区数组
	//释放数组的时候,要加[]才可以
	delete[] arr;
}
int main04()
{
	test01();
	test02();
	system("pause");
	return 0;
}
