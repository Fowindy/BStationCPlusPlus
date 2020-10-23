#include <iostream>
#include <string>
using namespace std;
//51_菱形继承.cpp
class Animal
{
public:
	int m_Age;
};
//2.利用虚继承,解决菱形继承的问题
//语法:在继承之前 加上关键字 virtual 变为虚继承
//Animal类称为 虚基类
class Sheep :virtual public Animal
{
};
class Tuo :virtual public Animal
{
};
class SheepTuo :public Sheep, public Tuo
{
};
void test51()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//1.当菱形继承,两个父类拥有相同数据,需要加以作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;//28
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;//28

	//这份数据我们知道只有有一份就可以,菱形维承导致数据有两份,资源浪费
	cout << "st.m_Age = " << st.m_Age << endl;//28
}
int main()
{
	test51();
	system("pause");
	return 0;
}
