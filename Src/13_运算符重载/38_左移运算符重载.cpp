#include <iostream>
#include <string>
using namespace std;
//×óÒÆÔËËã·ûÖØÔØ
class Person8
{
public:
	int m_A;
	int m_B;
};
void test8()
{
	Person8 p;
	p.m_A = 10;
	p.m_B = 10;
	cout<<p.m_A<<endl;//10
}
int main()
{
	test8();
	system("pause");
	return 0;
}
