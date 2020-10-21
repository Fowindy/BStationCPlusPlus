#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//点和圆关系案例
//2.点类
class Point
{
private:
	int m_X;//X坐标
	int m_Y;//Y坐标
public:
	//设置X坐标
	void setX(double x)
	{
		m_X = x;
	}
	//获取X坐标
	double getX()
	{
		return m_X;
	}
	//设置Y坐标
	void setY(double y)
	{
		m_Y = y;
	}
	//获取Y坐标
	double getY()
	{
		return m_Y;
	}
};
//1.圆类
class Circle
{
private:
	int m_R;//半径
	//在类中可以让另外一个类,作为本类中的成员
	Point m_Center;//圆心
public:
	//设置半径
	void setR(double r)
	{
		m_R = r;
	}
	//获取半径
	double getR()
	{
		return m_R;
	}
	//设置圆心
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//获取圆心
	Point getCenter()
	{
		return m_Center;
	}
};
//3.全局函数:判断点和圆的关系
int isInCircle(Point& p,Circle& c)
{
	double distance = pow(pow(p.getX() - c.getCenter().getX(), 2) + pow(p.getY() - c.getCenter().getY(), 2), 1.0 / 2);
	if (distance == c.getR())//在圆上
	{
		return 0;
	}
	else if (distance > c.getR())//在圆外
	{
		return 1;
	}
	else//在圆内
	{
		return -1;
	}
}
int main()
{
	Circle c1;
	Point center;
	center.setX(0);
	center.setY(0);
	c1.setR(10);
	c1.setCenter(center);

	Point p2;
	p2.setX(5.3);
	p2.setY(0.9);

	switch (isInCircle(p2,c1))
	{
	case 0:
		cout<<"点在圆上"<<endl;
		break;
	case 1:
		cout<<"点在圆外"<<endl;
		break;
	case -1:
		cout<<"点在圆内"<<endl;
		break;
	}

	system("pause");
	return 0;
}
