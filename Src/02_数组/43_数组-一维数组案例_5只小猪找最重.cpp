#include <iostream>
#include <string>
using namespace std;
int main()
{
	//1.创建5只小猪的体重数组
	int arr[5] = { 300,350,200,400,250 };
	//2.从数组中找到最大值
	int max = 0;//先定义一个最大值为0
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		if (max <= arr[i]) 
		{
			max = arr[i];
		}
	}
	cout<<"5只小猪中最重的小猪体重为:"<<max<<endl;
	system("pause");
	return 0;
}
