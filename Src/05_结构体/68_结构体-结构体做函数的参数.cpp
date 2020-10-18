#include <iostream>
#include <string>
using namespace std;
//定义学生结构体
struct Student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
//打印学生信息的函数
//1.值传递
void printStudent1(Student stu)
{
	//值传递_函数中形参发生变化不会影响外面的实参
	stu.age = 100;
	cout<<"子函数1中姓名:"<<stu.name
		<<";子函数1中年龄:"<<stu.age
		<<";子函数1中的分数:"<<stu.score<<endl;
}
//2.地址传递
void printStudent2(Student* p)
{
	//地址传递_函数中形参发生变化会影响外面的实参
	p->age = 200;
	cout << "子函数2中姓名:" << p->name
		<< ";子函数2中年龄:" << p->age
		<< ";子函数2中的分数:" << p->score << endl;
}
int main68()
{
	//结构体做函数参数
	//将学生传到一个参数中,打印学生身上的所有信息
	//创建结构体变量
	Student stu;
	stu.name = "张三";
	stu.age = 18;
	stu.score = 89;
	//值传递_结构体做函数参数
	printStudent1(stu);
	//地址传递_结构体做函数参数
	printStudent2(&stu);
	cout << "姓名:" << stu.name
		<< ";年龄:" << stu.age
		<< ";分数:" << stu.score << endl;
	system("pause");
	return 0;
}
