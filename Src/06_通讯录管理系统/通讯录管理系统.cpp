#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
string name;//名字
int index;//序标
//设计联系人的结构体
struct Person
{
	//姓名
	string m_Name;
	//性别	1 男		2 女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Address;
};
//设计通讯录结构体
struct AddressBooks
{
	//通讯录中保存的联系人数组
	//最大容量1000,但为了方便后续维护数据,在宏声明中定义宏常量MAX
	Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};
//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
//1.添加联系人
void addPerson(AddressBooks* pAbs)
{
	//判断判断通讯录是否已满,如果满了就不再增加
	if (pAbs->m_Size == MAX)
	{
		//提示用户通讯录已满,添加失败
		cout << "通讯录已满,添加失败!" << endl;
		//退出函数
		return;
	}
	else
	{
		//提示用户输入姓名
		cout << "请输入新增联系人的姓名:" << endl;
		string name;
		cin >> name;
		//保存用户输入的姓名
		pAbs->personArray[pAbs->m_Size].m_Name = name;


		//提示用户选择性别
		cout << "请选择新增联系人的性别(1---男,2---女):" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				//保存用户选择的性别
				pAbs->personArray[pAbs->m_Size].m_Sex = sex;
				//输入正确,退出循环
				break;
			}
			else
			{
				//提示用户输入错误,请重新输入
				cout << "输入错误!请重新输入!" << endl;
			}
		}

		//提示用户输入年龄
		cout << "请输入新增联系人的年龄:" << endl;
		int age;
		cin >> age;
		//保存用户输入的年龄
		pAbs->personArray[pAbs->m_Size].m_Age = age;

		//提示用户输入手机号码
		cout << "请输入新增联系人的手机号码:" << endl;
		//保存用户输入的手机号码
		cin >> pAbs->personArray[pAbs->m_Size].m_Phone;

		//提示用户输入住址
		cout << "请输入新增联系人的住址:" << endl;
		//保存用户输入的住址
		cin >> pAbs->personArray[pAbs->m_Size].m_Address;

		//更新通讯录中的人数
		pAbs->m_Size++;

		//提示添加成功
		cout << "添加成功!" << endl;

		//提示用户按任意键继续
		system("pause");
		//清屏
		system("cls");
	}
}
//2.显示联系人
void showPerson(AddressBooks* pAbs)
{
	if (pAbs->m_Size == 0)
	{
		cout << "通讯录为空!" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < pAbs->m_Size; i++)
		{
			cout << "姓名:" << pAbs->personArray[i].m_Name << "\t"
				<< "性别:" << (pAbs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t\t"
				<< "年龄:" << pAbs->personArray[i].m_Age << "\t\t"
				<< "电话:" << pAbs->personArray[i].m_Phone << "\t"
				<< "住址:" << pAbs->personArray[i].m_Address << "\t" << endl;
		}
	}
	//提示加载成功
	cout << "加载完成!" << endl;

	//提示用户按任意键继续
	system("pause");
	//清屏
	system("cls");
}
//3.1.检测联系人是否存在,存在返回其序标,不存在返回-1
//参数1 目标名字 参数2 通讯录
int IsExist(string name, AddressBooks* pAbs)
{
	for (int i = 0; i < pAbs->m_Size; i++)
	{
		//找到用户输入的姓名了
		if (pAbs->personArray[i].m_Name == name)
		{
			return i;//找到返回其序标
		}
	}
	return -1;//如果遍历结束都没有找到,返回-1
}
//3.2.删除指定联系人函数
void delPersonByName(AddressBooks* pAbs)
{
	//提示用户输入删除目标联系人的名字
	cout << "请输入要删除的联系人的名字:" << endl;
	//检测联系人是否存在
	cin >> name;
	index = IsExist(name, pAbs);
	if (index != -1)
	{
		//删除联系人
		pAbs->personArray[index] = pAbs->personArray[index + 1];
		pAbs->m_Size--;
		cout << "删除成功!" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//4.删除联系人函数
void searchPerson(AddressBooks* pAbs)
{
	//提示用户输入要查询的名字
	cout<<"请输入要查询用户的名字:"<<endl;
	cin>>name;
	index = IsExist(name, pAbs);
	if (index!=-1)
	{
		cout << "姓名:" << pAbs->personArray[index].m_Name << "\t"
			<< "性别:" << (pAbs->personArray[index].m_Sex == 1 ? "男" : "女") << "\t\t"
			<< "年龄:" << pAbs->personArray[index].m_Age << "\t\t"
			<< "电话:" << pAbs->personArray[index].m_Phone << "\t"
			<< "住址:" << pAbs->personArray[index].m_Address << "\t" << endl;
		cout<<"查询完成!"<<endl;
	} 
	else
	{
		cout<<"查无此人"<<endl;
	}
	system("pause");
	system("cls");
}
int main()
{
	//创建通讯录结构体的变量
	AddressBooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;
	//创建用户选择变量
	int select = 0;
	while (true)
	{
		//菜单显示的调用
		showMenu();
		//提示用户输入选择
		cout << "请输入选择(数字):";
		std::cin >> select;
		//用户选择控制
		switch (select)
		{
		case 1://1、添加联系人
			addPerson(&abs);//利用地址传递可以修饰实参
			break;
		case 2://2、显示联系人
			showPerson(&abs);
			break;
		case 3://3、删除联系人
			delPersonByName(&abs);
			break;
		case 4://4、查找联系人
			searchPerson(&abs);
			break;
		case 5://5、修改联系人
			break;
		case 6://6、清空联系人
			break;
		case 0://0、退出通讯录
			cout << "退出系统,欢迎下次使用!" << endl;
			system("pause");
			return 0;
			break;
		}
	}
}
