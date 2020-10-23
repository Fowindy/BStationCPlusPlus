#pragma once
#include<iostream>
using namespace std;
#include "Point.h"
//1.圆类
class Circle
{
private:
	int m_R;//半径
	//在类中可以让另外一个类,作为本类中的成员
	Point m_Center;//圆心
public:
	//设置半径
	void setR(double r);
	//获取半径
	double getR();
	//设置圆心
	void setCenter(Point center);
	//获取圆心
	Point getCenter();
};