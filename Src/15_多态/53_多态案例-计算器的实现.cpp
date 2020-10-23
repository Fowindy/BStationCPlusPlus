#include <iostream>
#include <string>
using namespace std;
//53_多态案例-计算器的实现.cpp
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//如果想扩展新的功能(比如添加除法)需要修改源码
		//在真实开发中,提倡开闭原则
		//开闭原则:对扩展进行开发,对修改进行关闭
	}
	int m_Num1;//操作数1
	int m_Num2;//操作数2
};
void test53()
{
	Calculator calc;
	int result;
	string oper;
	cout << "请输入第一个数:" << endl;
	cin >> calc.m_Num1;
	cout << "请输入第二个数:" << endl;
	cin >> calc.m_Num2;
	cout << "请输入操作符(+,-,*,/):" << endl;
	cin >> oper;
	result = calc.getResult(oper);
	cout << "结果为:" << calc.m_Num1 << " " << oper << " " << calc.m_Num2 << " = " << result << endl;
}
int main()
{
	test53();
	system("pause");
	return 0;
}
