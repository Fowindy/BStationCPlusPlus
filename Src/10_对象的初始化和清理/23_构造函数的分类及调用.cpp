#include <iostream>
#include <string>
using namespace std;
//构造函数的分类及调用
//分类
// 按照参数分类 无参构造(默认构造)和有参构造
//按照类型分类 普通构造拷贝构造
class Person3
{
public:
	//构造函数
	Person3()
	{
		cout<<"Person3的无参构造函数调用"<<endl;
	}
	//构造函数
	Person3(int a)
	{
		age = a;
		cout << "Person3的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person3(const Person3& p)
	{
		//将传入的人身上的所有属性,拷贝到我身上
		age = p.age;
		cout<<"Person3拷贝构造函数调用"<<endl;
	}
	~Person3()
	{
		cout<<"Person3的析构函数调用"<<endl;
	}
	int age;
};
//调用
void test02()
{
	//1.括号法
	Person3 p1;//默认构造函数的调用
	Person3 p2(10);//有参构造函数
	Person3 p3(p2);//拷贝构造函数调用
	cout << "P2的年龄为:" << p2.age << endl;//10
	cout << "P3的年龄为:" << p3.age << endl;//10
	//注意事项:
	//调用默认构造函数时候,不要加()
	//因为下面这行代码,编译器会认为是一个函数的声明
	Person3 p4();//错误,会认为是函数声明,不会认为是在创建对象
	//2.显式法
	Person3 p5;
	Person3 p6 = Person3(20);//有参构造
	Person3 p7 = Person3(p6);//拷贝构造
	cout << "P6的年龄为:" << p6.age << endl;//20
	cout << "P7的年龄为:" << p7.age << endl;//20
	Person3(20);//匿名对象 特点:当前行执行结束后,系统会立即回收掉匿名对象
	cout<<"aaaa"<<endl;
	//注意事项2
	//不要利用拷贝拘造函数初始化匿名对象 编译器会认为Person3(p3)===Person3 p3;对象声明
	//Person3(p3);//错误
	//3.隐式转换法
	Person3 p8 = 30;//相当于 写了 Person3 p8 = Person3(30);
	Person3 p9 = p8;
	cout << "P8的年龄为:" << p8.age << endl;//30
	cout << "P9的年龄为:" << p9.age << endl;//30
}
int main23()
{
	test02();
	system("pause");
	return 0;
}
