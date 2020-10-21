#include <iostream>
#include <string>
using namespace std;
//三种权限
//公共权限  public	成员  类内可以访问  类外可以访问
//保护权限  protected	成员  类内可以访问  类外不可以访问	儿子可以访问父亲中的保护内容
//私有权限  private	成员    类内可以访问  类外不可以访问	儿子不可以访问父亲中的私有内容
class Person
{
public:
	//公共权限
	string m_Name;
protected:
	//保护权限
	string m_Car;
private:
	//私有权限
	int m_PassWord;
public:
#pragma region 类内可以访问
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_PassWord = 123456;
		cout<<"姓名:"<<m_Name<<";汽车:"<<m_Car<<";密码:"<<m_PassWord<<endl;
	}
#pragma endregion

};
int main17()
{
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";//保护权限的内容,在类外不能访问
	//p1.m_PassWord = 123；//私有权限的内容，类外不能访问
	p1.func();//姓名:张三;汽车:拖拉机;密码:123456
	system("pause");
	return 0;
}
