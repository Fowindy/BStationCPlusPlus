#include <iostream>
#include <string>
using namespace std;
//递减运算符重载
class MyInteger1
{
	friend ostream& operator<<(ostream& cout, MyInteger1 myInt);
public:
	//2.递减运算符(前置--)重载
	MyInteger1& operator--()
	{
		//先减
		m_Num--;
		//后返回
		return *this;
	}
	//3.递减运算符(后置--)重载
	MyInteger1 operator--(int)
	{
		//先建临时变量存储对象
		MyInteger1 temp = *this;
		//后让值--
		m_Num--;
		//最后返回记录的对象
		return temp;
	}
public:
	MyInteger1()
	{
		m_Num = 0;//构造函数初始化
	}
private:
	int m_Num;
};
//1.左移操作符重载
ostream& operator<<(ostream& cout, MyInteger1 myInt)
{
	cout << myInt.m_Num;
	return cout;
}
void test0()
{
	MyInteger1 myInt;
	cout << myInt << endl;//0
	cout << "------------------递减运算符(前置--)----------------" << endl;
	cout << --myInt << endl;//-1
	cout << myInt << endl;//-1
	cout << "------------------递减运算符(后置--)----------------" << endl;
	cout << myInt-- << endl;//-1
	cout << myInt << endl;//-2
}
int main()
{
	test0();
	system("pause");
	return 0;
}