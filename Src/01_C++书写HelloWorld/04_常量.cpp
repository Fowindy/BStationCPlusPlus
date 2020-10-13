#include <iostream>
using namespace std;
//常量的定义方式
//1.#define宏常量(后面一定不要加分号)
#define Day 7
//2.const修饰的变量
const int month = 12;
int main()
{
	//Day = 14;//错误:Day是常量,一旦修改就会报错
	std::cout<<"一周共有:"<<Day<<"天"<<std::endl;
	//month = 13;//错误:const修饰的变量也称为常量,一旦修改就会报错;
	std::cout<<"一年共有:"<<month<<"个月份"<<std::endl;
	system("pause");
	return 0;
}
