#include <iostream>
#include <string>
using namespace std;
//类模板成员函数类外实现
template<typename T1, typename T2>
class Person12
{
public:
	//构造函数和成员函数的类内实现
	Person12(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowPerson()
	{
		cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};
int main()
{
	system("pause");
	return 0;
}
