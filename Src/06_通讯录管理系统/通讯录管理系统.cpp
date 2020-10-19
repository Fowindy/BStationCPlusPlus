#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
string name;//����
int index;//���
//�����ϵ�˵Ľṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�	1 ��		2 Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Address;
};
//���ͨѶ¼�ṹ��
struct AddressBooks
{
	//ͨѶ¼�б������ϵ������
	//�������1000,��Ϊ�˷������ά������,�ں������ж���곣��MAX
	Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};
//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
//1.�����ϵ��
void addPerson(AddressBooks* pAbs)
{
	//�ж��ж�ͨѶ¼�Ƿ�����,������˾Ͳ�������
	if (pAbs->m_Size == MAX)
	{
		//��ʾ�û�ͨѶ¼����,���ʧ��
		cout << "ͨѶ¼����,���ʧ��!" << endl;
		//�˳�����
		return;
	}
	else
	{
		//��ʾ�û���������
		cout << "������������ϵ�˵�����:" << endl;
		string name;
		cin >> name;
		//�����û����������
		pAbs->personArray[pAbs->m_Size].m_Name = name;


		//��ʾ�û�ѡ���Ա�
		cout << "��ѡ��������ϵ�˵��Ա�(1---��,2---Ů):" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				//�����û�ѡ����Ա�
				pAbs->personArray[pAbs->m_Size].m_Sex = sex;
				//������ȷ,�˳�ѭ��
				break;
			}
			else
			{
				//��ʾ�û��������,����������
				cout << "�������!����������!" << endl;
			}
		}

		//��ʾ�û���������
		cout << "������������ϵ�˵�����:" << endl;
		int age;
		cin >> age;
		//�����û����������
		pAbs->personArray[pAbs->m_Size].m_Age = age;

		//��ʾ�û������ֻ�����
		cout << "������������ϵ�˵��ֻ�����:" << endl;
		//�����û�������ֻ�����
		cin >> pAbs->personArray[pAbs->m_Size].m_Phone;

		//��ʾ�û�����סַ
		cout << "������������ϵ�˵�סַ:" << endl;
		//�����û������סַ
		cin >> pAbs->personArray[pAbs->m_Size].m_Address;

		//����ͨѶ¼�е�����
		pAbs->m_Size++;

		//��ʾ��ӳɹ�
		cout << "��ӳɹ�!" << endl;

		//��ʾ�û������������
		system("pause");
		//����
		system("cls");
	}
}
//2.��ʾ��ϵ��
void showPerson(AddressBooks* pAbs)
{
	if (pAbs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ��!" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < pAbs->m_Size; i++)
		{
			cout << "����:" << pAbs->personArray[i].m_Name << "\t"
				<< "�Ա�:" << (pAbs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t\t"
				<< "����:" << pAbs->personArray[i].m_Age << "\t\t"
				<< "�绰:" << pAbs->personArray[i].m_Phone << "\t"
				<< "סַ:" << pAbs->personArray[i].m_Address << "\t" << endl;
		}
	}
	//��ʾ���سɹ�
	cout << "�������!" << endl;

	//��ʾ�û������������
	system("pause");
	//����
	system("cls");
}
//3.1.�����ϵ���Ƿ����,���ڷ��������,�����ڷ���-1
//����1 Ŀ������ ����2 ͨѶ¼
int IsExist(string name, AddressBooks* pAbs)
{
	for (int i = 0; i < pAbs->m_Size; i++)
	{
		//�ҵ��û������������
		if (pAbs->personArray[i].m_Name == name)
		{
			return i;//�ҵ����������
		}
	}
	return -1;//�������������û���ҵ�,����-1
}
//3.2.ɾ��ָ����ϵ�˺���
void delPersonByName(AddressBooks* pAbs)
{
	//��ʾ�û�����ɾ��Ŀ����ϵ�˵�����
	cout << "������Ҫɾ������ϵ�˵�����:" << endl;
	//�����ϵ���Ƿ����
	cin >> name;
	index = IsExist(name, pAbs);
	if (index != -1)
	{
		//ɾ����ϵ��
		pAbs->personArray[index] = pAbs->personArray[index + 1];
		pAbs->m_Size--;
		cout << "ɾ���ɹ�!" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//4.ɾ����ϵ�˺���
void searchPerson(AddressBooks* pAbs)
{
	//��ʾ�û�����Ҫ��ѯ������
	cout<<"������Ҫ��ѯ�û�������:"<<endl;
	cin>>name;
	index = IsExist(name, pAbs);
	if (index!=-1)
	{
		cout << "����:" << pAbs->personArray[index].m_Name << "\t"
			<< "�Ա�:" << (pAbs->personArray[index].m_Sex == 1 ? "��" : "Ů") << "\t\t"
			<< "����:" << pAbs->personArray[index].m_Age << "\t\t"
			<< "�绰:" << pAbs->personArray[index].m_Phone << "\t"
			<< "סַ:" << pAbs->personArray[index].m_Address << "\t" << endl;
		cout<<"��ѯ���!"<<endl;
	} 
	else
	{
		cout<<"���޴���"<<endl;
	}
	system("pause");
	system("cls");
}
int main()
{
	//����ͨѶ¼�ṹ��ı���
	AddressBooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;
	//�����û�ѡ�����
	int select = 0;
	while (true)
	{
		//�˵���ʾ�ĵ���
		showMenu();
		//��ʾ�û�����ѡ��
		cout << "������ѡ��(����):";
		std::cin >> select;
		//�û�ѡ�����
		switch (select)
		{
		case 1://1�������ϵ��
			addPerson(&abs);//���õ�ַ���ݿ�������ʵ��
			break;
		case 2://2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ��
			delPersonByName(&abs);
			break;
		case 4://4��������ϵ��
			searchPerson(&abs);
			break;
		case 5://5���޸���ϵ��
			break;
		case 6://6�������ϵ��
			break;
		case 0://0���˳�ͨѶ¼
			cout << "�˳�ϵͳ,��ӭ�´�ʹ��!" << endl;
			system("pause");
			return 0;
			break;
		}
	}
}
