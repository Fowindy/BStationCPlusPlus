#pragma once
#include<iostream>
using namespace std;
//2.点类
class Point
{
private:
	double m_X;//X坐标
	double m_Y;//Y坐标
public:
	//设置X坐标
	void setX(double x);
	//获取X坐标
	double getX();
	//设置Y坐标
	void setY(double y);
	//获取Y坐标
	double getY();
};
