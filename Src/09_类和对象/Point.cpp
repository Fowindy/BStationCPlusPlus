#include <iostream>
#include <string>
using namespace std;
#include "Point.h"
//����X����
void Point::setX(double x)
{
	m_X = x;
}
//��ȡX����
double Point::getX()
{
	return m_X;
}
//����Y����
void Point::setY(double y)
{
	m_Y = y;
}
//��ȡY����
double Point::getY()
{
	return m_Y;
}
