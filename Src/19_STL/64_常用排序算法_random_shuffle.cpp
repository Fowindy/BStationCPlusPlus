#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
//64_常用排序算法_random_shuffle_洗牌
void myPrint64(int val)
{
	cout << val << " ";
}
void test64()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "------------------打乱前:----------------" << endl;
	for_each(v.begin(), v.end(), myPrint64);//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	cout << "------------------打乱后:----------------" << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint64);//0 5 3 2 7 9 6 8 1 4
	cout << endl;
}
int main()
{
	test64();
	system("pause");
	return 0;
}
