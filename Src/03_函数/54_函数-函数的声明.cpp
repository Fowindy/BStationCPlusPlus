#include <iostream>
#include <string>
using namespace std;
//函数的声明
//比较函数,实现两个整型数字进行比较,返回较大值
//函数定义
//注意1:main函数调用的函数如果没有函数声明,则不允许放在main函数之后;
//注意2:如果有函数的声明,则被声明的函数既可以放在main函数之前也可以放在main函数之后
//注意3:函数的声明一定要放在被调用函数之前
//函数的声明
int getMax(int a, int b);
//注意4:声明可以有多次(但一般建议只声明一次),但定义只能有一次;
int getMax(int a, int b);
int main54()
{
	cout<<getMax(10,20)<<endl;
	system("pause");
	return 0;
}
int getMax(int a, int b)
{
	return a > b ? a : b;
}
#pragma region 下面是错的,函数定义只能有一次;
//int getMax(int a, int b)
//{
//	return a > b ? a : b;
//}
#pragma endregion

