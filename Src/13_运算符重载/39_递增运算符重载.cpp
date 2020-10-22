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
	//MyInteger operator++(int) int����ռλ����,��������ǰ��++�ͺ���++
	//����MyInteger����������,ԭ���Ƿ��ص���temp,��Ա�������к���ͷ���
	MyInteger operator++(int)
	{
		//�ȼ�¼��ʱ�Ľ��
		MyInteger temp = *this;//tempΪ�ֲ�����
		//�����
		m_Num++;
		//��󽫼�¼�Ľ������
		return temp;
	}
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
	cout << myNum << endl;//0
	cout << ++(++myNum) << endl;//2
	cout << myNum << endl;//2
}
void test10()
{
	MyInteger myNum;
	cout<<myNum++<<endl;//0
	cout<<myNum<<endl;//1
}
int main()
{
	test9();
	test10();
	system("pause");
	return 0;
}
