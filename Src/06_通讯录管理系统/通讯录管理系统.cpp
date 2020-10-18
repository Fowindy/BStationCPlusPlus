#include <iostream>
#include <string>
using namespace std;
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
int main()
{
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
			break;
		case 2://2、显示联系人
			break;
		case 3://3、删除联系人
			break;
		case 4://4、查找联系人
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
		default:
			break;
		}
	}
	return 0;
}
