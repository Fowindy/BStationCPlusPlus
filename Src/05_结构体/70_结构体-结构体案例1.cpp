#include <iostream>
#include <string>
using namespace std;
#include <ctime>
//定义学生的结构体
struct Student
{
	//学生的姓名
	string sName;
	//分数
	int score;
};
//定义老师的结构体
struct Teacher
{
	//学生结构体数组变量
	Student stuArray[5];//重要!!!学生嵌套定义必须老师结构体中的最开始,否则报错
	//老师姓名
	string tName;
};
//给老师和学生赋值的函数
void allocateSpace(Teacher tArray[], int length)
{
	//定义一个名字后缀变量
	string nameSeed = "ABCDE";
	//初始化老师名字头
	string tName = "Teacher_";
	//初始化老师名字头
	string sName = "Student_";
	for (int i = 0; i < length; i++)
	{
		tArray[i].tName = tName + nameSeed[i];
		for (int j = 0; j < sizeof(tArray[i].stuArray) / sizeof(tArray[i].stuArray[0]); j++)
		{
			tArray[i].stuArray[j].sName = sName + nameSeed[j];
			//分数随机
			int random = rand() % 61 + 40;//40~100
			tArray[i].stuArray[j].score = random;
		}
	}
}
void printInfo(Teacher tArray[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "第" << i + 1 << "位老师的名字:" << tArray[i].tName<<endl;
		for (int j = 0; j < sizeof(tArray[i].stuArray) / sizeof(tArray[i].stuArray[0]); j++)
		{
			cout << "\t第" << j + 1 << "位学生的名字:" << tArray[i].stuArray[j].sName
				<< ";第" << j + 1 << "位学生的分数:" << tArray[i].stuArray[j].score << endl;
		}
	}
}
//1.创建3名老师的数组
Teacher tArray[3];//重要!!!Teacher定义必须在main函数之前,否则报错
int main70()
{
	//添加随机数种子作用利用当前系统时间生成随机数,防止每次运行随机数都一样
	srand((unsigned int)time(NULL));
	//2.通过函数给3名老师的信息赋值,并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len);
	//3.打印所有老师所带的学生信息
	printInfo(tArray, len);
	system("pause");
	return 0;
}



