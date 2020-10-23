#include <iostream>
#include <string>
using namespace std;
//定义圆周率常量
const double PI = 3.14;
//设计一个圆类,求圆的周长
//圆求周长的公式:2*PI*半径
//class 代表设计一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:
	//属性：
	//半径
	int m_r;

	//行为:(函数)
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main15()
{
	//通过圆类,创建具体的圆(对象)
	Circle cl;
	//给圆对象的属性进行赋值
	cl.m_r = 12;
	cout<<"半径为:"<<cl.m_r<<"的圆的周长为:"<<cl.calculateZC()<<endl;
	system("pause");
	return 0;
}
