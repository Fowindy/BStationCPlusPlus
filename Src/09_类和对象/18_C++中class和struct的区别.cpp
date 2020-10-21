#include <iostream>
#include <string>
using namespace std;
//C++中class和struct的区别
//struct 默认权限是 公共 public
//class 默认权限是 私有 private
class C1
{
	int m_A;//默认权限是私有
};
struct C2
{
	int m_A;//默认权限是公共
};
int main18()
{
	C1 c1;
	//c1.m_A = 100;//在class中默认权限私有,类外不能访问;
	C2 c2;
	c2.m_A = 100;//在struct中默认权限公共,类外可以访问;
	system("pause");
	return 0;
}
