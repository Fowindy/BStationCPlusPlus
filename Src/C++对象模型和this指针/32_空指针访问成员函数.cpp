#include <iostream>
#include <string>
using namespace std;
//��ָ����ʳ�Ա����
class Person2
{
public:
	void showClassName()
	{
		cout << "this is Person2 class" << endl;
	}
	void showPersonAge()
	{
		//����:ԭ���Ǵ����ָ����ΪNULL
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;//m_Age������Ĭ��Ϊthis->m_Age
	}
	int m_Age;
};
void test2()
{
	//������ָ��
	Person2* p = NULL;
	//p->showClassName();
	p->showPersonAge();
}
int main()
{
	test2();
	system("pause");
	return 0;
}
