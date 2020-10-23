#include <iostream>
#include <string>
using namespace std;
int main30()
{
	//while循环
	//在屏幕中打印出0-9这十个数字
	int num = 0;
	//在while()中填入循环条件
	//注意事项:在写while循环时一定要避免死循环的出现
	while (num<10)
	{
		std::cout<<"num = "<<num<<std::endl;
		num++;
	}
	system("pause");
	return 0;
}
