#include <iostream>
#include <string>
using namespace std;
//设计立方体类(Cube)
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等。

//1.创建立方体的类;
class Cube
{
private:
	double m_L;//长
	double m_W;//宽
	double m_H;//高
public:
	//设置长
	void setLength(double length)
	{
		m_L = length;
	}
	//获取长
	double getLength()
	{
		return m_L;
	}
	//设置宽
	void setWidth(double width)
	{
		m_W = width;
	}
	//获取宽	
	double getWidth()
	{
		return m_W;
	}
	//设置高
	void setHeight(double height)
	{
		m_H = height;
	}
	//获取高
	double getHeight()
	{
		return m_H;
	}
	//获取立方体的面积
	double getCubeArea()
	{
		return 2 * (m_H*m_L + m_H * m_W + m_L * m_W);
	}
	//获取立方体的体积
	double getCubeVolume()
	{
		return m_H * m_L*m_W;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube& c)
	{
		if (m_H == c.getHeight() && m_L == c.getLength() && m_W == c.getWidth())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
//2.设计属性
//3.设计行为 获取立方体面积和体积
//4.分别利用全局函数和成员函数,判断两个立方体是否相等
//利用全局函数判断,两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getHeight()==c2.getHeight() && c1.getLength()==c2.getLength() && c1.getWidth() == c2.getWidth())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main20()
{
	//创建一个立方体对象
	Cube c1;
	c1.setHeight(10);
	c1.setLength(10);
	c1.setWidth(10);
	cout<<"立方体的面积为:"<<c1.getCubeArea()<<endl;//600
	cout<<"立方体的体积为:"<<c1.getCubeVolume()<<endl;//1000

	//创建第二个立方体
	Cube c2;
	c2.setHeight(10);
	c2.setLength(11);
	c2.setWidth(10);
	//调用全局函数判断,两个立方体是否相等
	if (isSame(c1,c2))
	{
		cout << "这两个立方体相等" << endl;
	}
	else
	{
		cout << "这两个立方体不相等" << endl;
	}
	//调用成员函数判断两个立方体是否相等
	if (c1.isSameByClass(c2))
	{
		cout << "成员函数判断:这两个立方体相等" << endl;
	}
	else
	{
		cout << "成员函数判断:这两个立方体不相等" << endl;
	}
	system("pause");
	return 0;
}
