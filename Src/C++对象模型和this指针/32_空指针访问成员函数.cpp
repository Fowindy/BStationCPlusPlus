#include <iostream>
#include <string>
using namespace std;
//空指针访问成员函数
class Person2
{
public:
	void showClassName()
	{
		cout << "this is Person2 class" << endl;
	}
	void showPersonAge()
	{
		//报错:原因是传入的指针是为NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;//m_Age编译器默认为this->m_Age
	}
	int m_Age;
};
void test2()
{
	//创建空指针
	Person2* p = NULL;
	//p->showClassName();
	p->showPersonAge();
}
int main()
{
	test2();
	system("pause");
	return 0;
}
