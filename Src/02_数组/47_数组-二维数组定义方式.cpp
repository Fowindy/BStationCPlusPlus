#include <iostream>
#include <string>
using namespace std;
int main47()
{
	//��ά���鶨�巽ʽ
	/*
	1, �������� ������[����][����];
	2, �������� ������[����][����] = {(����1,����2),(����3,����4)};
	3, �������� ������[����][����] = {����1, ����2, ����3, ����4};
	4, �������� ������[][����] = {����1, ����2, ����3, ����4};
	*/
	//1, �������� ������[����][����];
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); i++)
	{
		for (size_t j = 0; j < sizeof(arr[i]) / sizeof(int); j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	//2, �������� ������[����][����] = { (����1,����2),(����3,����4) };(�Ƽ�)
	cout << "----------------------------------" << endl;
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (size_t i = 0; i < sizeof(arr2) / sizeof(*arr2); i++)
	{
		for (size_t j = 0; j < sizeof(arr2[i]) / sizeof(int); j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << "\n";
	}
	//3, �������� ������[����][����] = { ����1, ����2, ����3, ����4 };
	cout<<"----------------------------------"<<endl;
	int arr3[2][3] = { 1,2,3,4,5,6 };
	for (size_t i = 0; i < sizeof(arr3) / sizeof(*arr3); i++)
	{
		for (size_t j = 0; j < sizeof(arr3[i]) / sizeof(int); j++)
		{
			cout << arr3[i][j] << "\t";
		}
		cout << "\n";
	}
	//4, �������� ������[][����] = { ����1, ����2, ����3, ����4 };
	cout<<"----------------------------------"<<endl;
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (size_t i = 0; i < sizeof(arr4) / sizeof(*arr4); i++)
	{
		for (size_t j = 0; j < sizeof(arr4[i]) / sizeof(int); j++)
		{
			cout << arr4[i][j] << "\t";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}
