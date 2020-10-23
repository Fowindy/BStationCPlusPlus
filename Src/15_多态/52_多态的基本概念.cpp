#include <iostream>
#include <string>
using namespace std;
//多态
//动物类
class Animal
{
public:
	//2.父类设置为虚函数则可实现
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
//猫类
class Cat :public Animal
{
public:
	//重写 函数返回值类型 函数名	参数列表	完全相同
	void speak()
	{
		cout << "猫咪在说话" << endl;
	}
};
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//执行叫的函数
//1.原因是地址早绑定,在编译阶段确定函数地址
//如果想执行让猫说话,那么这个函数地址就不能提前绑定,需要在运行阶段进行绑定,地址晚绑定

//动态多态满足条件
//1、有继承关系
// 2、子类重写父类的虚函类
//动态多态使用
//父类的指针或者引用 指向子类对象
void doSpeak(Animal& animal)//Animal的引用:Animal& animal = cat;
{
	animal.speak();//动物在说话//猫咪在说话
}
void test52()
{
	Cat cat;
	doSpeak(cat);
	cout << "------------------3.小狗在说话----------------" << endl;
	Dog dog;
	doSpeak(dog);
}
void test521()
{
	cout << "sizeof(Animal) = " << sizeof(Animal) << endl;//不加virtual相当于空类,内存为1
	//加virtual相当于指针,占4个字节
}
int main52()
{
	test52();
	test521();
	system("pause");
	return 0;
}
