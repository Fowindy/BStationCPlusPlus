#include <iostream>
#include <string>
using namespace std;
//������Ԫ
//������
class Building5;
//�û�����
class GoodGay
{
public:
	GoodGay();
	//�û������в�������������
	void visit();
	//�û������ж���Building���Ա
	Building5* building;
};
//��������
class Building5
{
	//������Ԫ����
	friend class GoodGay;
public:
	//����������Ա����
	Building5();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
//����ʵ�ֳ�Ա����
Building5::Building5()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGay::GoodGay()
{
	//����һ��������Ķ���
	building = new Building5;
}
void GoodGay::visit()
{
	cout<<"�û��������ڷ���:"<<building->m_SittingRoom<<endl;
	cout<<"�û��������ڷ���:"<<building->m_BedRoom<<endl;
}
void test5()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test5();
	system("pause");
	return 0;
}
