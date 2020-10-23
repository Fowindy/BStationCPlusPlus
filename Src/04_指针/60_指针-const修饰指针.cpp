#include <iostream>
#include <string>
using namespace std;
int main60()
{
	//const修饰指针有三种情况
	//1. const修饰指针-- - 常量指针
	int a = 10;
	int b = 10;

	const int* p1 = &a;
	//特点:指针指向的值不可以改,指针的指向可以改
	//*p1 = 20;//错误:指针指向的值不可以改
	p1 = &b;//正确:指针指向可以改

	//2. const修饰常量-- - 指针常量
	int* const p2 = &a;
	//特点:指针的指向不可以改,指针指向的值可以该
	*p2 = 20;//正确:指针指向的值可以改
	//p2 = &b;//错误:指针的指向不可以改

	//3. const即修饰指针，又修饰常量
	//特点:指针指向的值不可以该,指针指向也不可以改
	const int* const p3 = &a;
	//*p3 = 20;//错误:指针指向的值不可以改;
	//p3 = &b;//错误:指针的指向也不可以改;
	system("pause");
	return 0;
}
