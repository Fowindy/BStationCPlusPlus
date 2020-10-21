#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//���Բ��ϵ����
//2.����
class Point
{
private:
	int m_X;//X����
	int m_Y;//Y����
public:
	//����X����
	void setX(double x)
	{
		m_X = x;
	}
	//��ȡX����
	double getX()
	{
		return m_X;
	}
	//����Y����
	void setY(double y)
	{
		m_Y = y;
	}
	//��ȡY����
	double getY()
	{
		return m_Y;
	}
};
//1.Բ��
class Circle
{
private:
	int m_R;//�뾶
	//�����п���������һ����,��Ϊ�����еĳ�Ա
	Point m_Center;//Բ��
public:
	//���ð뾶
	void setR(double r)
	{
		m_R = r;
	}
	//��ȡ�뾶
	double getR()
	{
		return m_R;
	}
	//����Բ��
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//��ȡԲ��
	Point getCenter()
	{
		return m_Center;
	}
};
//3.ȫ�ֺ���:�жϵ��Բ�Ĺ�ϵ
int isInCircle(Point& p,Circle& c)
{
	double distance = pow(pow(p.getX() - c.getCenter().getX(), 2) + pow(p.getY() - c.getCenter().getY(), 2), 1.0 / 2);
	if (distance == c.getR())//��Բ��
	{
		return 0;
	}
	else if (distance > c.getR())//��Բ��
	{
		return 1;
	}
	else//��Բ��
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
		cout<<"����Բ��"<<endl;
		break;
	case 1:
		cout<<"����Բ��"<<endl;
		break;
	case -1:
		cout<<"����Բ��"<<endl;
		break;
	}

	system("pause");
	return 0;
}
