#include <iostream>
#include <string>
using namespace std;
#include "MyArray.hpp"
void test15()
{
	MyArray<int> arr1(5);//MyArray的有参构造
	MyArray<int> arr2(arr1);//拷贝构造
	MyArray<int> arr3(100);//MyArray的有参构造
	arr3 = arr2 = arr1;//MyArray的重载操作符=
}
int main()
{
	test15();
	system("pause");
	return 0;
}
