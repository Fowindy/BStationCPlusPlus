#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
using namespace std;
//34_list容器_排序案例
//按照年龄进行升序,如果年龄相同按照身高进行降序
//自定义英雄类
class Hero
{
public:
	Hero(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;//姓名
	int m_Age;//年龄
	int m_Height;//身高
};
void test34()
{

}
int main()
{
	test34();
	system("pause");
	return 0;
}
