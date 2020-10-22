#include <iostream>
#include <string>
using namespace std;
//成员函数做友元
//类声明
class Building6;
class GoodGay6
{
public:
	GoodGay6();
	void visit();//让visit函数可以访问Building6中的私有成员
	void visit2();//让visit2函数不能访问Building中的私有成员
	Building6* building;
};
class Building6
{
	//告诉编译器GoodGay类下的visit成员函数作为本类的好朋友, 可以访问私有成员
	friend void GoodGay6::visit();
public:
	Building6();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//类外实现成员函数
Building6::Building6()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay6::GoodGay6()
{
	//创建建筑物类对象成员
	building = new Building6;
}
void GoodGay6::visit()
{
	cout << "visit函数正在访问:" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问:" << building->m_BedRoom << endl;
}
void GoodGay6::visit2()
{
	cout << "visit2函数正在访问:" << building->m_SittingRoom << endl;
	//cout << "visit2函数正在访问:" << building->m_BedRoom << endl;
}
void test6()
{
	GoodGay6 gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test6();
	system("pause");
	return 0;
}
