#pragma once
#include<iostream>
using namespace std;
//2.����
class Point
{
private:
	double m_X;//X����
	double m_Y;//Y����
public:
	//����X����
	void setX(double x);
	//��ȡX����
	double getX();
	//����Y����
	void setY(double y);
	//��ȡY����
	double getY();
};
