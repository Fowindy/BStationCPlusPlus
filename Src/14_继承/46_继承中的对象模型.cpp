#include <iostream>
#include <string>
using namespace std;
//继承中的对象模型
//父类
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
//子类
class Son1 :public Base1
{
public:
	int m_D;
};
void test46()
{
	//1.继承时子类所占的内存_在父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
	cout << "sizeof(Son1)" << sizeof(Son1) << endl;//16
}
int main46()
{
	test46();
	system("pause");
	return 0;
}
