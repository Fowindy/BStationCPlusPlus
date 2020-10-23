#include <iostream>
#include <string>
using namespace std;
//递减运算符重载
class MyInteger1
{
	//声明友元访问私有局部变量
	friend ostream& operator<<(ostream& cout, MyInteger1& myNum);
public:
	//2.成员函数实现递减运算符(前置--)重载
	MyInteger1& operator--()
	{
		//先自减
		m_Num--;
		//后返回自身对象
		return *this;
	}
public:
	//构造函数初始化值
	MyInteger1()
	{
		m_Num = 0;
	}
private:
	int m_Num;
};
//1.左移运算符重载完成
ostream& operator<<(ostream& cout, MyInteger1& myNum)
{
	cout<<myNum.m_Num;
	return cout;
}
void test0()
{
	MyInteger1 myNum;
	cout<<myNum<<endl;
	cout<<"------------------(前置递减--)----------------"<<endl;
	cout<<--myNum<<endl;
}
int main()
{
	test0();
	system("pause");
	return 0;
}
