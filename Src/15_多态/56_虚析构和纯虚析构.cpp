#include <iostream>
#include <string>
using namespace std;
//虚析构和纯虚析构
class Animal56
{
public:
	virtual void Speak() = 0;
};
class Cat56 :public Animal56
{
public:
	Cat56(string name)
	{
		m_Name = new string(name);
	}
	virtual void Speak()
	{
		cout << *m_Name << "小猫会说话" << endl;
	}
	string* m_Name;
};
void test56()
{
	Animal56* animal = new Cat56("Tom");
	animal->Speak();
	//1.初步释放堆区数据,最好是通过析构函数释放
	delete animal;
}
int main()
{
	test56();
	system("pause");
	return 0;
}
