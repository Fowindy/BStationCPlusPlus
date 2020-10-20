#include <iostream>
#include <string>
using namespace std;
//占位参数
//语法:返回值类型 函数名(数据类型){}
//目前阶段的占位参数,我们还用不到,后面课程中会用到
//占位参数还可以有默认参数
void func(int a, int = 10)
{
	cout<<"This is func."<<endl;
}
int main12()
{
	func(20);//占位参数如果没有默认值,则必须填写
	system("pause");
	return 0;
}
