#include <iostream>
#include <string>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;
int main01()
{
	//全局区
	//全局区存放的数据:全局变量,静态变量,常量
	//创建一个普通的局部变量
	//局部变量:只要写在函数内部的变量都叫局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址为:" << (int)&a << endl;//16578468
	cout << "局部变量b的地址为:" << (int)&b << endl;//16578456

	cout << "全局变量g_a的地址为:" << (int)&g_a << endl;//3260468
	cout << "全局变量g_b的地址为:" << (int)&g_b << endl;//3260472

	//静态变量:在普通变量前面加上static,属于静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为:" << (int)&s_a << endl;//3260476
	cout << "静态变量s_b的地址为:" << (int)&s_b << endl;//3260480

	//常量
	//字符串常量
	cout<<"字符串常量的地址为:"<<(int)&"hello world"<<endl;
	//const修饰的变量
	//const修饰的全局变量,const修饰的局部变量
	cout << "const修饰的全局变量c_g_a的地址为:" << (int)&c_g_a << endl;//3260476
	cout << "const修饰的全局变量c_g_b的地址为:" << (int)&c_g_b << endl;//3260480

	int c_l_a = 10;//c-const g-global l-local
	int c_l_b = 10;
	cout << "const修饰的局部变量c_l_a的地址为:" << (int)&c_l_a << endl;//3260476
	cout << "const修饰的局部变量c_l_b的地址为:" << (int)&c_l_b << endl;//3260480
	system("pause");
	return 0;
}
