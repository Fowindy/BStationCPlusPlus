#include <iostream>
#include <string>
using namespace std;
int main27()
{
	//��ֻС������أ����ص�������
#pragma region ������ֻС������ر���
	double weightA = 0;
	double weightB = 0;
	double weightC = 0;
#pragma endregion
	cout << "������С��A������:" << endl;
	cin >> weightA;
	cout << "������С��B������" << endl;
	cin >> weightB;
	cout << "������С��C������" << endl;
	cin >> weightC;
	cout << "С��A������Ϊ:" << weightA << endl;
	cout << "С��B������Ϊ:" << weightB << endl;
	cout << "С��C������Ϊ:" << weightC << endl;
	//3���ж���ֻС������
	if (weightA >= weightB)//A>B
	{
		if (weightB >= weightC)//B>C
		{
			std::cout << "С��A����" << std::endl;
			std::cout << "С����������Ϊ��С��A>С��B>С��C" << std::endl;
		}
		else if (weightA >= weightC)//A>C
		{
			std::cout << "С��A����" << std::endl;
			std::cout << "С����������Ϊ��С��A>С��C>С��B" << std::endl;
		}
		else
		{
			std::cout << "С��C����" << std::endl;
			std::cout << "С����������Ϊ��С��C>С��A>С��B" << std::endl;
		}
	}
	else//B>A
	{
		if (weightA >= weightC)
		{
			std::cout << "С��B����" << std::endl;
			std::cout << "С����������Ϊ��С��B>С��A>С��C" << std::endl;
		}
		else
		{
			if (weightB >= weightC)
			{
				std::cout << "С��B����" << std::endl;
				std::cout << "С����������Ϊ��С��B>С��C>С��A" << std::endl;
			}
			else
			{
				std::cout << "С��C����" << std::endl;
				std::cout << "С����������Ϊ��С��C>С��B>С��A" << std::endl;
			}
		}
	}
	system("pause");
	return 0;
}
