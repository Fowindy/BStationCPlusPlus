#include <iostream>
#include <string>
using namespace std;
int main32()
{
	//do.. whilei语句
	//在屏幕中输出0到9这10个数字
	int num = 0;
	do 
	{
		std::cout<<"num = "<<num<<std::endl;
		num++;
	} while (num < 10);
	// do... while和while循环区别在于do. ..while会先执行一次循环语句
	system("pause");
	return 0;
}
