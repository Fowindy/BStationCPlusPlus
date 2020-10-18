#include <iostream>
#include <string>
using namespace std;
int main61()
{
	//指针和数组
	//利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout<<"传统访问数组中的第一个元素为:"<<arr[0]<<std::endl;//1

	//利用指针访问数组中的第一个元素
	int* p = arr;//arr就是数组首地址
	std::cout<<"利用指针访问数组中的第一个元素:"<<*p<<std::endl;//1

	//利用指针发那个问数组中的第二个元素
	//注意:因为指针p为int类型的指针,占用是4个字节,p每加一次加4个字节(即第二个元素的地址)
	p++;
	std::cout<<"利用指针访问数组中的第二个元素:"<<*p<<std::endl;//2

	cout<<"-------------------利用指针遍历数组中的每一个元素---------------"<<endl;
	p = arr;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		cout<<"数组中的第"<<i+1<<"个元素为:"<<*p<<endl;
		p++;
	}
	system("pause");
	return 0;
}
