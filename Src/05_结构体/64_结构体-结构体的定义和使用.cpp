#include <iostream>
#include <string>
using namespace std;
//1.创建学生数据类型:学生包括下列成员(姓名,年龄,分数)
//其实自定义数据类型就是一些数据类型的集合;
//语法: struct 类型名称 {成员列表}
//定义结构体时,struct关键字不能省略
struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;//2.3 在定义结构体时顺便创建结构体变量
int main64()
{
	//2.通过学生类型创建具体学生
	//2.1 struct Student s1;
	//创建变量时,struct关键字可以省略
	Student s1;
	//给s1属性赋值,通过变量名.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	std::cout<<"姓名:"<<s1.name<<";年龄:"<<s1.age<<";分数:"<<s1.score<<std::endl;

	//2.2 struct Student s2 = {...};
	struct Student s2 = { "李四",19,80 };
	std::cout << "姓名:" << s2.name << ";年龄:" << s2.age << ";分数:" << s2.score << std::endl;

	//2.3 在定义结构体时顺便创建结构体变量(不推荐使用)
	//给s3属性赋值,通过变量名.访问结构体变量中的属性
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	std::cout << "姓名:" << s3.name << ";年龄:" << s3.age << ";分数:" << s3.score << std::endl;

	system("pause");
	return 0;
}
