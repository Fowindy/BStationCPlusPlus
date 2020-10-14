#include <iostream>
#include <string>
using namespace std;
int main()
{
	//布尔数据类型:
	//作用:布尔数据类型代表真或假的值
	//bool类型只有两个值 :
	//true---真(本质是1)
	//false---假(本质是0)
	//bool类型占1个字节大小

	//1、创建bool数据类型
	bool flag = true;//true代表真
	std::cout<<flag<<std::endl;
	flag = false;//false代表假
	std::cout<<flag<<std::endl;
	//本质上1代表真0代表假
	//2、查看bool类型所占内存空间
	std::cout<<"bool类型所占内存空间为:"<<sizeof(flag)<<std::endl;
	system("pause");
	return 0;
}
