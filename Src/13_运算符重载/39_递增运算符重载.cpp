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
	cout << myNum << endl;
	cout << ++(++myNum) << endl;
	cout << myNum << endl;
}
int main()
{
	test9();
	system("pause");
	return 0;
}
