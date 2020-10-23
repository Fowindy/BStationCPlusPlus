#include <iostream>
#include <string>
using namespace std;
int main59()
{
	//野指针
	//在程序中,尽量避免出现野指针
	//指针变量p指向内存地址为0x1011的空间
	int* p = (int*)0x1011;
	//访问野指针报错
	//空指针和野指针都不是我们申请的空间,因此不要访问
	cout<<*p<<endl;
	system("pause");
	return 0;
}
