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
//如果想灵活指定父类中T的类型,子类也需要变类模板
template<typename T1, typename T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为:" << typeid(T1).name() << endl;//int
		cout << "T2的类型为:" << typeid(T2).name() << endl;//char
	}
	T1 obj;
};
void test11()
{
	Son s1;
	Son2<int, char> s2;//char是父类T类型,int是子类T类型
}
int main11()
{
	test11();
	system("pause");
	return 0;
}
