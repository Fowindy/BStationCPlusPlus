#pragma once
#include<iostream>
using namespace std;
#include "Point.h"
//1.Բ��
class Circle
{
private:
	int m_R;//�뾶
	//�����п���������һ����,��Ϊ�����еĳ�Ա
	Point m_Center;//Բ��
public:
	//���ð뾶
	void setR(double r);
	//��ȡ�뾶
	double getR();
	//����Բ��
	void setCenter(Point center);
	//��ȡԲ��
	Point getCenter();
};