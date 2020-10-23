#include <iostream>
#include <string>
using namespace std;
//定义英雄结构体
struct Hero
{
	string name;//姓名
	int age;//年龄
	string gender;//性别
};
void bubbleSortByAge(Hero heroArr[],int length)
{
	for (int i = 0; i < length-1 ; i++)
	{
		for (int j = 0; j < length-1-i; j++)
		{
			if (heroArr[j].age > heroArr[j+1].age)
			{
				Hero temp = heroArr[j];
				heroArr[j] = heroArr[j + 1];
				heroArr[j + 1] = temp;
			}
		}
	}
}
void printHeroInfo(Hero heroArr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout<<"姓名:"<<heroArr[i].name
			<<";年龄:"<<heroArr[i].age
			<<";性别:"<<heroArr[i].gender<<endl;
	}
}
int main()
{
	//案例描述:
	//设计一个英雄的结构体, 包括成员姓名, 年龄, 性别:创建结构体数组, 数组中存放5名英雄
	//通过冒泡排序的算法, 将数组中的英雄按照年齡进行升序排序, 最终打印排序后的结果。
	//1.创建结构体数组
	Hero heroArr[5] = 
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	//存储数组的长度
	int len = sizeof(heroArr) / sizeof(heroArr[0]);
	//排序前的打印:
	cout<<"排序前的打印:"<<endl;
	printHeroInfo(heroArr, len);
	//2.按年龄冒泡排序函数
	bubbleSortByAge(heroArr,len);
	//3.打印英雄信息
	cout << "排序后的打印:" << endl;
	printHeroInfo(heroArr, len);
	system("pause");
	return 0;
}
