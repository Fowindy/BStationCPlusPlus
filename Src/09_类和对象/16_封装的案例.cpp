#include <iostream>
#include <string>
using namespace std;
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
	//类中的属性和行为 我们统一称为成员
	//属性	成员属性 成员变量
	//行为	成员函数	成员方法
public:
	//属性:
	//姓名
	string m_name;
	//学号
	int m_id;
public:
	//行为:
	//设置姓名
	void setName(string name)
	{
		m_name = name;
	}
	//设置学号
	void setId(int id)
	{
		m_id = id;
	}
	//显示姓名和学号
	void showStudent()
	{
		cout<<"学生的姓名:"<<m_name<<";学生的学号:"<<m_id<<endl;
	}

};
int main16()
{
	//通过学生类,创建具体的学生(对象)  实例化对象
	Student stu1;
	//给stu1对象,进行属性赋值
	stu1.m_name = "张三";
	stu1.m_id = 1;
	//显示学生信息
	stu1.showStudent();

	Student stu2;
	stu2.m_name = "李四";
	stu2.m_id = 2;
	stu2.showStudent();

	//通过set行为给属性赋值的方式
	Student stu3;
	stu3.setName("王五");
	stu3.setId(3);
	stu3.showStudent();
	system("pause");
	return 0;
}
