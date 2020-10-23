#include <iostream>
#include <string>
using namespace std;
//55_多态案例2_制作饮品.cpp
//饮品父类
class AbstractDrink
{
public:
	//纯虚函数_制作饮品四步骤
	//烧水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;

	//规定流程
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//制作咖啡类
class Coffee :public AbstractDrink
{
	//烧水
	virtual void Boil()
	{
		cout << "煮农夫山泉水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "将咖啡倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入牛奶和糖" << endl;
	}
};
class Tea :public AbstractDrink
{
	//烧水
	virtual void Boil()
	{
		cout << "煮农矿泉水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "将茶水倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入枸杞" << endl;
	}
};
//业务函数
void DoWork(AbstractDrink* abs)
{
	abs->MakeDrink();
	delete abs;
}
void test55()
{
	//制作咖啡
	cout << "------------------制作咖啡----------------" << endl;
	DoWork(new Coffee);
	//制作茶水
	cout << "------------------制作茶水----------------" << endl;
	DoWork(new Tea);
}
int main55()
{
	test55();
	system("pause");
	return 0;
}
