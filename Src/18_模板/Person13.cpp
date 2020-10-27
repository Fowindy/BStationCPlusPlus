#include <iostream>
#include <string>
#include "Person13.h"
using namespace std;
template<typename T1, typename T2>
Person13<T1, T2>::Person13(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<typename T1, typename T2>
Person13<T1, T2>::~Person13()
{

}
template<typename T1, typename T2>
void Person13<T1, T2>::ShowPeron()
{
	cout << "姓名:" << this->m_Name << ";年龄:" << this->m_Age << endl;
}