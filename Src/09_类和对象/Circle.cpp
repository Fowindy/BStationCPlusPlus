#include <iostream>
#include <string>
using namespace std;
#include "Circle.h"
//1.Բ��
//���ð뾶
void Circle::setR(double r)
{
	m_R = r;
}
//��ȡ�뾶
double Circle::getR()
{
	return m_R;
}
//����Բ��
void Circle::setCenter(Point center)
{
	m_Center = center;
}
//��ȡԲ��
Point Circle::getCenter()
{
	return m_Center;
}

