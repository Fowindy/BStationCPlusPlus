#include <iostream>
#include <string>
using namespace std;
//�������������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myNum);
public:
	//2.��Ա��������(ǰ++)�����,����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++()
	{
		//�Ƚ���++����
		m_Num++;
		//�ٽ�������
		return *this;
	}
	//3.��Ա��������(��++)�����
public:
	MyInteger()
	{
		m_Num = 0;
	}
private:
	int m_Num;
};
//1.�Ͻڿ�����:ȫ�ֺ���ʵ���������������
ostream& operator<<(ostream& cout, MyInteger myNum)
{
	cout<<myNum.m_Num;
	return cout;
}
void test9()
{
	MyInteger myNum;
	cout << myNum << endl;
	cout << ++(++myNum) << endl;
	cout << myNum << endl;
}
int main()
{
	test9();
	system("pause");
	return 0;
}
