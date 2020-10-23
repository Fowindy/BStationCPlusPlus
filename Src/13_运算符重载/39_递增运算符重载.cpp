#include <iostream>
#include <string>
using namespace std;
//递增运算符重载
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myNum);
public:
	//2.成员函数重载(前++)运算符,返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++()
	{
		//先进行++运算
		m_Num++;
		//再将自身返回
		return *this;
	}
	//3.成员函数重载(后++)运算符
	//MyInteger operator++(int) int代表占位参数,可以区分前置++和后置++
	//返回MyInteger而不是引用,原因是返回的是temp,成员函数运行后就释放了
	MyInteger operator++(int)
	{
		//先记录当时的结果
		MyInteger temp = *this;//temp为局部变量
		//后递增
		m_Num++;
		//最后将记录的结果返回
		return temp;
	}
public:
	MyInteger()
	{
		m_Num = 0;
	}
private:
	int m_Num;
};
//1.上节课内容:全局函数实现左移运算符重载
ostream& operator<<(ostream& cout, MyInteger myNum)
{
	cout<<myNum.m_Num;
	return cout;
}
void test9()
{
	MyInteger myNum;
	cout << myNum << endl;//0
	cout << ++(++myNum) << endl;//2
	cout << myNum << endl;//2
}
void test10()
{
	MyInteger myNum;
	cout<<myNum++<<endl;//0
	cout<<myNum<<endl;//1
}
int main()
{
	test9();
	test10();
	system("pause");
	return 0;
}
