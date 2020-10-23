#include <iostream>
#include <string>
using namespace std;
//建筑物类
class Building4
{
	//全局函数友元的声明
	friend void goodGay( Building4* building);
public:
	 Building4()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};
//全局函数
void goodGay( Building4* building)
{
	cout << "好基友全局函数正在访问:" << building->m_SittingRoom << endl;
	cout << "好基友全局函数正在访问:" << building->m_BedRoom << endl;
}
void test4()
{
	 Building4 building;
	goodGay(&building);
}
int main34()
{
	test4();
	system("pause");
	return 0;
}
