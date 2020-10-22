#include <iostream>
#include <string>
using namespace std;
//递增运算符重载
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myNum);
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
	cout<< myNum <<endl;
}
int main()
{
	test9();
	system("pause");
	return 0;
}
