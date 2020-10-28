#include <iostream>
#include <string>
#include <vector>
using namespace std;
//13_vector容器_赋值操作
void PrintVector1(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test13()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	PrintVector1(v1);//0 1 2 3 4 5 6 7 8 9
	//赋值 operator=
	vector<int> v2;
	v2 = v1;
	PrintVector1(v2);//0 1 2 3 4 5 6 7 8 9
}
int main()
{
	test13();
	system("pause");
	return 0;
}
