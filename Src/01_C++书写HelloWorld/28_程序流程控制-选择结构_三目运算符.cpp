#include <iostream>
#include <string>
using namespace std;
int main28()
{
	//三目运算符求三者最大值
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double numMax = 0;
	std::cout<<"请输入三个数(回车间隔):"<<std::endl;
	std::cin>>num1>>num2>>num3;
	numMax = (num1 >= num2 ? num1 : num2) >= num3 ? (num1 >= num2 ? num1 : num2) : num3;
	std::cout<<"最大值为:"<<numMax<<std::endl;
	//在C++中，三目运算符返回的是变量，可以继续赋值
	(num1 >= num2 ? num1 : num2) = 100;
	std::cout<<"num1="<<num1<<std::endl;
	std::cout<<"num2="<<num2<<std::endl;
	system("pause");
	return 0;
}
