#include <iostream>
#include <string>
using namespace std;
//值传递_实现两个数字进行交换的函数(只改变形参不改变实参)
void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"值传递可改变内部形参:swap01 num1 = "<<num1<<",swap01 num2 = "<<num2<<endl;//20,10
}
//地址传递_实现两个数字进行交换的函数(即改变形参也改变实参)
void swap02(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "地址传递可改变内部形参:swap02 num1 = " << *p1 << ",swap02 num2 = " << *p2 << endl;//20,10
}
int main62()
{
	//指针和函数
	//1.值传递
	int num1 = 10;
	int num2 = 20;
	swap01(num1, num2);
	cout << "值传递不改变外面实参:num1 = " << num1 << ",num2 = " << num2 << endl;//10,20
	//2.地址传递
	swap02(&num1, &num2);
	cout << "地址传递可改变外面实参:num1 = " << num1 << ",num2 = " << num2 << endl;//20,10
	system("pause");
	return 0;
}
