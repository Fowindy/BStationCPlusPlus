#include <iostream>
#include <string>
using namespace std;
//结构体数组
//1.定义结构体
struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};
int main65()
{
	//2.创建结构体数组
	Student stuArray[3] =
	{
		{"张三",18,80 },
		{"李四",19,60 },
		{"王五",20,70 }
	};
	//3.给结构体数组中的元素赋值
	stuArray[2].age = 23;
	stuArray[2].name = "赵六";
	stuArray[2].score = 78;
	//4.遍历结构体数组
	for (int i = 0; i < sizeof(stuArray)/sizeof(stuArray[0]) ; i++)
	{
		std::cout<<"姓名:"<<stuArray[i].name<<";年龄:"<<stuArray[i].age<<";分数:"<<stuArray[i].score<<std::endl;
	}
	system("pause");
	return 0;
}
