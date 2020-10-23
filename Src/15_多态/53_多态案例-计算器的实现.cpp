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
//1.利用多态实现计算器
//多态好处:
//1、组织结构清晰
//2、可读性强
//3、对于前期和后期扩展以及维护性高
//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;//操作数1
	int m_Num2;//操作数2
};
//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class ChengFaCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
//除法计算器类
class ChuFaCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 / m_Num2;
	}
};
void test531()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//因为创建在堆区,用完记得销毁
	delete abc;
	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
	//乘法运算
	abc = new ChengFaCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
	//除法运算
	abc = new ChuFaCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " / " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}
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
int main53()
{
	//test53();
	test531();
	system("pause");
	return 0;
}
