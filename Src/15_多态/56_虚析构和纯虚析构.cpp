#include <iostream>
#include <string>
using namespace std;
//虚析构和纯虚析构
class Animal56
{

public:
	Animal56()
	{
		cout << "Animal构造函数调用" << endl;
	}
	virtual void Speak() = 0;
	//2.<<解决方法:将父类析构加关键字virtual改成虚析构,利用虚析构可以解决父类指针释放子类对象时不干净的问题
	virtual ~Animal56()
	{
		cout << "Animal析构函数调用" << endl;
	}
};
class Cat56 :public Animal56
{
public:
	Cat56(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	virtual void Speak()
	{
		cout << *m_Name << "小猫会说话" << endl;
	}
	string* m_Name;
	~Cat56()
	{
		if (m_Name != NULL)
		{
			//2.?输出并没有出现Cat析构函数的调用，说明堆区数据没有释放干净，导致内存泄漏
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};
void test56()
{
	Animal56* animal = new Cat56("Tom");
	animal->Speak();
	//1.因为父类指针指向Cat并存放在堆区，需要手动释放
	//2.!原因是父类指针在析构时候不会调用子类中析构函数,导致子类如果有堆区属性,出现内存泄漏
	delete animal;
}
int main()
{
	test56();
	system("pause");
	/*
	Animal构造函数调用
	Cat构造函数调用
	Tom小猫会说话
	Animal析构函数调用
	请按任意键继续. . .
	*/
	return 0;
}
