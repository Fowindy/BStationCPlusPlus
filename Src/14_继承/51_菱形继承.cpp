#include <iostream>
#include <string>
using namespace std;
//51_菱形继承.cpp
class Animal
{
public:
	int m_Age;
};
class Sheep :public Animal
{
};
class Tuo :public Animal
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
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;//18
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;//28
}
int main()
{
	test51();
	system("pause");
	return 0;
}
