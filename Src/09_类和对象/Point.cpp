#include <iostream>
#include <string>
using namespace std;
#include "Point.h"
//设置X坐标
void Point::setX(double x)
{
	m_X = x;
}
//获取X坐标
double Point::getX()
{
	return m_X;
}
//设置Y坐标
void Point::setY(double y)
{
	m_Y = y;
}
//获取Y坐标
double Point::getY()
{
	return m_Y;
}
