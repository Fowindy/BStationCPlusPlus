#include <iostream>
#include <string>
using namespace std;
//结构体指针
//1.定义学生的结构体
struct Student
{
	string name;//姓名
	int age;//年龄
	double height;//身高
	int score;//分数
};
int main66()
{
	//2.创建学生结构体变量
	Student s = { "张三",18,175,88 };
	//3.通过指针指向结构体变量
	Student* p = &s;
	//4.通过指针访问结构体变量中的数据
	//通过结构体指针访问结构体中的属性,需要利用'->'
	std::cout<<"姓名:"<<p->name<<";年龄:"<<p->age<<";身高:"<<p->height<<";分数:"<<p->score<<std::endl;
	system("pause");
	return 0;
}
