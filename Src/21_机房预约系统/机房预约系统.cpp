#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void Show_Menu()
{
	cout << "======================  欢迎来到传智播客机房预约系统  ====================="
		<< endl;
	cout << endl << "请输入您的身份" << endl;
	cout << "\t\t -------------------------------\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          1.学生代表           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          2.老    师           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          3.管 理 员           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          0.退    出           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t -------------------------------\n";
	cout << "输入您的选择(0~3): ";
}
int main()
{
	int select = 0;//用于接收用户的选择
	while (true)
	{
		Show_Menu();
		cin >> select;//接收用户选择
		switch (select)
		{
		case 1://学生身份
			break;
		case 2://老师身份
			break;
		case 3://管理员身份
			break;
		case 0://退出系统
			cout << "欢迎下次使用!" << endl;
			system("pause");
			return 0;
			break;
		default://输入有误
			cout << "输入有误,请重新选择!" << endl;
			system("pause");//按任意键继续
			system("cls");//清屏
			break;
		}
	}
	system("pause");
	return 0;
}
