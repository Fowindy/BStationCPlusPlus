#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#include "Circle.h"
#include "Point.h"
//点和圆关系案例
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
	p2.setX(10);
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
