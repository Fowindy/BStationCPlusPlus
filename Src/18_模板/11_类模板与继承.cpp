#include <iostream>
#include <string>
using namespace std;
//类模板和继承
//父类为类模板
template<typename T>
class Base
{
	T m;
};
//class Son :public Base//错误:必须要知道父类中的T的类型,才能继承给子类
class Son :public Base<int>//父类为类模板,子类必须要知道父类中的T的类型,才能继承给子类
{

};
void test11()
{
	Son s1;
}
int main()
{
	test11();
	system("pause");
	return 0;
}
