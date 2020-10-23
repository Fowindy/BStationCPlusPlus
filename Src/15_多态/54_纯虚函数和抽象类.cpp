#include <iostream>
#include <string>
using namespace std;
class Base54
{
	//纯虚函数
	//语法：virtual 返回值类型 函数名 (参数) = 0;
	//只要有一个纯虚函数,这个类称为抽象类
	// 抽象类特点:
	//1、无法实例化对象
	//2、抽象类的子类 必须要重写父类中的纯虚函数,否则也属于抽象类
public:
	virtual void func() = 0;
};
class Son :public Base54
{
	//1.子类未重写父类中的纯虚函数,也属于抽象类
public:
	//2.重写父类中的纯虚函数
	virtual void func()
	{
		cout << "Son func()函数调用" << endl;
	}
};
void test54()
{
	//Base b; //抽象类是无法实例化对象
	//new Base;// 抽象类是无法实例化对象
	//Son s; //抽象类是无法实例化对象
	//new Son;// 抽象类是无法实例化对象
	Base54* base = new Son;
	base->func();
	//base指向堆中数据,记得手动释放
	delete base;
}
int main()
{
	test54();
	system("pause");
	return 0;
}
