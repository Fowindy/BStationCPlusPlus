#include <iostream>
using namespace std;
int main9()
{
	//1.单精度 float
	//2.双精度 double
	//默认情况下,输出一个小数,会显示出6位有效数字
	float f1 = 3.14f;//加f省去转换步骤
	std::cout<<"f1 = "<<f1<<std::endl;
	double d1 = 3.1415926;
	std::cout<<"d1 = "<<d1<<std::endl;//3.14159
	//统计float和double占用的内存空间
	std::cout<<"float占用的内存空间为:"<<sizeof(f1)<<std::endl;//4
	std::cout<<"double占用的内存空间为:"<<sizeof(d1)<<std::endl;//8
	//科学计数法
	float f2 = 3e2;//3*10^2
	std::cout<<"f2 = "<<f2<<std::endl;//300
	float f3 = 3e-2;//3*10^-2
	std::cout<<"f3 = "<<f3<<std::endl;//0.03
	system("pause");
	return 0;
}
