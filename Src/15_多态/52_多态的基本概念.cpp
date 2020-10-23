#include <iostream>
#include <string>
using namespace std;
//多态
//动物类
class Animal
{
public:
	void speak()
	{
		cout << "动物在说话" << endl;
	}
};
//猫类
class Cat :public Animal
{
public:
	void shout()
	{
		cout << "猫咪在说话" << endl;
	}
};
//执行叫的函数
//1.原因是地址早绑定,在编译阶段确定函数地址
//如果想执行让猫说话,那么这个函数地址就不能提前绑定,需要在运行阶段进行绑定,地址晚绑定
void doSpeak(Animal& animal)//Animal的引用:Animal& animal = cat;
{
	animal.speak();//动物在说话
}
void test52()
{
	Cat cat;
	doSpeak(cat);
}
int main()
{
	test52();
	system("pause");
	return 0;
}
