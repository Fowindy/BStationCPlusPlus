#include <iostream>
#include <string>
using namespace std;
int main()
{
	// �߼������_��(&&)
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;//1

	a = 0;
	b = 10;
	cout << (a && b) << endl;//0

	a = 0;
	b = 0;
	cout << (a && b) << endl;//0

	//ͬ��Ϊ��,����Ϊ��
	system("pause");
	return 0;
}
