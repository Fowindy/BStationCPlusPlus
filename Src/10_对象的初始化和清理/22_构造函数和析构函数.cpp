#include <iostream>
#include <string>
using namespace std;
//对象的初始化和清理
//1.构造函数 进行初始化操作
class Person
{
public:
	//1.1.构造函数
	//没有返回值 不用写void
	//函数名和类名相同
	//构造函数可以有参数,可以发生重载
	//创建对象的时候,构造函数会自动调用,而且只调用一次
	Person()
	{
		cout<<"Person 构造函数的调用"<<endl;
	}
	//2.析构函数 进行清理操作
	//没有返回值 不写void
	//函数名和类名相同 在名称前面加~
	//析构函数不可以有参数的,因此不可以发生重载
	//对象在销毁前会自动调用析构函数,而且只会调用一次
	~Person()
	{
		cout<<"Person 析构函数调用"<<endl;
	}
};
//构造和析构都是必须有的实现,如果我们自己不提供,编译器会提供一个空实现的构造和析构
void test01()
{
	Person p;//局部变量在栈上,test01执行完毕后,释放这个对象
}

int main22()
{
	//test01();//自动调用:Person 构造函数的调用
	Person p;//main函数未结束前不会调用析构
	system("pause");
	return 0;
}
