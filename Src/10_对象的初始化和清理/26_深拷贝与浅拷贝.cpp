#include <iostream>
#include <string>
using namespace std;
//深拷贝与浅拷贝
class Person6
{
public:
	Person6()
	{
		cout << "Person6的无参构造函数的调用" << endl;
	}
	Person6(int age, int height)
	{
		cout << "Person6的有参构造函数的调用" << endl;
		m_Age = age;
		//身高的数据并不是直接赋值,而是利用new把身高数据创建在堆区
		//堆区开辟的数据:由程序员手动开辟,也要由程序员手动释放(在对象销毁前)
		m_Height = new int(height);//用指针接收堆区的数据
	}
	~Person6()
	{
		//析构代码:将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			//释放
			delete(m_Height);
			//同时为了防止野指针的出现,做置空操作
			m_Height = NULL;
		}
		cout << "Person6的析构函数的调用" << endl;
	}
	//自己实现拷贝构造函数,来解决浅拷贝带来的问题
	Person6(const Person6 &p)
	{
		cout<<"Person6拷贝构造函数的调用"<<endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//浅拷贝,编译器默认实现就是这行代码
		//深拷贝操作:首先通过解引用出的数据开辟自己的堆区内存
		m_Height = new int(*p.m_Height);
	}
	int m_Age;
	int *m_Height;//创建指向身高的指针---需要把身高的数据开辟到堆区
};
void test6()
{
	Person6 p1(18, 160);
	//解引用,解出指针数据
	cout << "p1的年龄为:" << p1.m_Age << ";p1的身高为:" << *p1.m_Height << endl;//18
	//2.未定义拷贝构造函数,编译器会自动添加拷贝构造，并且做浅拷贝操作
	Person6 p2(p1);//浅拷贝带来堆区内存重复释放的问题
	cout << "p2的年龄为:" << p2.m_Age << ";p2的身高为:" << *p2.m_Height << endl;//18
}
int main26()
{
	test6();
	system("pause");
	return 0;
}
