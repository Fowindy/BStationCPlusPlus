#include <iostream>
#include <string>
using namespace std;
//继承中的构造和析构的顺序
//父类
class Base47
{
public:
	Base47()
	{
		cout << "父类中的构造函数" << endl;
	}
	~Base47()
	{
		cout << "父类中的析构函数" << endl;
	}
};
//子类
class Son1 :public Base47
{
public:
	Son1()
	{
		cout << "子类中的构造函数" << endl;
	}
	~Son1()
	{
		cout << "子类中的析构函数" << endl;
	}
};
void test47()
{
	Son1 s1;
	//继承中的构造和析构顺序如下:
	//先构造父类, 再构造子类, 析构的顺序与构造的顺序相反
}
int main47()
{
	test47();
	system("pause");
	return 0;
}
