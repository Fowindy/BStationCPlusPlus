#include <iostream>
#include <string>
using namespace std;
//类做友元
//声明类
class Building5;
//好基友类
class GoodGay
{
public:
	GoodGay();
	//好基友类有参数函数的声明
	void visit();
	//好基友类中定义Building类成员
	Building5* building;
};
//建筑物类
class Building5
{
	//类做友元声明
	friend class GoodGay;
public:
	//类内声明成员函数
	Building5();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};
//类外实现成员函数
Building5::Building5()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	//创建一个建筑物的对象
	building = new Building5;
}
void GoodGay::visit()
{
	cout<<"好基友类正在访问:"<<building->m_SittingRoom<<endl;
	cout<<"好基友类正在访问:"<<building->m_BedRoom<<endl;
}
void test5()
{
	GoodGay gg;
	gg.visit();
}
int main35()
{
	test5();
	system("pause");
	return 0;
}
