#include <iostream>
#include <string>
using namespace std;
//结构体中const的使用场景
//定义学生的结构体
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};
//值传递的缺点:会将学生结构体中的数据全部拷贝作为参数,会大大占用运行内存
void printStudents1(Student stu)
{
	cout<<"姓名:"<<stu.name
		<<";年龄:"<<stu.age
		<<";分数:"<<stu.score<<endl;
}
//将函数的形参改为指针,可以减少内存空间,而且不会复制新的副本出来
void printStudents2(const Student* p)
{
	//p->age = 150;//加入const之后,一旦有修改的操作就会报错;可以防止误操作,只读
	cout << "姓名:" << p->name
		<< ";年龄:" << p->age
		<< ";分数:" << p->score << endl;
}
int main69()
{
	//创建结构体变量
	Student s = { "张三",15,70 };
	printStudents1(s);
	printStudents2(&s);
	cout << "姓名:" << s.name
		<< ";年龄:" << s.age
		<< ";分数:" << s.score << endl;
	system("pause");
	return 0;
}
