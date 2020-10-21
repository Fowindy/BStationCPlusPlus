#include <iostream>
#include <string>
using namespace std;
//�����������(Cube)
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�

//1.�������������;
class Cube
{
private:
	double m_L;//��
	double m_W;//��
	double m_H;//��
public:
	//���ó�
	void setLength(double length)
	{
		m_L = length;
	}
	//��ȡ��
	double getLength()
	{
		return m_L;
	}
	//���ÿ�
	void setWidth(double width)
	{
		m_W = width;
	}
	//��ȡ��	
	double getWidth()
	{
		return m_W;
	}
	//���ø�
	void setHeight(double height)
	{
		m_H = height;
	}
	//��ȡ��
	double getHeight()
	{
		return m_H;
	}
	//��ȡ����������
	double getCubeArea()
	{
		return 2 * (m_H*m_L + m_H * m_W + m_L * m_W);
	}
	//��ȡ����������
	double getCubeVolume()
	{
		return m_H * m_L*m_W;
	}
	//���ó�Ա�����ж������������Ƿ����
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
//2.�������
//3.�����Ϊ ��ȡ��������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա����,�ж������������Ƿ����
//����ȫ�ֺ����ж�,�����������Ƿ����
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
	//����һ�����������
	Cube c1;
	c1.setHeight(10);
	c1.setLength(10);
	c1.setWidth(10);
	cout<<"����������Ϊ:"<<c1.getCubeArea()<<endl;//600
	cout<<"����������Ϊ:"<<c1.getCubeVolume()<<endl;//1000

	//�����ڶ���������
	Cube c2;
	c2.setHeight(10);
	c2.setLength(11);
	c2.setWidth(10);
	//����ȫ�ֺ����ж�,�����������Ƿ����
	if (isSame(c1,c2))
	{
		cout << "���������������" << endl;
	}
	else
	{
		cout << "�����������岻���" << endl;
	}
	//���ó�Ա�����ж������������Ƿ����
	if (c1.isSameByClass(c2))
	{
		cout << "��Ա�����ж�:���������������" << endl;
	}
	else
	{
		cout << "��Ա�����ж�:�����������岻���" << endl;
	}
	system("pause");
	return 0;
}
