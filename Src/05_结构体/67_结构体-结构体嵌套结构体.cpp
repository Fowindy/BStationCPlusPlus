#include <iostream>
#include <string>
using namespace std;
//结构体嵌套结构体
//0.定义学生的结构体
struct Student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
//1.定义老师结构体
struct Teacher
{
	int id;//教师编号
	string name;//教师姓名
	int age;//教师年龄
	Student stu;//辅导学生(结构体)
};
int main67()
{
	//创建老师
	Teacher t;
	//给老师结构体中的成员列表属性赋值
	t.name = "老王";
	t.age = 35;
	t.id = 1001;
	t.stu.name = "小王";
	t.stu.age = 18;
	t.stu.score = 89;
	std::cout<<"老师姓名:"<< t.name
		<<";老师编号:"<<t.id
		<<";老师年龄:"<<t.age
		<<";老师辅导的学生姓名:"<<t.stu.name
		<<";学生的年龄:"<<t.stu.age
		<<";学生考试的分数:"<<t.stu.score<<::endl;
	system("pause");
	return 0;
}
